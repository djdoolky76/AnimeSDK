#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"

#define OJINMFDEJNC_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x13A66390)
#define OJINMFDEJNC_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x13A66300)
#define OJINMFDEJNC_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x13A66270)
#define OJINMFDEJNC__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A661F0)
#define OJINMFDEJNC__CTOR_OFFSET UNITYSDK_OFFSET(0x13A66260)

inline static constexpr unsigned int OJINMFDEJNC_TypeDefinitionIndex = 62156;

class OJINMFDEJNC : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x76; // 0x0
	::Foundation::Unreal::FGameplayTagContainer KDBMCKGDHIF; // 0x20
	::System::UInt32 AOGNNJLKHGL; // 0x90

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJINMFDEJNC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJINMFDEJNC__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJINMFDEJNC_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJINMFDEJNC_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 NJNCGJLHLKC, ::Foundation::Unreal::FGameplayTagContainer JFPDJGAMELP)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + OJINMFDEJNC_CNHBDOMKKDE_OFFSET))(this, NJNCGJLHLKC, JFPDJGAMELP);
	}
};
