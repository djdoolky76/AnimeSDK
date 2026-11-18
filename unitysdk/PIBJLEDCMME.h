#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define PIBJLEDCMME_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11B6BED0)
#define PIBJLEDCMME_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11B6BD60)
#define PIBJLEDCMME__CTOR_OFFSET UNITYSDK_OFFSET(0x11B6BEC0)

inline static constexpr unsigned int PIBJLEDCMME_TypeDefinitionIndex = 88175;

class PIBJLEDCMME : public ::GIBMJLOJLKD
{
public:
	::Cinemachine::CinemachineBrain* PKPGFGCGFIM; // 0x18
	::UnityEngine::GameObject* CKDEGCFCMJG; // 0x20
	::UnityEngine::GameObject* MOKPJIENLMF; // 0x28
	::UnityEngine::Transform* IPICHKHHBPG; // 0x30
	::UnityEngine::Camera* OIFBKPAMENB; // 0x38
	::UnityEngine::Transform* IEMGFPHPIAN; // 0x40
	::UnityEngine::GameObject* PBPPHLHOPNB; // 0x48
	::UnityEngine::Transform* LBGFCGGMLAN; // 0x50
	::Cinemachine::CinemachineVirtualCamera* KNBLNAHCPKM; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBJLEDCMME__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PIBJLEDCMME_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PIBJLEDCMME_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
