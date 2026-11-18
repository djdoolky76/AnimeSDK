#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class JBICNHFDLIB_CEAPJPAPODO;
namespace MoleMole { class UIWindowController; }
namespace MoleMole { class UIZenkovRecovernProgressWidgetController; }

#define JBICNHFDLIB_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0xF88CC30)
#define JBICNHFDLIB_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0xF88CC20)
#define JBICNHFDLIB_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0xF88CCF0)
#define JBICNHFDLIB_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0xF88CE80)
#define JBICNHFDLIB_NFHNPEIKFDL_OFFSET UNITYSDK_OFFSET(0xF88CF10)
#define JBICNHFDLIB__CTOR_OFFSET UNITYSDK_OFFSET(0xF88CE70)

inline static constexpr unsigned int JBICNHFDLIB_TypeDefinitionIndex = 66938;

class JBICNHFDLIB : public ::DDHEGIHEKLH
{
public:
	::JBICNHFDLIB_CEAPJPAPODO* OBGBFHGKILC; // 0x28
	::MoleMole::UIZenkovRecovernProgressWidgetController* EPNGPEHPGOG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBICNHFDLIB__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + JBICNHFDLIB_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + JBICNHFDLIB_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBICNHFDLIB_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBICNHFDLIB_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::Void NFHNPEIKFDL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBICNHFDLIB_NFHNPEIKFDL_OFFSET))(this);
	}
};
