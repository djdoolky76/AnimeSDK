#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityVarType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameEntityVar; }
namespace RPG::GameCore { class LittleGameLevelVariable; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMEENTITYVAR_ACHDNIGNJIO_OFFSET UNITYSDK_OFFSET(0x1D7B34A0)
#define RPG_GAMECORE_LITTLEGAMEENTITYVAR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B4630)
#define RPG_GAMECORE_LITTLEGAMEENTITYVAR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7B4320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameEntityVar_TypeDefinitionIndex = 18868;

	class LittleGameEntityVar : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ID; // 0x10
		::System::String* EntityVarName; // 0x18
		::RPG::GameCore::LittleGameEntityVarType EntityVarType; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* BindLevelVarType; // 0x28
		::System::String* BindLevelVarName; // 0x30
		::RPG::GameCore::LittleGameLevelVariable* DefaultLevelVar; // 0x38
		::System::Boolean AutoCreateAndBindLevelVar; // 0x40
		::System::Byte _padding1[0x3];
		::System::Int32 Value; // 0x44
		::System::Single FloatValue; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEENTITYVAR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameEntityVar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameEntityVar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEENTITYVAR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		::System::String* ACHDNIGNJIO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEENTITYVAR_ACHDNIGNJIO_OFFSET))(this);
		}

	};
}
