#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class MJAPFAECMBN_VirtualCameraConfig;
namespace RPG::Client::Prop { class ChimeraBubbleTalkParam; }
namespace RPG::Client::Prop { class ChimeraEntranceAnchorConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERAENTRANCEROUNDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xDC6C420)
#define RPG_CLIENT_PROP_CHIMERAENTRANCEROUNDCONFIG_INITANCHORCONFIGS_OFFSET UNITYSDK_OFFSET(0xDC6BF60)
#define RPG_CLIENT_PROP_CHIMERAENTRANCEROUNDCONFIG_TRYGETCHIMERATALKINFOLIST_OFFSET UNITYSDK_OFFSET(0xDC6C230)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraEntranceRoundConfig_TypeDefinitionIndex = 78486;

	class ChimeraEntranceRoundConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraEntranceAnchorConfig*>* AnchorConfigs; // 0x18
		::System::UInt32 RoundID; // 0x20
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* ChimeraAnchorRoot; // 0x28
		::MJAPFAECMBN_VirtualCameraConfig* VirtualCameraConfig; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCEROUNDCONFIG_CTOR_OFFSET))(this);
		}

		::System::Void InitAnchorConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCEROUNDCONFIG_INITANCHORCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraBubbleTalkParam*>* TryGetChimeraTalkInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraBubbleTalkParam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAENTRANCEROUNDCONFIG_TRYGETCHIMERATALKINFOLIST_OFFSET))(this);
		}

	};
}
