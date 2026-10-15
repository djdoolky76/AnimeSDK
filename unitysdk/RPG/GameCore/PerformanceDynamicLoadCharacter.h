#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceDynamicLoadCharacter; }
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCEDYNAMICLOADCHARACTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8F9EC0)
#define RPG_GAMECORE_PERFORMANCEDYNAMICLOADCHARACTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8F9ED0)
#define RPG_GAMECORE_PERFORMANCEDYNAMICLOADCHARACTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8F9E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceDynamicLoadCharacter_TypeDefinitionIndex = 21858;

	class PerformanceDynamicLoadCharacter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* DestroyUnqueNames; // 0x18
		::Il2CppArray<::System::String*>* CreateUnqueNames; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEDYNAMICLOADCHARACTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceDynamicLoadCharacter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceDynamicLoadCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEDYNAMICLOADCHARACTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceDynamicLoadCharacter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceDynamicLoadCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEDYNAMICLOADCHARACTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
