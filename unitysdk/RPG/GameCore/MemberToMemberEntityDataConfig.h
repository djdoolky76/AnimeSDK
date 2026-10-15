#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class MemberToMemberEntityDataConfig; }

#define RPG_GAMECORE_MEMBERTOMEMBERENTITYDATACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8721F0)
#define RPG_GAMECORE_MEMBERTOMEMBERENTITYDATACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D872070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MemberToMemberEntityDataConfig_TypeDefinitionIndex = 20742;

	class MemberToMemberEntityDataConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SourceMemberInstanceID; // 0x10
		::System::UInt32 TargetMemberInstanceID; // 0x14
		::RPG::GameCore::DynamicString* SourceName; // 0x18
		::RPG::GameCore::DynamicString* TargetName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MEMBERTOMEMBERENTITYDATACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MemberToMemberEntityDataConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MemberToMemberEntityDataConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MEMBERTOMEMBERENTITYDATACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
