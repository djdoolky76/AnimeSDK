#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class AnimatorRandomIntConfig; }
namespace MoleMole { class UIAvatarCameraAnimationSetting; }
namespace MoleMole { class UIAvatarCameraSetting; }
namespace MoleMole { class UICameraAnimator; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define PLLAPAIAOGF_ANJGNDDCGKF_OFFSET UNITYSDK_OFFSET(0x1C2BDEF0)
#define PLLAPAIAOGF_AOMAKJKEENN_OFFSET UNITYSDK_OFFSET(0x1C2BC030)
#define PLLAPAIAOGF_CHLBGGJNKLG_OFFSET UNITYSDK_OFFSET(0x1C2BDF90)
#define PLLAPAIAOGF_DHCNHEDEJMC_OFFSET UNITYSDK_OFFSET(0x1C2BD450)
#define PLLAPAIAOGF_EFFEFIEFLPN_OFFSET UNITYSDK_OFFSET(0x1C2BDAE0)
#define PLLAPAIAOGF_EPAIOMMIDGF_OFFSET UNITYSDK_OFFSET(0x1C2BC120)
#define PLLAPAIAOGF_FECDCIEFONF_OFFSET UNITYSDK_OFFSET(0x1C2BC4B0)
#define PLLAPAIAOGF_FKMOKFNLFOA_OFFSET UNITYSDK_OFFSET(0x1C2BBF60)
#define PLLAPAIAOGF_FMPJLJMBELG_OFFSET UNITYSDK_OFFSET(0x1C2BD7D0)
#define PLLAPAIAOGF_FONCLJDDAFE_OFFSET UNITYSDK_OFFSET(0x1C2BC880)
#define PLLAPAIAOGF_HOFJIFILAKK_OFFSET UNITYSDK_OFFSET(0x1C2BC810)
#define PLLAPAIAOGF_JBGBHMNHEMD_OFFSET UNITYSDK_OFFSET(0x1C2BCE70)
#define PLLAPAIAOGF_JBPCDNJBHPM_OFFSET UNITYSDK_OFFSET(0x1C2BC740)
#define PLLAPAIAOGF_KAEPGMKFMJG_OFFSET UNITYSDK_OFFSET(0x1C2BDDB0)
#define PLLAPAIAOGF_KEDDFICFLFD_OFFSET UNITYSDK_OFFSET(0x1C2BC9F0)
#define PLLAPAIAOGF_MMOFDLHDJLN_OFFSET UNITYSDK_OFFSET(0x1C2BE9C0)
#define PLLAPAIAOGF_PLCJNBHECGC_OFFSET UNITYSDK_OFFSET(0x1C2BD230)
#define PLLAPAIAOGF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2BBEF0)

inline static constexpr unsigned int PLLAPAIAOGF_TypeDefinitionIndex = 54250;

class PLLAPAIAOGF : public ::System::Object
{
public:
	::MoleMole::UIAvatarCameraAnimationSetting* BFNCHBPLHFI; // 0x10
	::UnityEngine::Transform* PAHCLOPIPBL; // 0x18
	::MoleMole::UICameraAnimator* NGDEALMJMLM; // 0x20
	::UnityEngine::Transform* FKNIJLPDAJE; // 0x28
	::MoleMole::AnimatorRandomIntConfig* ODPILDFLNDJ; // 0x30
	::UnityEngine::Camera* GHBLLBJBEAO; // 0x38
	::MoleMole::UIAvatarCameraSetting* EAINADIGNBG; // 0x40
	::System::Single HENPKAHJGOF; // 0x48
	::UnityEngine::Vector3 DHDICNFJJCC; // 0x4C
	::UnityEngine::Vector3 EJILILLLCJN; // 0x58
	::UnityEngine::Vector3 ENABIFCDKDH; // 0x64
	::UnityEngine::Vector3 NCAMDLCIBPE; // 0x70
	::UnityEngine::Quaternion GLHMGIEAPHH; // 0x7C
	::System::Single EPLAPLCPMGK; // 0x8C
	::System::Single EPICFMMPLIP; // 0x90
	::UnityEngine::Quaternion BJEOOHBFBBK; // 0x94
	::System::Int32 KPGJOECPAEO; // 0xA4
	::UnityEngine::Vector3 OOCJDIKGNHP; // 0xA8
	::System::Boolean FEHDIMBBCDA; // 0xB4
	::System::Boolean DOADCGBFAIN; // 0xB5
	::System::Boolean MEMNLJGLEFC; // 0xB6

	::System::Void _ctor(::UnityEngine::Camera* KONLMDBCDCK, ::UnityEngine::Transform* EEIHBPOLPFD, ::UnityEngine::Transform* ELAKPNAKMFD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PLLAPAIAOGF__CTOR_OFFSET))(this, KONLMDBCDCK, EEIHBPOLPFD, ELAKPNAKMFD);
	}

	::System::Void FKMOKFNLFOA(::UnityEngine::Quaternion GJNLCLDFFIN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + PLLAPAIAOGF_FKMOKFNLFOA_OFFSET))(this, GJNLCLDFFIN);
	}

	::UnityEngine::Quaternion EPAIOMMIDGF()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + PLLAPAIAOGF_EPAIOMMIDGF_OFFSET))(this);
	}

	::System::Void FECDCIEFONF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLLAPAIAOGF_FECDCIEFONF_OFFSET))(this);
	}

	::System::Void JBPCDNJBHPM(::System::Boolean OHAOHFIGKBL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PLLAPAIAOGF_JBPCDNJBHPM_OFFSET))(this, OHAOHFIGKBL);
	}

	::System::Void FONCLJDDAFE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLLAPAIAOGF_FONCLJDDAFE_OFFSET))(this);
	}

	::UnityEngine::Quaternion JBGBHMNHEMD(::UnityEngine::Quaternion KDEHMPGOCEP, ::UnityEngine::Quaternion PADJNMGMGHO, ::System::Single IMLLDOHDCNC, ::UnityEngine::Vector3 BHFAGMPDIGJ)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PLLAPAIAOGF_JBGBHMNHEMD_OFFSET))(this, KDEHMPGOCEP, PADJNMGMGHO, IMLLDOHDCNC, BHFAGMPDIGJ);
	}

	::System::Void PLCJNBHECGC(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PLLAPAIAOGF_PLCJNBHECGC_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void HOFJIFILAKK(::System::Single BKCDMONKCHF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PLLAPAIAOGF_HOFJIFILAKK_OFFSET))(this, BKCDMONKCHF);
	}

	::System::Boolean KEDDFICFLFD(::UnityEngine::Vector3 OKJBJOEFNMA, ::UnityEngine::Vector3 KPBPLFBEJGC)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PLLAPAIAOGF_KEDDFICFLFD_OFFSET))(this, OKJBJOEFNMA, KPBPLFBEJGC);
	}

	::System::Void KAEPGMKFMJG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLLAPAIAOGF_KAEPGMKFMJG_OFFSET))(this);
	}

	::System::Void AOMAKJKEENN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLLAPAIAOGF_AOMAKJKEENN_OFFSET))(this);
	}

	::System::Void FMPJLJMBELG(::System::Single FNIOPKPHDEH, ::System::Single MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PLLAPAIAOGF_FMPJLJMBELG_OFFSET))(this, FNIOPKPHDEH, MDPPNMIPDMP);
	}

	::System::Void DHCNHEDEJMC(::System::Single FNIOPKPHDEH, ::System::Single MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PLLAPAIAOGF_DHCNHEDEJMC_OFFSET))(this, FNIOPKPHDEH, MDPPNMIPDMP);
	}

	::UnityEngine::Quaternion ANJGNDDCGKF()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + PLLAPAIAOGF_ANJGNDDCGKF_OFFSET))(this);
	}

	::System::Void EFFEFIEFLPN(::UnityEngine::AnimationCurve* PAECLIFBAKM, ::System::Single FNIOPKPHDEH, ::System::Single MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PLLAPAIAOGF_EFFEFIEFLPN_OFFSET))(this, PAECLIFBAKM, FNIOPKPHDEH, MDPPNMIPDMP);
	}

	::System::Void CHLBGGJNKLG(::UnityEngine::Vector3 CKPGOKHECCH, ::MoleMole::UIAvatarCameraSetting* BBNAGEPEPDP, ::MoleMole::UIAvatarCameraAnimationSetting* KMMBBJHKJGI, ::MoleMole::AnimatorRandomIntConfig* DIGCNMDHLGO, ::System::Int32 KNNCFBALIKL, ::UnityEngine::Vector3 HGGCBPFABPC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::UIAvatarCameraSetting*, ::MoleMole::UIAvatarCameraAnimationSetting*, ::MoleMole::AnimatorRandomIntConfig*, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PLLAPAIAOGF_CHLBGGJNKLG_OFFSET))(this, CKPGOKHECCH, BBNAGEPEPDP, KMMBBJHKJGI, DIGCNMDHLGO, KNNCFBALIKL, HGGCBPFABPC);
	}

	::System::Void MMOFDLHDJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLLAPAIAOGF_MMOFDLHDJLN_OFFSET))(this);
	}
};
