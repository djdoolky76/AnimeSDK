#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaReplaceMatBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINPLAYERCHANGE_CBKPMHCOCMH_OFFSET UNITYSDK_OFFSET(0xD806440)
#define RPG_CLIENT_MONOEFFECTPLUGINPLAYERCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0xD806490)
#define RPG_CLIENT_MONOEFFECTPLUGINPLAYERCHANGE_IFOEAAAKONL_OFFSET UNITYSDK_OFFSET(0xD806190)
#define RPG_CLIENT_MONOEFFECTPLUGINPLAYERCHANGE_IJICJDNHKHN_OFFSET UNITYSDK_OFFSET(0xD806070)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginPlayerChange_TypeDefinitionIndex = 70013;

	class MonoEffectPluginPlayerChange : public ::RPG::Client::MonoEffectPluginCharaReplaceMatBase
	{
	public:
		::System::Single XScale; // 0x170
		::System::Single YScale; // 0x174
		::System::Single ZScale; // 0x178
		::UnityEngine::Color FresnelColor; // 0x17C
		::UnityEngine::Vector4 FresnelBSI; // 0x18C
		::System::Single FresnelColorStrength; // 0x19C
		::UnityEngine::Vector3 PEGNJINDIHD; // 0x1A0
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* CCDNONEJNCB; // 0x1B0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPLAYERCHANGE_CTOR_OFFSET))(this);
		}

		::System::Void IJICJDNHKHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPLAYERCHANGE_IJICJDNHKHN_OFFSET))(this);
		}

		::System::Void IFOEAAAKONL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPLAYERCHANGE_IFOEAAAKONL_OFFSET))(this);
		}

		::System::Void CBKPMHCOCMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPLAYERCHANGE_CBKPMHCOCMH_OFFSET))(this);
		}

	};
}
