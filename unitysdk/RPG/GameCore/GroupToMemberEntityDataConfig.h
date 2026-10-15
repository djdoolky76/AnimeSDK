#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GroupAdaptDataType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class GroupToMemberEntityDataConfig; }

#define RPG_GAMECORE_GROUPTOMEMBERENTITYDATACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D74CE90)
#define RPG_GAMECORE_GROUPTOMEMBERENTITYDATACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D74CD10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupToMemberEntityDataConfig_TypeDefinitionIndex = 20740;

	class GroupToMemberEntityDataConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 TargetMemberInstanceID; // 0x10
		::RPG::GameCore::GroupAdaptDataType SourceDataType; // 0x14
		::RPG::GameCore::DynamicString* SourceName; // 0x18
		::RPG::GameCore::DynamicString* TargetName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPTOMEMBERENTITYDATACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GroupToMemberEntityDataConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GroupToMemberEntityDataConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPTOMEMBERENTITYDATACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
