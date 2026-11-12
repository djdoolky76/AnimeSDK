#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS98_1_CTOR_OFFSET UNITYSDK_OFFSET(0xDB2CE00)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS98_1__UNLIKE_B__1_OFFSET UNITYSDK_OFFSET(0xDB2CE10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___c__DisplayClass98_1_TypeDefinitionIndex = 66264;

	template <typename T>
	class GridFightGameRef___c__DisplayClass98_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Boolean success; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS98_1_CTOR_OFFSET))(this);
		}

		::System::Void _Unlike_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS98_1__UNLIKE_B__1_OFFSET))(this);
		}

	};
}
