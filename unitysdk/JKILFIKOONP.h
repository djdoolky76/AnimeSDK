#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNBIJNNFMEL.h"
#include "unitysdk/MoleMole/CommandLineGraphicsSetting.h"

class AJMGOKBKJOK;
namespace MoleMole { class CommandLinePerformanceSetting; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JKILFIKOONP_AEJHDPPNCHH_OFFSET UNITYSDK_OFFSET(0x14FC0FB0)
#define JKILFIKOONP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14FC0A40)
#define JKILFIKOONP_DODCJCBKKHE_OFFSET UNITYSDK_OFFSET(0x14FC0CC0)
#define JKILFIKOONP_GJLHLLKAINM_OFFSET UNITYSDK_OFFSET(0x14FC0F20)
#define JKILFIKOONP_GJMLHOMIMPD_OFFSET UNITYSDK_OFFSET(0x14FC1040)
#define JKILFIKOONP_HKKPGCBEJBI_OFFSET UNITYSDK_OFFSET(0x14FC07C0)
#define JKILFIKOONP_INAGADMEDHA_OFFSET UNITYSDK_OFFSET(0x14FC0FC0)
#define JKILFIKOONP_KBALJIPIKDO_OFFSET UNITYSDK_OFFSET(0x14FC1110)
#define JKILFIKOONP_LGBJGFBNJMI_OFFSET UNITYSDK_OFFSET(0x14FC0850)
#define JKILFIKOONP_MIKCFHDBACF_OFFSET UNITYSDK_OFFSET(0x14FC0FD0)
#define JKILFIKOONP_NOLIIEKDILA_OFFSET UNITYSDK_OFFSET(0x14FC0FA0)
#define JKILFIKOONP_OEFABKGOIJC_OFFSET UNITYSDK_OFFSET(0x14FC0CD0)
#define JKILFIKOONP_ONCREATE_OFFSET UNITYSDK_OFFSET(0x14FC05B0)
#define JKILFIKOONP__CTOR_OFFSET UNITYSDK_OFFSET(0x14FC0C30)

inline static constexpr unsigned int JKILFIKOONP_TypeDefinitionIndex = 92299;

class JKILFIKOONP
{
public:
	::Il2CppArray<::System::String*>* GFAGADGDGOJ; // 0x10
	::AJMGOKBKJOK* _KAKGFGHDPMB_k__BackingField; // 0x18
	::System::Collections::Generic::Dictionary_2<::JNBIJNNFMEL, ::AJMGOKBKJOK*>* EICGEEDLILM; // 0x20
	::JNBIJNNFMEL _ODOILGCANIH_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKILFIKOONP__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKILFIKOONP_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKILFIKOONP_DISPOSE_OFFSET))(this);
	}

	::System::Void DODCJCBKKHE(::AJMGOKBKJOK* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::AJMGOKBKJOK*))((::PBYTE)hIl2Cpp + JKILFIKOONP_DODCJCBKKHE_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::CommandLineGraphicsSetting OEFABKGOIJC()
	{
		return ((::MoleMole::CommandLineGraphicsSetting(*)(::PVOID))((::PBYTE)hIl2Cpp + JKILFIKOONP_OEFABKGOIJC_OFFSET))(this);
	}

	::JNBIJNNFMEL NOLIIEKDILA()
	{
		return ((::JNBIJNNFMEL(*)(::PVOID))((::PBYTE)hIl2Cpp + JKILFIKOONP_NOLIIEKDILA_OFFSET))(this);
	}

	::AJMGOKBKJOK* AEJHDPPNCHH()
	{
		return ((::AJMGOKBKJOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKILFIKOONP_AEJHDPPNCHH_OFFSET))(this);
	}

	::System::Void INAGADMEDHA(::JNBIJNNFMEL EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::JNBIJNNFMEL))((::PBYTE)hIl2Cpp + JKILFIKOONP_INAGADMEDHA_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::CommandLinePerformanceSetting* MIKCFHDBACF()
	{
		return ((::MoleMole::CommandLinePerformanceSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKILFIKOONP_MIKCFHDBACF_OFFSET))(this);
	}

	::System::Boolean GJMLHOMIMPD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JKILFIKOONP_GJMLHOMIMPD_OFFSET))(this);
	}

	::System::Boolean GJLHLLKAINM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JKILFIKOONP_GJLHLLKAINM_OFFSET))(this);
	}

	::AJMGOKBKJOK* LGBJGFBNJMI(::JNBIJNNFMEL OBNIAHNMHPF)
	{
		return ((::AJMGOKBKJOK*(*)(::PVOID, ::JNBIJNNFMEL))((::PBYTE)hIl2Cpp + JKILFIKOONP_LGBJGFBNJMI_OFFSET))(this, OBNIAHNMHPF);
	}

	::JNBIJNNFMEL HKKPGCBEJBI()
	{
		return ((::JNBIJNNFMEL(*)(::PVOID))((::PBYTE)hIl2Cpp + JKILFIKOONP_HKKPGCBEJBI_OFFSET))(this);
	}

	::System::Boolean KBALJIPIKDO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JKILFIKOONP_KBALJIPIKDO_OFFSET))(this);
	}
};
