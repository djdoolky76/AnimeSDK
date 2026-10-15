#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RequestPassByValueSourceType.h"
#include "unitysdk/RPG/GameCore/RequestPassByValueTargetType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvPassByValueClientServer; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_ADVPASSBYVALUECLIENTSERVER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3AA220)
#define RPG_GAMECORE_ADVPASSBYVALUECLIENTSERVER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3AA230)
#define RPG_GAMECORE_ADVPASSBYVALUECLIENTSERVER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3AA1F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvPassByValueClientServer_TypeDefinitionIndex = 20530;

	class AdvPassByValueClientServer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::RequestPassByValueSourceType SourceType; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* SourceInstanceID; // 0x20
		::RPG::GameCore::DynamicString* SourceKey; // 0x28
		::RPG::GameCore::RequestPassByValueTargetType TargetType; // 0x30
		::System::Byte _padding1[0x4];
		::RPG::GameCore::DynamicString* TargetKey; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPASSBYVALUECLIENTSERVER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvPassByValueClientServer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvPassByValueClientServer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPASSBYVALUECLIENTSERVER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvPassByValueClientServer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvPassByValueClientServer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPASSBYVALUECLIENTSERVER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
