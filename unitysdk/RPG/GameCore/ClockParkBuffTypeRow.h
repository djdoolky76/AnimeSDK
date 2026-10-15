#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ClockParkBuffType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockParkBuffTypeRow; }
namespace System { class String; }

#define RPG_GAMECORE_CLOCKPARKBUFFTYPEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D58C850)
#define RPG_GAMECORE_CLOCKPARKBUFFTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D58C5E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkBuffTypeRow_TypeDefinitionIndex = 11186;

	class ClockParkBuffTypeRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::GameCore::ClockParkBuffType BuffType; // 0x18
		::System::Boolean BuffJoint; // 0x1C
		::System::Boolean BuffRelease; // 0x1D
		::System::Boolean BuffDisplay; // 0x1E
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKBUFFTYPEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClockParkBuffTypeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClockParkBuffTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKBUFFTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
