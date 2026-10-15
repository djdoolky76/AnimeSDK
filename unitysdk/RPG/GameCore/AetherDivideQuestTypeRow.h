#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AetherDivideQuestTypeRow; }

#define RPG_GAMECORE_AETHERDIVIDEQUESTTYPEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D89B0)
#define RPG_GAMECORE_AETHERDIVIDEQUESTTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3D8430)

namespace RPG::GameCore
{
	class AetherDivideQuestTypeRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TypeGroupList; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEQUESTTYPEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AetherDivideQuestTypeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AetherDivideQuestTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEQUESTTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
