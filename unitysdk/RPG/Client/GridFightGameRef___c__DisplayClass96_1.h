#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS96_1_CTOR_OFFSET UNITYSDK_OFFSET(0xD166350)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS96_1__UNLIKE_B__1_OFFSET UNITYSDK_OFFSET(0xD166360)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___c__DisplayClass96_1_TypeDefinitionIndex = 64721;

	template <typename T>
	class GridFightGameRef___c__DisplayClass96_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Boolean success; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS96_1_CTOR_OFFSET))(this);
		}

		::System::Void _Unlike_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS96_1__UNLIKE_B__1_OFFSET))(this);
		}

	};
}
