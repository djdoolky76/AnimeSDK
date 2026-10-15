#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DistrictAreaSoundConfig; }
namespace RPG::GameCore { class DistrictAreaSoundTransform; }
namespace System { class String; }

#define RPG_GAMECORE_DISTRICTAREASOUNDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5EA910)
#define RPG_GAMECORE_DISTRICTAREASOUNDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5EA6E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DistrictAreaSoundConfig_TypeDefinitionIndex = 17264;

	class DistrictAreaSoundConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PlayEventName; // 0x10
		::System::Single PlayEventCD; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* StopEventName; // 0x20
		::System::Single StopEventCD; // 0x28
		::System::Byte _padding1[0x4];
		::Il2CppArray<::RPG::GameCore::DistrictAreaSoundTransform*>* TransformList; // 0x30
		::System::UInt32 SoundAttenuationConfigID; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISTRICTAREASOUNDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DistrictAreaSoundConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DistrictAreaSoundConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISTRICTAREASOUNDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
