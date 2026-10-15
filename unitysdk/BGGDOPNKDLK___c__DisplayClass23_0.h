#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BGGDOPNKDLK___C__DISPLAYCLASS23_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5BC570)
#define BGGDOPNKDLK___C__DISPLAYCLASS23_0__FINDPATHFINDLOCKTARGETFORREACHABLEPICKUPITEMINHALFSQUARE_B__0_OFFSET UNITYSDK_OFFSET(0x1C5BD640)

inline static constexpr unsigned int BGGDOPNKDLK___c__DisplayClass23_0_TypeDefinitionIndex = 37270;

	class BGGDOPNKDLK___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::Int32 searchEndZ; // 0x10
		::System::Int32 searchStartZ; // 0x14
		::System::Int32 searchEndX; // 0x18
		::System::Int32 searchStartX; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGDOPNKDLK___C__DISPLAYCLASS23_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _FindPathFindLockTargetForReachablePickupItemInHalfSquare_b__0(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BGGDOPNKDLK___C__DISPLAYCLASS23_0__FINDPATHFINDLOCKTARGETFORREACHABLEPICKUPITEMINHALFSQUARE_B__0_OFFSET))(this, a1, a2);
		}

	};
