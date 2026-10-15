#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PetPartySummonUnitTagMapping; }
namespace System { class String; }

#define RPG_GAMECORE_PETPARTYSUMMONUNITTAGMAPPING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DD8E0)
#define RPG_GAMECORE_PETPARTYSUMMONUNITTAGMAPPING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8DD790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetPartySummonUnitTagMapping_TypeDefinitionIndex = 17541;

	class PetPartySummonUnitTagMapping : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SummonUnitID; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::String*>* InteractionTags; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYSUMMONUNITTAGMAPPING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PetPartySummonUnitTagMapping* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PetPartySummonUnitTagMapping*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYSUMMONUNITTAGMAPPING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
