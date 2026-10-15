#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FloatVariableConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FLOATVARIABLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B7160)
#define RPG_GAMECORE_FLOATVARIABLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B7050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloatVariableConfig_TypeDefinitionIndex = 15491;

	class FloatVariableConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* VariableName; // 0x10
		::System::Single Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATVARIABLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FloatVariableConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FloatVariableConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATVARIABLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
