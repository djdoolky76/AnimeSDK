#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicWorkbenchRow; }

#define RPG_GAMECORE_ROGUEMAGICWORKBENCHROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9AAEF0)
#define RPG_GAMECORE_ROGUEMAGICWORKBENCHROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9AADB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicWorkbenchRow_TypeDefinitionIndex = 14870;

	class RogueMagicWorkbenchRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* FuncList; // 0x10
		::System::UInt32 WorkbenchID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICWORKBENCHROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicWorkbenchRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicWorkbenchRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICWORKBENCHROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
