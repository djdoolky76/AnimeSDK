#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS95_1_CTOR_OFFSET UNITYSDK_OFFSET(0xD1661C0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS95_1__LIKE_B__1_OFFSET UNITYSDK_OFFSET(0xD1661D0)

namespace RPG::Client
{
	template <typename T>
	class GridFightGameRef___c__DisplayClass95_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Boolean success; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS95_1_CTOR_OFFSET))(this);
		}

		::System::Void _Like_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS95_1__LIKE_B__1_OFFSET))(this);
		}

	};
}
