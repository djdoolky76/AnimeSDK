#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class ParticleSystemRenderer; }

#define JKAKOECKAHM_AAMFFPKFIBK_OFFSET UNITYSDK_OFFSET(0x17B2B2D0)
#define JKAKOECKAHM_FMKPEIBPLBF_OFFSET UNITYSDK_OFFSET(0x17B2AAF0)
#define JKAKOECKAHM_HHBCAAEDNLG_OFFSET UNITYSDK_OFFSET(0x17B2B800)
#define JKAKOECKAHM_HINNHACJJOO_OFFSET UNITYSDK_OFFSET(0x17B2AD90)
#define JKAKOECKAHM_ICIPJNMDLOH_OFFSET UNITYSDK_OFFSET(0x17B2B030)
#define JKAKOECKAHM_JDGADOBIFKK_OFFSET UNITYSDK_OFFSET(0x17B2BEB0)
#define JKAKOECKAHM_JPBKBOCDFNF_OFFSET UNITYSDK_OFFSET(0x17B2BC10)
#define JKAKOECKAHM_MHJJOLMLJAC_OFFSET UNITYSDK_OFFSET(0x17B2BAA0)

inline static constexpr unsigned int JKAKOECKAHM_TypeDefinitionIndex = 53010;

class JKAKOECKAHM : public ::System::Object
{
public:
	static ::System::Boolean FMKPEIBPLBF(::UnityEngine::GameObject* JBFHKFGEKJJ)
	{
		return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + JKAKOECKAHM_FMKPEIBPLBF_OFFSET))(JBFHKFGEKJJ);
	}

	static ::System::Boolean HINNHACJJOO(::UnityEngine::GameObject* JBFHKFGEKJJ)
	{
		return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + JKAKOECKAHM_HINNHACJJOO_OFFSET))(JBFHKFGEKJJ);
	}

	static ::System::Boolean ICIPJNMDLOH(::UnityEngine::GameObject* JBFHKFGEKJJ)
	{
		return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + JKAKOECKAHM_ICIPJNMDLOH_OFFSET))(JBFHKFGEKJJ);
	}

	static ::System::Boolean AAMFFPKFIBK(::UnityEngine::ParticleSystem* OMLGMJACMAB, ::UnityEngine::ParticleSystemRenderer* ODNANNKCGMA)
	{
		return ((::System::Boolean(*)(::UnityEngine::ParticleSystem*, ::UnityEngine::ParticleSystemRenderer*))((::PBYTE)hIl2Cpp + JKAKOECKAHM_AAMFFPKFIBK_OFFSET))(OMLGMJACMAB, ODNANNKCGMA);
	}

	static ::System::Boolean HHBCAAEDNLG(::UnityEngine::GameObject* JBFHKFGEKJJ)
	{
		return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + JKAKOECKAHM_HHBCAAEDNLG_OFFSET))(JBFHKFGEKJJ);
	}

	static ::System::Boolean MHJJOLMLJAC(::UnityEngine::ParticleSystem* OMLGMJACMAB, ::UnityEngine::ParticleSystemRenderer* ODNANNKCGMA)
	{
		return ((::System::Boolean(*)(::UnityEngine::ParticleSystem*, ::UnityEngine::ParticleSystemRenderer*))((::PBYTE)hIl2Cpp + JKAKOECKAHM_MHJJOLMLJAC_OFFSET))(OMLGMJACMAB, ODNANNKCGMA);
	}

	static ::System::Boolean JPBKBOCDFNF(::UnityEngine::GameObject* JBFHKFGEKJJ)
	{
		return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + JKAKOECKAHM_JPBKBOCDFNF_OFFSET))(JBFHKFGEKJJ);
	}

	static ::System::Boolean JDGADOBIFKK(::UnityEngine::GameObject* JBFHKFGEKJJ)
	{
		return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + JKAKOECKAHM_JDGADOBIFKK_OFFSET))(JBFHKFGEKJJ);
	}
};
