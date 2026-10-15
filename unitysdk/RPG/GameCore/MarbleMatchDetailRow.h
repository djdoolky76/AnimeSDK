#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleMatchDetailRow; }

#define RPG_GAMECORE_MARBLEMATCHDETAILROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8403A0)
#define RPG_GAMECORE_MARBLEMATCHDETAILROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D840260)

namespace RPG::GameCore
{
	class MarbleMatchDetailRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* NpcList; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHDETAILROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleMatchDetailRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleMatchDetailRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHDETAILROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
