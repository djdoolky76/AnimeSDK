#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IBENDELLLAO;
namespace System { class String; }

#define BKJPDLEPMJB_BCENJPFHOOM_OFFSET UNITYSDK_OFFSET(0x128AE4A0)
#define BKJPDLEPMJB_EFGHIPDEKNA_OFFSET UNITYSDK_OFFSET(0x128AE300)
#define BKJPDLEPMJB_HBLILEJPHKB_OFFSET UNITYSDK_OFFSET(0x128ADDF0)
#define BKJPDLEPMJB_LPDEFPMFKKB_OFFSET UNITYSDK_OFFSET(0x128ADF20)
#define BKJPDLEPMJB__CTOR_OFFSET UNITYSDK_OFFSET(0x128ADDE0)

inline static constexpr unsigned int BKJPDLEPMJB_TypeDefinitionIndex = 74301;

class BKJPDLEPMJB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJPDLEPMJB__CTOR_OFFSET))(this);
	}

	static ::System::Void HBLILEJPHKB(::IBENDELLLAO* MKDNILKGFCC)
	{
		return ((::System::Void(*)(::IBENDELLLAO*))((::PBYTE)hIl2Cpp + BKJPDLEPMJB_HBLILEJPHKB_OFFSET))(MKDNILKGFCC);
	}

	static ::System::Void LPDEFPMFKKB(::System::String*& HMMMOCJAEOA, ::IBENDELLLAO* CLLGKENACHB, ::System::Int32 KMOHKCADPNA)
	{
		return ((::System::Void(*)(::System::String*&, ::IBENDELLLAO*, ::System::Int32))((::PBYTE)hIl2Cpp + BKJPDLEPMJB_LPDEFPMFKKB_OFFSET))(HMMMOCJAEOA, CLLGKENACHB, KMOHKCADPNA);
	}

	static ::System::String* EFGHIPDEKNA(::IBENDELLLAO* MKDNILKGFCC)
	{
		return ((::System::String*(*)(::IBENDELLLAO*))((::PBYTE)hIl2Cpp + BKJPDLEPMJB_EFGHIPDEKNA_OFFSET))(MKDNILKGFCC);
	}

	static ::System::String* BCENJPFHOOM(::IBENDELLLAO* MKDNILKGFCC)
	{
		return ((::System::String*(*)(::IBENDELLLAO*))((::PBYTE)hIl2Cpp + BKJPDLEPMJB_BCENJPFHOOM_OFFSET))(MKDNILKGFCC);
	}
};
