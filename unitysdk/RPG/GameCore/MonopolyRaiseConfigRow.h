#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyRaiseConfigRow; }

#define RPG_GAMECORE_MONOPOLYRAISECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8AB520)
#define RPG_GAMECORE_MONOPOLYRAISECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8AAEC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyRaiseConfigRow_TypeDefinitionIndex = 12071;

	class MonopolyRaiseConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 RaiseValue; // 0x10
		::System::UInt32 Cost; // 0x14
		::System::UInt32 RaiseCurveID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYRAISECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyRaiseConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyRaiseConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYRAISECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
