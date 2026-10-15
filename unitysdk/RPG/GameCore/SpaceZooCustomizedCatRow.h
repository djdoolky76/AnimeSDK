#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SpaceZooCustomizedCatRow; }

#define RPG_GAMECORE_SPACEZOOCUSTOMIZEDCATROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC6690)
#define RPG_GAMECORE_SPACEZOOCUSTOMIZEDCATROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DAC64E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooCustomizedCatRow_TypeDefinitionIndex = 12373;

	class SpaceZooCustomizedCatRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ChannelFeature; // 0x10
		::System::Boolean NotShowDialog; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 AddCatID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOCUSTOMIZEDCATROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SpaceZooCustomizedCatRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SpaceZooCustomizedCatRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOCUSTOMIZEDCATROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
