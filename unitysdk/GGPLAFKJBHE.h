#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HINBPICMBHI;
class KCJOLCJKIHE;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GGPLAFKJBHE_ICNBFONCFDC_OFFSET UNITYSDK_OFFSET(0x19330100)
#define GGPLAFKJBHE_KMNFAJNLFKG_OFFSET UNITYSDK_OFFSET(0x19330900)
#define GGPLAFKJBHE__CTOR_OFFSET UNITYSDK_OFFSET(0x19330070)

inline static constexpr unsigned int GGPLAFKJBHE_TypeDefinitionIndex = 13075;

class GGPLAFKJBHE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::KCJOLCJKIHE*>*>* OIHFMDDJEJJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGPLAFKJBHE__CTOR_OFFSET))(this);
	}

	::System::Void ICNBFONCFDC(::HINBPICMBHI* GDILGDGAPEL)
	{
		return ((::System::Void(*)(::PVOID, ::HINBPICMBHI*))((::PBYTE)hIl2Cpp + GGPLAFKJBHE_ICNBFONCFDC_OFFSET))(this, GDILGDGAPEL);
	}

	::System::Boolean KMNFAJNLFKG(::System::Int32 AOCOIDIMLIH, ::System::Collections::Generic::List_1<::KCJOLCJKIHE*>*& DJLOKMMLFJC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::KCJOLCJKIHE*>*&))((::PBYTE)hIl2Cpp + GGPLAFKJBHE_KMNFAJNLFKG_OFFSET))(this, AOCOIDIMLIH, DJLOKMMLFJC);
	}
};
