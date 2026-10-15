#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnableSpecificModifierSpecialMark; }
namespace System { class String; }

#define RPG_GAMECORE_ENABLESPECIFICMODIFIERSPECIALMARK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6134C0)
#define RPG_GAMECORE_ENABLESPECIFICMODIFIERSPECIALMARK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6134D0)
#define RPG_GAMECORE_ENABLESPECIFICMODIFIERSPECIALMARK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D613490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableSpecificModifierSpecialMark_TypeDefinitionIndex = 23175;

	class EnableSpecificModifierSpecialMark : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* ModifierName; // 0x18
		::System::Boolean ShowAll; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLESPECIFICMODIFIERSPECIALMARK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableSpecificModifierSpecialMark* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableSpecificModifierSpecialMark*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLESPECIFICMODIFIERSPECIALMARK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableSpecificModifierSpecialMark* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableSpecificModifierSpecialMark*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLESPECIFICMODIFIERSPECIALMARK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
