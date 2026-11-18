#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DCNGDMKEFIB;
class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class ICDJHMHJHMM;
class JNJOONPFLGL;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadSelectable; }
namespace UnityEngine { class GameObject; }

#define MDHFKDAMNKD_FAAFMPDBCAM_OFFSET UNITYSDK_OFFSET(0x18529210)
#define MDHFKDAMNKD_GBJGIJONEFG_1_OFFSET UNITYSDK_OFFSET(0x18529030)
#define MDHFKDAMNKD_GBJGIJONEFG_OFFSET UNITYSDK_OFFSET(0x18529120)
#define MDHFKDAMNKD_JPPEEOLOGGP_1_OFFSET UNITYSDK_OFFSET(0x18529410)
#define MDHFKDAMNKD_JPPEEOLOGGP_OFFSET UNITYSDK_OFFSET(0x18529220)
#define MDHFKDAMNKD_NBEICDBDCKD_OFFSET UNITYSDK_OFFSET(0x18529400)
#define MDHFKDAMNKD__CTOR_OFFSET UNITYSDK_OFFSET(0x18528EC0)

inline static constexpr unsigned int MDHFKDAMNKD_TypeDefinitionIndex = 70650;

class MDHFKDAMNKD : public ::System::Object
{
public:
	::UnityEngine::GameObject* AOFEACBNNBD; // 0x10
	::MoleMole::MonoGamepadModule* LBBEFFPJHAC; // 0x18
	::MoleMole::MonoGamepadCustomList* IDOFLBBAALO; // 0x20
	::UnityEngine::GameObject* CJFEPEJHCHO; // 0x28
	::FGCOIBFFCHB* DLNONMIBDBC; // 0x30
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x38
	::UnityEngine::GameObject* EHKABBEFECN; // 0x40
	::FGCOIBFFCHB* IBAPFELBGGL; // 0x48
	::DCNGDMKEFIB* _AEANKPFAPHM_k__BackingField; // 0x50
	::UnityEngine::GameObject* IBGHKNFJAPF; // 0x58
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x60
	::UnityEngine::GameObject* JONKKOCDBIP; // 0x68
	::GCIMMDDIFBJ* DHCKPIBEKNB; // 0x70
	::UnityEngine::GameObject* CPFNDFMANPG; // 0x78
	::MoleMole::MonoGamepadSelectable* KNKBLLDEODG; // 0x80
	::UnityEngine::GameObject* OEDOPPGMKLO; // 0x88
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x90

	::System::Void _ctor(::DCNGDMKEFIB* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::DCNGDMKEFIB*))((::PBYTE)hIl2Cpp + MDHFKDAMNKD__CTOR_OFFSET))(this, IOKOLJDCKPN);
	}

	::System::Void GBJGIJONEFG(::JNJOONPFLGL* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::JNJOONPFLGL*))((::PBYTE)hIl2Cpp + MDHFKDAMNKD_GBJGIJONEFG_OFFSET))(this, IOKOLJDCKPN);
	}

	::DCNGDMKEFIB* FAAFMPDBCAM()
	{
		return ((::DCNGDMKEFIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHFKDAMNKD_FAAFMPDBCAM_OFFSET))(this);
	}

	static ::MDHFKDAMNKD* JPPEEOLOGGP(::ICDJHMHJHMM* IOKOLJDCKPN)
	{
		return ((::MDHFKDAMNKD*(*)(::ICDJHMHJHMM*))((::PBYTE)hIl2Cpp + MDHFKDAMNKD_JPPEEOLOGGP_OFFSET))(IOKOLJDCKPN);
	}

	::System::Void GBJGIJONEFG_1(::ICDJHMHJHMM* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::ICDJHMHJHMM*))((::PBYTE)hIl2Cpp + MDHFKDAMNKD_GBJGIJONEFG_1_OFFSET))(this, IOKOLJDCKPN);
	}

	::System::Void NBEICDBDCKD(::DCNGDMKEFIB* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::DCNGDMKEFIB*))((::PBYTE)hIl2Cpp + MDHFKDAMNKD_NBEICDBDCKD_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::MDHFKDAMNKD* JPPEEOLOGGP_1(::JNJOONPFLGL* IOKOLJDCKPN)
	{
		return ((::MDHFKDAMNKD*(*)(::JNJOONPFLGL*))((::PBYTE)hIl2Cpp + MDHFKDAMNKD_JPPEEOLOGGP_1_OFFSET))(IOKOLJDCKPN);
	}
};
