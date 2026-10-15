#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class DEJDNPBEBFG;
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveTeamRecommendRow; }
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVETEAMRECOMMENDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7531F0)
#define RPG_GAMECORE_IDLELIVETEAMRECOMMENDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D752F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveTeamRecommendRow_TypeDefinitionIndex = 11709;

	class IdleLiveTeamRecommendRow : public ::System::Object
	{
	public:
		::System::String* DisplayCondition; // 0x10
		::Il2CppArray<::DEJDNPBEBFG*>* TeamMember; // 0x18
		::RPG::Client::TextID Title; // 0x20
		::System::UInt32 ID; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Desc; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVETEAMRECOMMENDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveTeamRecommendRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveTeamRecommendRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVETEAMRECOMMENDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
