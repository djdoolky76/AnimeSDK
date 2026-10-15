#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesBtnUnlockType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesBtnUnlockRow; }

#define RPG_GAMECORE_PLANETFESBTNUNLOCKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8F6440)
#define RPG_GAMECORE_PLANETFESBTNUNLOCKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8F6340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesBtnUnlockRow_TypeDefinitionIndex = 12275;

	class PlanetFesBtnUnlockRow : public ::System::Object
	{
	public:
		::RPG::GameCore::PlanetFesBtnUnlockType ID; // 0x10
		::System::UInt32 UnlockQuestID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBTNUNLOCKROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesBtnUnlockRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesBtnUnlockRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBTNUNLOCKROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
