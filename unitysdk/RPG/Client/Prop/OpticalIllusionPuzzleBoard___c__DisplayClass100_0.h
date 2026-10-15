#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class OpticalIllusionPuzzleBoard_IBMIJELKFCI; }

#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C__DISPLAYCLASS100_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDD42C30)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C__DISPLAYCLASS100_0___BFS_B__0_OFFSET UNITYSDK_OFFSET(0xDD432E0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OpticalIllusionPuzzleBoard___c__DisplayClass100_0_TypeDefinitionIndex = 78705;

	class OpticalIllusionPuzzleBoard___c__DisplayClass100_0 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::OpticalIllusionPuzzleBoard_IBMIJELKFCI* nextNode; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C__DISPLAYCLASS100_0_CTOR_OFFSET))(this);
		}

		::System::Void __BFS_b__0(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C__DISPLAYCLASS100_0___BFS_B__0_OFFSET))(this, a1);
		}

	};
}
