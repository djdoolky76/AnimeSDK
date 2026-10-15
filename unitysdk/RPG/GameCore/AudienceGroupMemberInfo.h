#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicJsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AudienceGroupMemberInfo; }

#define RPG_GAMECORE_AUDIENCEGROUPMEMBERINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D6D80)
#define RPG_GAMECORE_AUDIENCEGROUPMEMBERINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3D6D90)
#define RPG_GAMECORE_AUDIENCEGROUPMEMBERINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3D6D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AudienceGroupMemberInfo_TypeDefinitionIndex = 21879;

	class AudienceGroupMemberInfo : public ::RPG::GameCore::DynamicJsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 MemberID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIENCEGROUPMEMBERINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AudienceGroupMemberInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AudienceGroupMemberInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIENCEGROUPMEMBERINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AudienceGroupMemberInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AudienceGroupMemberInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIENCEGROUPMEMBERINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
