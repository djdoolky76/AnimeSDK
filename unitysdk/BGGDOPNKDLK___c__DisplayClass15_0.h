#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class CKEIGJNHMDN;
class OIKDLNCBPFM;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BGGDOPNKDLK___C__DISPLAYCLASS15_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5BA900)
#define BGGDOPNKDLK___C__DISPLAYCLASS15_0__GETFARTARGETACCURATEGOALWEIGHTCOMPUTER_B__0_OFFSET UNITYSDK_OFFSET(0x1C5BD450)

inline static constexpr unsigned int BGGDOPNKDLK___c__DisplayClass15_0_TypeDefinitionIndex = 37268;

	class BGGDOPNKDLK___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::System::Int32>* targetToAreaDistance; // 0x10
		::System::Int32 catTargetDistance; // 0x18
		::System::Int32 targetY; // 0x1C
		::System::UInt32 targetSlopeDistance; // 0x20
		::System::Int32 targetX; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGDOPNKDLK___C__DISPLAYCLASS15_0_CTOR_OFFSET))(this);
		}

		::System::Single _GetFarTargetAccurateGoalWeightComputer_b__0(::CKEIGJNHMDN* a1, ::OIKDLNCBPFM* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Single(*)(::PVOID, ::CKEIGJNHMDN*, ::OIKDLNCBPFM*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BGGDOPNKDLK___C__DISPLAYCLASS15_0__GETFARTARGETACCURATEGOALWEIGHTCOMPUTER_B__0_OFFSET))(this, a1, a2, a3, a4);
		}

	};
