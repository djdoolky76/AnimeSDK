#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBJANKHLNGO;
namespace System { class Object; }

#define NJKFCOIBIOK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A796580)
#define NJKFCOIBIOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1A796550)
#define NJKFCOIBIOK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A7966A0)
#define NJKFCOIBIOK_FOEGMPIAPDG_OFFSET UNITYSDK_OFFSET(0x1A796700)
#define NJKFCOIBIOK_HBJIKNIIMGN_OFFSET UNITYSDK_OFFSET(0x1A7965F0)

inline static constexpr unsigned int NJKFCOIBIOK_TypeDefinitionIndex = 78835;

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
