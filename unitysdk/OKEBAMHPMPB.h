#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class OKEBAMHPMPB_PKCJNAGHAHH;
namespace MoleMole { class UIUrbanMapEyePanelWidgetController; }
namespace MoleMole { class UIWindowController; }

#define OKEBAMHPMPB_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x13A66F40)
#define OKEBAMHPMPB_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x13A66F30)
#define OKEBAMHPMPB_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x13A67000)
#define OKEBAMHPMPB_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x13A67190)
#define OKEBAMHPMPB_MMAIGFMKMNE_OFFSET UNITYSDK_OFFSET(0x13A67220)
#define OKEBAMHPMPB__CTOR_OFFSET UNITYSDK_OFFSET(0x13A67180)

inline static constexpr unsigned int OKEBAMHPMPB_TypeDefinitionIndex = 55050;

class OKEBAMHPMPB : public ::DDHEGIHEKLH
{
public:
	::OKEBAMHPMPB_PKCJNAGHAHH* OBGBFHGKILC; // 0x28
	::MoleMole::UIUrbanMapEyePanelWidgetController* GMBKONADKDD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEBAMHPMPB__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEBAMHPMPB_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + OKEBAMHPMPB_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEBAMHPMPB_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEBAMHPMPB_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::Void MMAIGFMKMNE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEBAMHPMPB_MMAIGFMKMNE_OFFSET))(this);
	}
};
