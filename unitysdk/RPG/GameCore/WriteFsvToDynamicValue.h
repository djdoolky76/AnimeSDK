#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class WriteFsvToDynamicValue; }

#define RPG_GAMECORE_WRITEFSVTODYNAMICVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCAE0E0)
#define RPG_GAMECORE_WRITEFSVTODYNAMICVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCAE0F0)
#define RPG_GAMECORE_WRITEFSVTODYNAMICVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCAE0B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WriteFsvToDynamicValue_TypeDefinitionIndex = 22036;

	class WriteFsvToDynamicValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* FsvName; // 0x18
		::RPG::GameCore::DynamicString* ValueName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WRITEFSVTODYNAMICVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WriteFsvToDynamicValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WriteFsvToDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WRITEFSVTODYNAMICVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WriteFsvToDynamicValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WriteFsvToDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WRITEFSVTODYNAMICVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
