#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBJANKHLNGO;
namespace System { class Object; }

#define NJKFCOIBIOK_CTOR_1_OFFSET UNITYSDK_OFFSET(0xBC1A450)
#define NJKFCOIBIOK_CTOR_OFFSET UNITYSDK_OFFSET(0xBC1A420)
#define NJKFCOIBIOK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC1A570)
#define NJKFCOIBIOK_FOEGMPIAPDG_OFFSET UNITYSDK_OFFSET(0xBC1A5D0)
#define NJKFCOIBIOK_HBJIKNIIMGN_OFFSET UNITYSDK_OFFSET(0xBC1A4C0)

	class NJKFCOIBIOK : public ::System::Object
	{
	public:
		::OBJANKHLNGO* GJALMBBNNOF; // 0x10
		::System::Boolean NIHOBIGHEPD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJKFCOIBIOK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OBJANKHLNGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + NJKFCOIBIOK_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void HBJIKNIIMGN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NJKFCOIBIOK_HBJIKNIIMGN_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJKFCOIBIOK_DISPOSE_OFFSET))(this);
		}

		::OBJANKHLNGO* FOEGMPIAPDG()
		{
			return ((::OBJANKHLNGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJKFCOIBIOK_FOEGMPIAPDG_OFFSET))(this);
		}

	};
