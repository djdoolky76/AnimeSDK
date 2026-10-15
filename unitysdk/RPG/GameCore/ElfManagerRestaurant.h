#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfManagerRestaurant; }

#define RPG_GAMECORE_ELFMANAGERRESTAURANT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D609160)
#define RPG_GAMECORE_ELFMANAGERRESTAURANT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D609170)
#define RPG_GAMECORE_ELFMANAGERRESTAURANT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6090A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfManagerRestaurant_TypeDefinitionIndex = 21735;

	class ElfManagerRestaurant : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFMANAGERRESTAURANT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfManagerRestaurant* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfManagerRestaurant*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFMANAGERRESTAURANT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfManagerRestaurant* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfManagerRestaurant*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFMANAGERRESTAURANT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
