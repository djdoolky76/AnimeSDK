#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class OpticalIllusionPuzzleBoard_IBMIJELKFCI; }

#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C__DISPLAYCLASS100_3_CTOR_OFFSET UNITYSDK_OFFSET(0xDD4ACA0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C__DISPLAYCLASS100_3___BFS_B__3_OFFSET UNITYSDK_OFFSET(0xDD4B440)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OpticalIllusionPuzzleBoard___c__DisplayClass100_3_TypeDefinitionIndex = 78709;

	template <typename T1, typename T2, typename T3>
	class OpticalIllusionPuzzleBoard___c__DisplayClass100_3 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::OpticalIllusionPuzzleBoard_IBMIJELKFCI* nextNode; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C__DISPLAYCLASS100_3_CTOR_OFFSET))(this);
		}

		::System::Void __BFS_b__3(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C__DISPLAYCLASS100_3___BFS_B__3_OFFSET))(this, a1);
		}

	};
}
