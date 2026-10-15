#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianV2EmitInfo; }
namespace RPG::GameCore { class LevelPedestrianV2RoadEntryInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2EMITINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C4480)
#define RPG_GAMECORE_LEVELPEDESTRIANV2EMITINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C42D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2EmitInfo_TypeDefinitionIndex = 17314;

	class LevelPedestrianV2EmitInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LevelPedestrianV2RoadEntryInfo* RoadEntry; // 0x10
		::System::Int32 EmitSpeed; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* DynamicEmitSpeedBindFSVName; // 0x20
		::Il2CppArray<::System::Int32>* ForbidToRoadIndexList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2EMITINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2EmitInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2EmitInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2EMITINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
