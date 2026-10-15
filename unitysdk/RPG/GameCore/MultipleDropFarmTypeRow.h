#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MultipleDropTypeConfig.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MultipleDropFarmTypeRow; }
namespace System { class String; }

#define RPG_GAMECORE_MULTIPLEDROPFARMTYPEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D892280)
#define RPG_GAMECORE_MULTIPLEDROPFARMTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D891C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MultipleDropFarmTypeRow_TypeDefinitionIndex = 11478;

	class MultipleDropFarmTypeRow : public ::System::Object
	{
	public:
		::System::String* SignIconPath; // 0x10
		::System::UInt32 UnlockID; // 0x18
		::RPG::GameCore::MultipleDropTypeConfig MultipleDropType; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MULTIPLEDROPFARMTYPEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MultipleDropFarmTypeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MultipleDropFarmTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MULTIPLEDROPFARMTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
