#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"

namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWindowController; }
namespace System { template <typename T> class Action_1; }

#define FDHCNHKGIJG_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x169C9740)
#define FDHCNHKGIJG_DOPGAFCKMNF_OFFSET UNITYSDK_OFFSET(0x169C97D0)
#define FDHCNHKGIJG_HLCNKIOFENM_OFFSET UNITYSDK_OFFSET(0x169C98B0)
#define FDHCNHKGIJG_KAAPAKDFIFF_OFFSET UNITYSDK_OFFSET(0x169C9680)
#define FDHCNHKGIJG_ONSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x169C96D0)
#define FDHCNHKGIJG_ONSTART_OFFSET UNITYSDK_OFFSET(0x169C95E0)
#define FDHCNHKGIJG_PBKDOACPCIM_OFFSET UNITYSDK_OFFSET(0x169C9860)
#define FDHCNHKGIJG__CTOR_OFFSET UNITYSDK_OFFSET(0x169C9730)

inline static constexpr unsigned int FDHCNHKGIJG_TypeDefinitionIndex = 57229;

class FDHCNHKGIJG : public ::JGELKBLKFHE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHCNHKGIJG__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHCNHKGIJG_ONSTART_OFFSET))(this);
	}

	::System::Void OnShutDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHCNHKGIJG_ONSHUTDOWN_OFFSET))(this);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHCNHKGIJG_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Void DOPGAFCKMNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHCNHKGIJG_DOPGAFCKMNF_OFFSET))(this);
	}

	::System::Void PBKDOACPCIM(::System::Byte DKEGDPNIMAE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + FDHCNHKGIJG_PBKDOACPCIM_OFFSET))(this, DKEGDPNIMAE);
	}

	static ::System::Void HLCNKIOFENM(::MoleMole::UIControllerContextBase* AAOCANGHBDG, ::System::Action_1<::MoleMole::UIWindowController*>* GENFJNEPKEA)
	{
		return ((::System::Void(*)(::MoleMole::UIControllerContextBase*, ::System::Action_1<::MoleMole::UIWindowController*>*))((::PBYTE)hIl2Cpp + FDHCNHKGIJG_HLCNKIOFENM_OFFSET))(AAOCANGHBDG, GENFJNEPKEA);
	}

	::System::Void KAAPAKDFIFF(::System::Boolean KGGJCGPMAIH, ::System::Byte DKEGDPNIMAE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Byte))((::PBYTE)hIl2Cpp + FDHCNHKGIJG_KAAPAKDFIFF_OFFSET))(this, KGGJCGPMAIH, DKEGDPNIMAE);
	}
};
