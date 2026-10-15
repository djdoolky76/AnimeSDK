#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EvolveBuildMonsteCollectionRow; }

#define RPG_GAMECORE_EVOLVEBUILDMONSTECOLLECTIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D684A10)
#define RPG_GAMECORE_EVOLVEBUILDMONSTECOLLECTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D684430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildMonsteCollectionRow_TypeDefinitionIndex = 11404;

	class EvolveBuildMonsteCollectionRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::UInt32 UnlockQuest; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDMONSTECOLLECTIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::EvolveBuildMonsteCollectionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EvolveBuildMonsteCollectionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDMONSTECOLLECTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
