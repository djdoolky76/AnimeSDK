#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingGridOffset; }

#define RPG_GAMECORE_CHENLINGGRIDOFFSET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5654D0)
#define RPG_GAMECORE_CHENLINGGRIDOFFSET_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D565380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingGridOffset_TypeDefinitionIndex = 11044;

	class ChenLingGridOffset : public ::System::Object
	{
	public:
		::System::Int32 Y; // 0x10
		::System::Int32 X; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGRIDOFFSET_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingGridOffset* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingGridOffset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGRIDOFFSET_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
