#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianMemberInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELPEDESTRIANMEMBERINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D796330)
#define RPG_GAMECORE_LEVELPEDESTRIANMEMBERINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7961E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianMemberInfo_TypeDefinitionIndex = 17283;

	class LevelPedestrianMemberInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Identity; // 0x10
		::System::String* FeatureID; // 0x18
		::System::Single Weight; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANMEMBERINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianMemberInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianMemberInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANMEMBERINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
