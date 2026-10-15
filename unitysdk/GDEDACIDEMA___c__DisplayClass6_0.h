#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define GDEDACIDEMA___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1598F700)
#define GDEDACIDEMA___C__DISPLAYCLASS6_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0x1598FCC0)

inline static constexpr unsigned int GDEDACIDEMA___c__DisplayClass6_0_TypeDefinitionIndex = 58101;

	class GDEDACIDEMA___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::String* controllerName; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEDACIDEMA___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEDACIDEMA___C__DISPLAYCLASS6_0__ONTASKBEGIN_B__0_OFFSET))(this);
		}

	};
