#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EEDABKDPNNE;
namespace MoleMole { class UIHollowCardOptionsDialogContext; }
namespace System { template <typename T> class Action_1; }

#define KEDOJEMEHOF_ABDLEONNPAJ_OFFSET UNITYSDK_OFFSET(0x129822E0)
#define KEDOJEMEHOF_DEDMJEIEHAD_OFFSET UNITYSDK_OFFSET(0x12982480)
#define KEDOJEMEHOF_EPBBFPJHLLG_OFFSET UNITYSDK_OFFSET(0x129821D0)
#define KEDOJEMEHOF_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x129820A0)
#define KEDOJEMEHOF_PLDMOMBENBK_OFFSET UNITYSDK_OFFSET(0x12982600)
#define KEDOJEMEHOF__CTOR_OFFSET UNITYSDK_OFFSET(0x12982090)

inline static constexpr unsigned int KEDOJEMEHOF_TypeDefinitionIndex = 50604;

class KEDOJEMEHOF : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* ACJGKMOPIAB; // 0x10
	::MoleMole::UIHollowCardOptionsDialogContext* HCBDPABHMPH; // 0x18
	::System::UInt32 DAIDGEPOIOO; // 0x20

	::System::Void _ctor(::System::UInt32 ACHBBPJIBIE)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KEDOJEMEHOF__CTOR_OFFSET))(this, ACHBBPJIBIE);
	}

	::System::Boolean HFBPONNNLBA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KEDOJEMEHOF_HFBPONNNLBA_OFFSET))(this);
	}

	::System::Int32 EPBBFPJHLLG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEDOJEMEHOF_EPBBFPJHLLG_OFFSET))(this);
	}

	::System::Void ABDLEONNPAJ(::MoleMole::UIHollowCardOptionsDialogContext* AAOCANGHBDG, ::System::Action_1<::System::Boolean>* NPFIONPDFED)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowCardOptionsDialogContext*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + KEDOJEMEHOF_ABDLEONNPAJ_OFFSET))(this, AAOCANGHBDG, NPFIONPDFED);
	}

	::System::Void DEDMJEIEHAD(::EEDABKDPNNE* NIKCOJEJGGE)
	{
		return ((::System::Void(*)(::PVOID, ::EEDABKDPNNE*))((::PBYTE)hIl2Cpp + KEDOJEMEHOF_DEDMJEIEHAD_OFFSET))(this, NIKCOJEJGGE);
	}

	::System::Void PLDMOMBENBK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEDOJEMEHOF_PLDMOMBENBK_OFFSET))(this);
	}
};
