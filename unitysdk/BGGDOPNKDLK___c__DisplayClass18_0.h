#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGGDOPNKDLK_GLGPGAAPAAI;

#define BGGDOPNKDLK___C__DISPLAYCLASS18_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5BA9D0)
#define BGGDOPNKDLK___C__DISPLAYCLASS18_0__SEARCHMAXWEIGHTPATHDIRECTION_B__0_OFFSET UNITYSDK_OFFSET(0x1C5BD600)
#define BGGDOPNKDLK___C__DISPLAYCLASS18_0__SEARCHMAXWEIGHTPATHDIRECTION_B__1_OFFSET UNITYSDK_OFFSET(0x1C5BD630)

	class BGGDOPNKDLK___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::BGGDOPNKDLK_GLGPGAAPAAI* findContext; // 0x10
		::System::Single maxWeight; // 0x18
		::System::Byte _padding0[0x4];
		::System::Double sumExp; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGDOPNKDLK___C__DISPLAYCLASS18_0_CTOR_OFFSET))(this);
		}

		::System::Double _SearchMaxWeightPathDirection_b__0(::System::Single a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BGGDOPNKDLK___C__DISPLAYCLASS18_0__SEARCHMAXWEIGHTPATHDIRECTION_B__0_OFFSET))(this, a1);
		}

		::System::Double _SearchMaxWeightPathDirection_b__1(::System::Double a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + BGGDOPNKDLK___C__DISPLAYCLASS18_0__SEARCHMAXWEIGHTPATHDIRECTION_B__1_OFFSET))(this, a1);
		}

	};
