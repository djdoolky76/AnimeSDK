#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEPEINGEKCD;

#define ANLGFGNKPHL___C__DISPLAYCLASS1_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1588EC30)
#define ANLGFGNKPHL___C__DISPLAYCLASS1_1__CREATE_B__2_OFFSET UNITYSDK_OFFSET(0x1588F490)

inline static constexpr unsigned int ANLGFGNKPHL___c__DisplayClass1_1_TypeDefinitionIndex = 78396;

	template <typename T>
	class ANLGFGNKPHL___c__DisplayClass1_1 : public ::System::Object
	{
	public:
		::AEPEINGEKCD* task; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANLGFGNKPHL___C__DISPLAYCLASS1_1_CTOR_OFFSET))(this);
		}

		::System::Void _Create_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANLGFGNKPHL___C__DISPLAYCLASS1_1__CREATE_B__2_OFFSET))(this);
		}

	};
