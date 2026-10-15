#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetMunicipalEnable; }

#define RPG_GAMECORE_SETMUNICIPALENABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA8F5F0)
#define RPG_GAMECORE_SETMUNICIPALENABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA8F600)
#define RPG_GAMECORE_SETMUNICIPALENABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA8F5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMunicipalEnable_TypeDefinitionIndex = 20323;

	class SetMunicipalEnable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Visible; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUNICIPALENABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMunicipalEnable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMunicipalEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUNICIPALENABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMunicipalEnable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMunicipalEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUNICIPALENABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
