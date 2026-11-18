#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_GLITCHSHADERPARAMS_AJIMPCPMAHH_OFFSET UNITYSDK_OFFSET(0x14AED390)
#define MOLEMOLE_GLITCHSHADERPARAMS_AWAKE_OFFSET UNITYSDK_OFFSET(0x14AED340)
#define MOLEMOLE_GLITCHSHADERPARAMS_KEDEPOMAEMI_OFFSET UNITYSDK_OFFSET(0x14AED4F0)
#define MOLEMOLE_GLITCHSHADERPARAMS_UPDATE_OFFSET UNITYSDK_OFFSET(0x14AED620)
#define MOLEMOLE_GLITCHSHADERPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x14AED670)

namespace MoleMole
{
	inline static constexpr unsigned int GlitchShaderParams_TypeDefinitionIndex = 72035;

	class GlitchShaderParams : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 IPEMEIMPFFH; // 0x18
		::UnityEngine::Vector4 POOIOKJFMFI; // 0x1C
		::System::Byte _padding0[0x4];
		::UnityEngine::Renderer* KAPAGFKJMIJ; // 0x30
		::UnityEngine::Transform* CNGFOPNJNLG; // 0x38
		::UnityEngine::MaterialPropertyBlock* BEGMMDCKLHH; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GLITCHSHADERPARAMS__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GLITCHSHADERPARAMS_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GLITCHSHADERPARAMS_UPDATE_OFFSET))(this);
		}

		::System::Void KEDEPOMAEMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GLITCHSHADERPARAMS_KEDEPOMAEMI_OFFSET))(this);
		}

		::System::Void AJIMPCPMAHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GLITCHSHADERPARAMS_AJIMPCPMAHH_OFFSET))(this);
		}
	};
}
