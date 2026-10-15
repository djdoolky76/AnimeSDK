#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPKDNHLINPC.h"
#include "unitysdk/System/Object.h"
class INMMPMDELKE;

#define MNCOPNHONHO___C__DISPLAYCLASS127_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB9EF360)
#define MNCOPNHONHO___C__DISPLAYCLASS127_0__CREATECAMERATRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0xBA03790)
#define MNCOPNHONHO___C__DISPLAYCLASS127_0__CREATECAMERATRIGGER_B__1_OFFSET UNITYSDK_OFFSET(0xBA03810)

inline static constexpr unsigned int MNCOPNHONHO___c__DisplayClass127_0_TypeDefinitionIndex = 76690;

	class MNCOPNHONHO___c__DisplayClass127_0 : public ::System::Object
	{
	public:
		::HPKDNHLINPC callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCOPNHONHO___C__DISPLAYCLASS127_0_CTOR_OFFSET))(this);
		}

		::System::Void _CreateCameraTrigger_b__0(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + MNCOPNHONHO___C__DISPLAYCLASS127_0__CREATECAMERATRIGGER_B__0_OFFSET))(this, a1);
		}

		::System::Void _CreateCameraTrigger_b__1(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + MNCOPNHONHO___C__DISPLAYCLASS127_0__CREATECAMERATRIGGER_B__1_OFFSET))(this, a1);
		}

	};
