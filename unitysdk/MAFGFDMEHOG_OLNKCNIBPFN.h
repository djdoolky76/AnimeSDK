#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MEHLONLGMGK;
namespace System { class String; }
namespace System { template <typename T> class Predicate_1; }

#define MAFGFDMEHOG_OLNKCNIBPFN_MBGFAMBBABM_OFFSET UNITYSDK_OFFSET(0x14DD7880)
#define MAFGFDMEHOG_OLNKCNIBPFN__CTOR_OFFSET UNITYSDK_OFFSET(0x14DD7870)

inline static constexpr unsigned int MAFGFDMEHOG_OLNKCNIBPFN_TypeDefinitionIndex = 46030;

class MAFGFDMEHOG_OLNKCNIBPFN : public ::System::Object
{
public:
	::System::Predicate_1<::MEHLONLGMGK*>* DLMJCFBENGB; // 0x10
	::System::String* ECAFOHDBICH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFGFDMEHOG_OLNKCNIBPFN__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGFAMBBABM(::MEHLONLGMGK* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::MEHLONLGMGK*))((::PBYTE)hIl2Cpp + MAFGFDMEHOG_OLNKCNIBPFN_MBGFAMBBABM_OFFSET))(this, HAAEBCOBKFF);
	}
};
