#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMiracleEffectRow; }

#define RPG_GAMECORE_ROGUEMIRACLEEFFECTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x2077C2B0)
#define RPG_GAMECORE_ROGUEMIRACLEEFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x2077C060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMiracleEffectRow_TypeDefinitionIndex = 14855;

	class RogueMiracleEffectRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::RPG::Client::TextID MiracleDynamicHint; // 0x18
		::RPG::Client::TextID MiracleDesc; // 0x28
		::System::UInt32 MiracleEffectID; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEEFFECTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMiracleEffectRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMiracleEffectRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEEFFECTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
