#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveGachaRow; }

#define RPG_GAMECORE_IDLELIVEGACHAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D77C050)
#define RPG_GAMECORE_IDLELIVEGACHAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D77BCD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveGachaRow_TypeDefinitionIndex = 11772;

	class IdleLiveGachaRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* StarProbabilityList; // 0x10
		::Il2CppArray<::System::UInt32>* WorldTagList; // 0x18
		::System::UInt32 GachaID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID GachaName; // 0x28
		::RPG::GameCore::FixPoint CrystalProbability; // 0x38
		::System::UInt32 UpgradeCount; // 0x40
		::System::Boolean IsStarUp; // 0x44
		::System::Boolean IsAvatarGroupUp; // 0x45
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEGACHAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveGachaRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveGachaRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEGACHAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
