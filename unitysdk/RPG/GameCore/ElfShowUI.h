#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfShowUI; }
namespace System { class String; }

#define RPG_GAMECORE_ELFSHOWUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D60ACC0)
#define RPG_GAMECORE_ELFSHOWUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D60ACD0)
#define RPG_GAMECORE_ELFSHOWUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D60AC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfShowUI_TypeDefinitionIndex = 21738;

	class ElfShowUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Name; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSHOWUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfShowUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfShowUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSHOWUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfShowUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfShowUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSHOWUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
