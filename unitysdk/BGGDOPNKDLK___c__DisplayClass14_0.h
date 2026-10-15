#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class CKEIGJNHMDN;
class OIKDLNCBPFM;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BGGDOPNKDLK___C__DISPLAYCLASS14_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C58C3A0)
#define BGGDOPNKDLK___C__DISPLAYCLASS14_0__GETFARTARGETROUGHGOALWEIGHTCOMPUTER_B__0_OFFSET UNITYSDK_OFFSET(0x1C58EF10)
#define BGGDOPNKDLK___C__DISPLAYCLASS14_0__GETFARTARGETROUGHGOALWEIGHTCOMPUTER_B__1_OFFSET UNITYSDK_OFFSET(0x1C58EF70)

inline static constexpr unsigned int BGGDOPNKDLK___c__DisplayClass14_0_TypeDefinitionIndex = 37267;

	class BGGDOPNKDLK___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>* preferPos; // 0x10
		::System::Int32 xDiff; // 0x18
		::System::Int32 targetX; // 0x1C
		::System::Int32 targetY; // 0x20
		::System::Int32 yDiff; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGDOPNKDLK___C__DISPLAYCLASS14_0_CTOR_OFFSET))(this);
		}

		::System::Single _GetFarTargetRoughGoalWeightComputer_b__0(::CKEIGJNHMDN* a1, ::OIKDLNCBPFM* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Single(*)(::PVOID, ::CKEIGJNHMDN*, ::OIKDLNCBPFM*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BGGDOPNKDLK___C__DISPLAYCLASS14_0__GETFARTARGETROUGHGOALWEIGHTCOMPUTER_B__0_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single _GetFarTargetRoughGoalWeightComputer_b__1(::CKEIGJNHMDN* a1, ::OIKDLNCBPFM* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Single(*)(::PVOID, ::CKEIGJNHMDN*, ::OIKDLNCBPFM*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BGGDOPNKDLK___C__DISPLAYCLASS14_0__GETFARTARGETROUGHGOALWEIGHTCOMPUTER_B__1_OFFSET))(this, a1, a2, a3, a4);
		}

	};
