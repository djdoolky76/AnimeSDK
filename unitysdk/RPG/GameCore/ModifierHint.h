#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ModifierHintType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ModifierHint; }

#define RPG_GAMECORE_MODIFIERHINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D88E5B0)
#define RPG_GAMECORE_MODIFIERHINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D88E3F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierHint_TypeDefinitionIndex = 18243;

	class ModifierHint : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ModifierHintType HintType; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Desc; // 0x18
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* ParamList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERHINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifierHint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifierHint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERHINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
