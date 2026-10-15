#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianLineUpSourceInfo; }

#define RPG_GAMECORE_LEVELPEDESTRIANLINEUPSOURCEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7961D0)
#define RPG_GAMECORE_LEVELPEDESTRIANLINEUPSOURCEINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D796030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianLineUpSourceInfo_TypeDefinitionIndex = 17284;

	class LevelPedestrianLineUpSourceInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 NodeIndex; // 0x10
		::System::Boolean Forward; // 0x14
		::System::Byte _padding0[0x3];
		::System::Single Weight; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANLINEUPSOURCEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianLineUpSourceInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianLineUpSourceInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANLINEUPSOURCEINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
