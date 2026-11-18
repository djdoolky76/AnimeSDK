#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PJOHPBGHNHK;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PMJBAJCHMFK_GKGHCHMCNMO_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x13725140)
#define PMJBAJCHMFK_GKGHCHMCNMO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13725070)
#define PMJBAJCHMFK_GKGHCHMCNMO_KDABDJLEKJB_OFFSET UNITYSDK_OFFSET(0x13724FE0)
#define PMJBAJCHMFK_GKGHCHMCNMO__CTOR_OFFSET UNITYSDK_OFFSET(0x13725130)

inline static constexpr unsigned int PMJBAJCHMFK_GKGHCHMCNMO_TypeDefinitionIndex = 38626;

class PMJBAJCHMFK_GKGHCHMCNMO : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::PJOHPBGHNHK*>* EHLHEJFJAAI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMJBAJCHMFK_GKGHCHMCNMO__CTOR_OFFSET))(this);
	}

	::System::Void KDABDJLEKJB(::PJOHPBGHNHK* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::PJOHPBGHNHK*))((::PBYTE)hIl2Cpp + PMJBAJCHMFK_GKGHCHMCNMO_KDABDJLEKJB_OFFSET))(this, AELLPLBJELA);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMJBAJCHMFK_GKGHCHMCNMO_DISPOSE_OFFSET))(this);
	}

	::PMJBAJCHMFK_GKGHCHMCNMO* BBPCBEEHALC()
	{
		return ((::PMJBAJCHMFK_GKGHCHMCNMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMJBAJCHMFK_GKGHCHMCNMO_BBPCBEEHALC_OFFSET))(this);
	}
};
