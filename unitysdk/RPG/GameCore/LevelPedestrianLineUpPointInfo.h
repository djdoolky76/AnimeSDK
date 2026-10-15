#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianLineUpPointInfo; }
namespace RPG::GameCore { class LevelPedestrianLineUpSourceInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELPEDESTRIANLINEUPPOINTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D796010)
#define RPG_GAMECORE_LEVELPEDESTRIANLINEUPPOINTINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D795C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianLineUpPointInfo_TypeDefinitionIndex = 17285;

	class LevelPedestrianLineUpPointInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelPedestrianLineUpSourceInfo*>* Sources; // 0x10
		::System::String* LineUpPointName; // 0x18
		::RPG::MVector3 LocalPosition; // 0x20
		::System::Single LocalRotationY; // 0x2C
		::System::UInt32 MaxMember; // 0x30
		::System::Single LineUpLength; // 0x34
		::System::Single LineUpRange; // 0x38
		::System::Single GetInOffset; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANLINEUPPOINTINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianLineUpPointInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianLineUpPointInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANLINEUPPOINTINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
