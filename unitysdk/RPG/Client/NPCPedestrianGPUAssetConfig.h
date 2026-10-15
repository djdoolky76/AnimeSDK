#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EPedestrianAssetType.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
class LJDKBAIOLIP;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xD92FDA0)
#define RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD92FD60)
#define RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG_GET_MAXSPAWNCOUNT_OFFSET UNITYSDK_OFFSET(0xD92FBF0)
#define RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG_GKGBNLAOFLE_OFFSET UNITYSDK_OFFSET(0xD92FC00)
#define RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG_GLEAEMCOLAI_OFFSET UNITYSDK_OFFSET(0xD92FA90)
#define RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG_LLFPEANIJIC_OFFSET UNITYSDK_OFFSET(0xD92FA50)
#define RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG_PAABEMLAHOL_OFFSET UNITYSDK_OFFSET(0xD92FB40)

namespace RPG::Client
{
	inline static constexpr unsigned int NPCPedestrianGPUAssetConfig_TypeDefinitionIndex = 69238;

	class NPCPedestrianGPUAssetConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::RPG::Client::EPedestrianAssetType AssetType; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Object*>* Assets; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* _AssetMap; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG_CTOR_OFFSET))(this);
		}

		::RPG::Client::EPedestrianAssetType LLFPEANIJIC()
		{
			return ((::RPG::Client::EPedestrianAssetType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG_LLFPEANIJIC_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* GLEAEMCOLAI()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG_GLEAEMCOLAI_OFFSET))(this);
		}

		::LJDKBAIOLIP* PAABEMLAHOL(::System::String* a1)
		{
			return ((::LJDKBAIOLIP*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG_PAABEMLAHOL_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxSpawnCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG_GET_MAXSPAWNCOUNT_OFFSET))(this);
		}

		::System::Void GKGBNLAOFLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG_GKGBNLAOFLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG_DISPOSE_OFFSET))(this);
		}

	};
}
