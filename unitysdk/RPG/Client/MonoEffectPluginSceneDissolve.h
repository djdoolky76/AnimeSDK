#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaReplaceMatBase.h"
#include "unitysdk/UnityEngine/Color.h"
namespace RPG::Client { class CommonEffectMaterialBlockOne; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_MONOEFFECTPLUGINSCENEDISSOLVE_CBKPMHCOCMH_OFFSET UNITYSDK_OFFSET(0xD800120)
#define RPG_CLIENT_MONOEFFECTPLUGINSCENEDISSOLVE_CTOR_OFFSET UNITYSDK_OFFSET(0xD8001B0)
#define RPG_CLIENT_MONOEFFECTPLUGINSCENEDISSOLVE_IFOEAAAKONL_OFFSET UNITYSDK_OFFSET(0xD7FFDA0)
#define RPG_CLIENT_MONOEFFECTPLUGINSCENEDISSOLVE_IJICJDNHKHN_OFFSET UNITYSDK_OFFSET(0xD7FF580)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginSceneDissolve_TypeDefinitionIndex = 70014;

	class MonoEffectPluginSceneDissolve : public ::RPG::Client::MonoEffectPluginCharaReplaceMatBase
	{
	public:
		::System::Boolean _EnableDissolve; // 0x170
		::System::Byte _padding0[0x3];
		::System::Single _DissolveUVChannel; // 0x174
		::System::Single _DissolveMode; // 0x178
		::System::Single _DissolveBase; // 0x17C
		::System::Single _DissolveRange; // 0x180
		::System::Single _DissolveEmissionIntensity; // 0x184
		::UnityEngine::Color _DissolveEmissionColor; // 0x188
		::UnityEngine::Texture2D* _DissolveMap; // 0x198
		::UnityEngine::Texture2D* _DissolveRangeMap; // 0x1A0
		::System::Collections::Generic::List_1<::RPG::Client::CommonEffectMaterialBlockOne*>* DEOKAPMPABA; // 0x1A8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSCENEDISSOLVE_CTOR_OFFSET))(this);
		}

		::System::Void IJICJDNHKHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSCENEDISSOLVE_IJICJDNHKHN_OFFSET))(this);
		}

		::System::Void IFOEAAAKONL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSCENEDISSOLVE_IFOEAAAKONL_OFFSET))(this);
		}

		::System::Void CBKPMHCOCMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSCENEDISSOLVE_CBKPMHCOCMH_OFFSET))(this);
		}

	};
}
