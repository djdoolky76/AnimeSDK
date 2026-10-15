#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class RequestSetServerGroupPropertyV2; }

#define RPG_GAMECORE_REQUESTSETSERVERGROUPPROPERTYV2_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9897D0)
#define RPG_GAMECORE_REQUESTSETSERVERGROUPPROPERTYV2_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9897E0)
#define RPG_GAMECORE_REQUESTSETSERVERGROUPPROPERTYV2_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9897A0)

namespace RPG::GameCore
{
	class RequestSetServerGroupPropertyV2 : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicString* DynamicName; // 0x20
		::System::Int16 Value; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REQUESTSETSERVERGROUPPROPERTYV2_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RequestSetServerGroupPropertyV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RequestSetServerGroupPropertyV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REQUESTSETSERVERGROUPPROPERTYV2_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RequestSetServerGroupPropertyV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RequestSetServerGroupPropertyV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REQUESTSETSERVERGROUPPROPERTYV2_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
