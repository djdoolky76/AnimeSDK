#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetHudTemplate; }

#define RPG_GAMECORE_SETHUDTEMPLATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB6450)
#define RPG_GAMECORE_SETHUDTEMPLATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB6460)
#define RPG_GAMECORE_SETHUDTEMPLATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB6420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetHudTemplate_TypeDefinitionIndex = 20902;

	class SetHudTemplate : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 TemplateID; // 0x18
		::System::Boolean EnableTemplate; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETHUDTEMPLATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetHudTemplate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetHudTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETHUDTEMPLATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetHudTemplate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetHudTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETHUDTEMPLATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
