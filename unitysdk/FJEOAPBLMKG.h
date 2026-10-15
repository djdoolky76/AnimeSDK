#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKJDEDPEMPJ;
class FJEOAPBLMKG;
namespace RPG::GameCore { class AvatarOutfitModelConfig; }
namespace RPG::GameCore { class PlayerOutfitDetailRow; }

#define FJEOAPBLMKG_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0x157B78B0)
#define FJEOAPBLMKG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x157B7780)
#define FJEOAPBLMKG_CTOR_OFFSET UNITYSDK_OFFSET(0x157B78A0)
#define FJEOAPBLMKG_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x157B7770)
#define FJEOAPBLMKG_GET_ID_OFFSET UNITYSDK_OFFSET(0x157B7760)

inline static constexpr unsigned int FJEOAPBLMKG_TypeDefinitionIndex = 62500;

	class FJEOAPBLMKG : public ::System::Object
	{
	public:
		::RPG::GameCore::PlayerOutfitDetailRow* POBMBPIIJND; // 0x10
		::RPG::GameCore::AvatarOutfitModelConfig* _Config_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20
		::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::AvatarOutfitModelConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::AvatarOutfitModelConfig*))((::PBYTE)hIl2Cpp + FJEOAPBLMKG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEOAPBLMKG_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::AvatarOutfitModelConfig* get_Config()
		{
			return ((::RPG::GameCore::AvatarOutfitModelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEOAPBLMKG_GET_CONFIG_OFFSET))(this);
		}

		static ::FJEOAPBLMKG* BPLPBPMEODA(::RPG::GameCore::PlayerOutfitDetailRow* a1)
		{
			return ((::FJEOAPBLMKG*(*)(::RPG::GameCore::PlayerOutfitDetailRow*))((::PBYTE)hIl2Cpp + FJEOAPBLMKG_BPLPBPMEODA_OFFSET))(a1);
		}

		static ::FJEOAPBLMKG* BPLPBPMEODA_1(::System::UInt32 a1, ::DKJDEDPEMPJ* a2)
		{
			return ((::FJEOAPBLMKG*(*)(::System::UInt32, ::DKJDEDPEMPJ*))((::PBYTE)hIl2Cpp + FJEOAPBLMKG_BPLPBPMEODA_1_OFFSET))(a1, a2);
		}

	};
