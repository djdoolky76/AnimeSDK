#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PassByValueSourceType.h"
#include "unitysdk/RPG/GameCore/PassByValueTargetType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvPassByValueClientOnly; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_ADVPASSBYVALUECLIENTONLY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D37C490)
#define RPG_GAMECORE_ADVPASSBYVALUECLIENTONLY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D37C4A0)
#define RPG_GAMECORE_ADVPASSBYVALUECLIENTONLY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D37C460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvPassByValueClientOnly_TypeDefinitionIndex = 20529;

	class AdvPassByValueClientOnly : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PassByValueSourceType SourceType; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* SourceInstanceID; // 0x20
		::RPG::GameCore::DynamicString* SourceKey; // 0x28
		::RPG::GameCore::PassByValueTargetType TargetType; // 0x30
		::System::Byte _padding1[0x4];
		::RPG::GameCore::DynamicFloat* TargetInstanceID; // 0x38
		::RPG::GameCore::DynamicString* TargetKey; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPASSBYVALUECLIENTONLY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvPassByValueClientOnly* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvPassByValueClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPASSBYVALUECLIENTONLY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvPassByValueClientOnly* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvPassByValueClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPASSBYVALUECLIENTONLY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
