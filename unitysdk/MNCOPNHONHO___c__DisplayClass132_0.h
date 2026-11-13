#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPKDNHLINPC.h"
#include "unitysdk/System/Object.h"
class INMMPMDELKE;

#define MNCOPNHONHO___C__DISPLAYCLASS132_0_CTOR_OFFSET UNITYSDK_OFFSET(0x18919070)
#define MNCOPNHONHO___C__DISPLAYCLASS132_0__CREATECAMERATRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0x1892DC10)
#define MNCOPNHONHO___C__DISPLAYCLASS132_0__CREATECAMERATRIGGER_B__1_OFFSET UNITYSDK_OFFSET(0x1892DC90)

inline static constexpr unsigned int MNCOPNHONHO___c__DisplayClass132_0_TypeDefinitionIndex = 79020;

	class MNCOPNHONHO___c__DisplayClass132_0 : public ::System::Object
	{
	public:
		::HPKDNHLINPC callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCOPNHONHO___C__DISPLAYCLASS132_0_CTOR_OFFSET))(this);
		}

		::System::Void _CreateCameraTrigger_b__0(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + MNCOPNHONHO___C__DISPLAYCLASS132_0__CREATECAMERATRIGGER_B__0_OFFSET))(this, a1);
		}

		::System::Void _CreateCameraTrigger_b__1(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + MNCOPNHONHO___C__DISPLAYCLASS132_0__CREATECAMERATRIGGER_B__1_OFFSET))(this, a1);
		}

	};
