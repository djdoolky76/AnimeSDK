#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameDynamicVar; }
namespace RPG::GameCore { class LittleGameEntityVar; }
namespace RPG::GameCore { class LittleGameEntityVarConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMEDYNAMICVAR_ACHDNIGNJIO_OFFSET UNITYSDK_OFFSET(0x1D7E0DC0)
#define RPG_GAMECORE_LITTLEGAMEDYNAMICVAR_AIKOGGNKDFD_OFFSET UNITYSDK_OFFSET(0x1D7E0F30)
#define RPG_GAMECORE_LITTLEGAMEDYNAMICVAR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E0CA0)
#define RPG_GAMECORE_LITTLEGAMEDYNAMICVAR_DEODNHLBCPI_OFFSET UNITYSDK_OFFSET(0x1D7E0E00)
#define RPG_GAMECORE_LITTLEGAMEDYNAMICVAR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7E0CB0)
#define RPG_GAMECORE_LITTLEGAMEDYNAMICVAR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E0650)

namespace RPG::GameCore
{
	class LittleGameDynamicVar : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsEntityVar; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* VarName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEDYNAMICVAR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameDynamicVar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameDynamicVar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEDYNAMICVAR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameDynamicVar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameDynamicVar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEDYNAMICVAR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::String* ACHDNIGNJIO(::RPG::GameCore::LittleGameEntityVarConfig* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityVarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEDYNAMICVAR_ACHDNIGNJIO_OFFSET))(this, a1);
		}

		::System::Boolean AIKOGGNKDFD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEDYNAMICVAR_AIKOGGNKDFD_OFFSET))(this);
		}

		::RPG::GameCore::LittleGameEntityVar* DEODNHLBCPI(::RPG::GameCore::LittleGameEntityVarConfig* a1)
		{
			return ((::RPG::GameCore::LittleGameEntityVar*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityVarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEDYNAMICVAR_DEODNHLBCPI_OFFSET))(this, a1);
		}

	};
}
