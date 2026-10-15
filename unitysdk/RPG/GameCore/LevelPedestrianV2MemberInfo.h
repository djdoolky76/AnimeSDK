#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelPedestrianV2MemberInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2MEMBERINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D79B530)
#define RPG_GAMECORE_LEVELPEDESTRIANV2MEMBERINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D79B3E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2MemberInfo_TypeDefinitionIndex = 17288;

	class LevelPedestrianV2MemberInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Identity; // 0x10
		::System::String* FeatureID; // 0x18
		::System::Single Weight; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2MEMBERINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelPedestrianV2MemberInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelPedestrianV2MemberInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2MEMBERINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
