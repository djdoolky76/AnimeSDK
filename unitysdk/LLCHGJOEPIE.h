#pragma once
#include "unitysdk/unitysdk.h"

class AFMMAIKKACF;
class EHGPNGPADCB;
namespace MoleMole { class UIGeneralNewsBubbleWidgetController; }
namespace System { class EventArgs; }

#define LLCHGJOEPIE_AFNKMJDPILJ_OFFSET UNITYSDK_OFFSET(0x12595040)
#define LLCHGJOEPIE_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x12595420)
#define LLCHGJOEPIE_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x12593420)
#define LLCHGJOEPIE_HGPKJFGLJPC_OFFSET UNITYSDK_OFFSET(0x12595540)
#define LLCHGJOEPIE_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x125954B0)
#define LLCHGJOEPIE_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x125951C0)
#define LLCHGJOEPIE__CTOR_OFFSET UNITYSDK_OFFSET(0x12593410)

inline static constexpr unsigned int LLCHGJOEPIE_TypeDefinitionIndex = 73353;

class LLCHGJOEPIE
{
public:
	::MoleMole::UIGeneralNewsBubbleWidgetController* FPPPIIFJOBO; // 0x30
	::System::Single HPPHBLFBLLN; // 0x38
	::System::Single GPDCBHEPDGL; // 0x3C

	::System::Void _ctor(::EHGPNGPADCB* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::EHGPNGPADCB*))((::PBYTE)hIl2Cpp + LLCHGJOEPIE__CTOR_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void GLEJMKLOMBP(::AFMMAIKKACF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + LLCHGJOEPIE_GLEJMKLOMBP_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void OKJCHFGIKBH(::AFMMAIKKACF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + LLCHGJOEPIE_OKJCHFGIKBH_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void CMFOMGGDPPA(::AFMMAIKKACF* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + LLCHGJOEPIE_CMFOMGGDPPA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void LIDIODHDJAF(::AFMMAIKKACF* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + LLCHGJOEPIE_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void AFNKMJDPILJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCHGJOEPIE_AFNKMJDPILJ_OFFSET))(this);
	}

	::System::Void HGPKJFGLJPC(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + LLCHGJOEPIE_HGPKJFGLJPC_OFFSET))(this, KOIBHLHLMFC);
	}
};
