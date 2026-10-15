#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOBAIBBHDEL;

#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD2CD3C0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG___C__DISPLAYCLASS5_0__CANAUTOOPENSHOP_B__0_OFFSET UNITYSDK_OFFSET(0xD2CD4A0)

namespace RPG::Client
{
	class GridFightTutorialStageConfig___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::UInt32 chapterID; // 0x10
		::System::UInt32 sectionID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _CanAutoOpenShop_b__0(::AOBAIBBHDEL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AOBAIBBHDEL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG___C__DISPLAYCLASS5_0__CANAUTOOPENSHOP_B__0_OFFSET))(this, a1);
		}

	};
}
