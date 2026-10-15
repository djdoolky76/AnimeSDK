#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class ILGDPAKJKGE;
namespace RPG::GameCore { class AlleyMapGradeRow; }
namespace System { class String; }

#define RPG_GAMECORE_ALLEYMAPGRADEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E76D0)
#define RPG_GAMECORE_ALLEYMAPGRADEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3E70B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyMapGradeRow_TypeDefinitionIndex = 12636;

	class AlleyMapGradeRow : public ::System::Object
	{
	public:
		::System::String* MapConfig; // 0x10
		::Il2CppArray<::ILGDPAKJKGE*>* GradeConditions; // 0x18
		::System::UInt32 GradeID; // 0x20
		::System::UInt32 MapID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPGRADEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AlleyMapGradeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AlleyMapGradeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPGRADEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
