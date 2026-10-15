#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClosePage; }
namespace System { class String; }

#define RPG_GAMECORE_CLOSEPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D599EE0)
#define RPG_GAMECORE_CLOSEPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D599EF0)
#define RPG_GAMECORE_CLOSEPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D599EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClosePage_TypeDefinitionIndex = 20621;

	class ClosePage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* PageNames; // 0x18
		::Il2CppArray<::System::String*>* PageRootNames; // 0x20
		::System::Boolean IsSilentExit; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSEPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClosePage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClosePage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSEPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClosePage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClosePage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSEPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
