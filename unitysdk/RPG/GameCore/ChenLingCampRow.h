#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingCampRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGCAMPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D55CD50)
#define RPG_GAMECORE_CHENLINGCAMPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D55CC20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingCampRow_TypeDefinitionIndex = 11093;

	class ChenLingCampRow : public ::System::Object
	{
	public:
		::System::String* FlagPrefab; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGCAMPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingCampRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingCampRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGCAMPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
