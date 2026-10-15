#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterFaceExpressionConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERFACEEXPRESSIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D571370)
#define RPG_GAMECORE_CHARACTERFACEEXPRESSIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D571060)

namespace RPG::GameCore
{
	class CharacterFaceExpressionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single ExCheekIntensity; // 0x10
		::System::Single ExShyIntensity; // 0x14
		::System::Single ExShadowIntensity; // 0x18
		::System::Boolean ChangeStaticProperty; // 0x1C
		::System::Byte _padding0[0x3];
		::System::String* CheekColor; // 0x20
		::System::Single MapThreshold; // 0x28
		::System::Single SpecularIntensity; // 0x2C
		::System::String* ShyColor; // 0x30
		::System::String* ShadowColor; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERFACEEXPRESSIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterFaceExpressionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterFaceExpressionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERFACEEXPRESSIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
