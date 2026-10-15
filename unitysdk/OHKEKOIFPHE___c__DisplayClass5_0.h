#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
class OHKEKOIFPHE;

#define OHKEKOIFPHE___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBE6F700)
#define OHKEKOIFPHE___C__DISPLAYCLASS5_0__SETANCHORPOS_B__0_OFFSET UNITYSDK_OFFSET(0xBE71070)

	class OHKEKOIFPHE___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::OHKEKOIFPHE* __4__this; // 0x10
		::UnityEngine::Vector2 pos; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKEKOIFPHE___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Void _SetAnchorPos_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKEKOIFPHE___C__DISPLAYCLASS5_0__SETANCHORPOS_B__0_OFFSET))(this);
		}

	};
