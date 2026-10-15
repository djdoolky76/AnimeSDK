#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/VolumeType.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageVolumeConfigV2; }
namespace System { class String; }

#define RPG_GAMECORE_STAGEVOLUMECONFIGV2_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB16860)
#define RPG_GAMECORE_STAGEVOLUMECONFIGV2_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB16870)
#define RPG_GAMECORE_STAGEVOLUMECONFIGV2_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB166F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageVolumeConfigV2_TypeDefinitionIndex = 19150;

	class StageVolumeConfigV2 : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::Int32 Priority; // 0x18
		::RPG::GameCore::VolumeType Type; // 0x1C
		::RPG::MVector3 Position; // 0x20
		::RPG::MVector2 Extend; // 0x2C
		::RPG::MVector3 Rotation; // 0x34
		::System::Single Height; // 0x40
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::MVector2>* Vertices; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOLUMECONFIGV2_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageVolumeConfigV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageVolumeConfigV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOLUMECONFIGV2_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageVolumeConfigV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageVolumeConfigV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOLUMECONFIGV2_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
