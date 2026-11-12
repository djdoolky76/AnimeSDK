#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ModifyDamageDisplayData; }
namespace System { class String; }

#define RPG_GAMECORE_MODIFYDAMAGEDISPLAYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB08A0)
#define RPG_GAMECORE_MODIFYDAMAGEDISPLAYDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EAB08C0)
#define RPG_GAMECORE_MODIFYDAMAGEDISPLAYDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EAB0860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyDamageDisplayData_TypeDefinitionIndex = 23507;

	class ModifyDamageDisplayData : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single Duration; // 0x18
		::System::Single Scale; // 0x1C
		::RPG::Client::TextID ExtraDesc; // 0x20
		::System::String* UIAnim; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYDAMAGEDISPLAYDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyDamageDisplayData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyDamageDisplayData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYDAMAGEDISPLAYDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyDamageDisplayData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyDamageDisplayData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYDAMAGEDISPLAYDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
