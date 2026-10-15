#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingEffectType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingEffectRow; }

#define RPG_GAMECORE_CHENLINGEFFECTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D58BCD0)
#define RPG_GAMECORE_CHENLINGEFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D58BA40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingEffectRow_TypeDefinitionIndex = 11035;

	class ChenLingEffectRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::System::UInt32 Param3; // 0x18
		::RPG::GameCore::ChenLingEffectType EffectType; // 0x1C
		::System::UInt32 ID; // 0x20
		::System::UInt32 Param4; // 0x24
		::System::UInt32 Param2; // 0x28
		::System::UInt32 Param1; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGEFFECTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingEffectRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingEffectRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGEFFECTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
