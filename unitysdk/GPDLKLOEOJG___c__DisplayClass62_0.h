#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLPPDCIBMIH;
class GPDLKLOEOJG;
class IFLICGOLBIG;

#define GPDLKLOEOJG___C__DISPLAYCLASS62_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15B3E620)
#define GPDLKLOEOJG___C__DISPLAYCLASS62_0__REFRESHHOLDEDDICESDATA_B__0_OFFSET UNITYSDK_OFFSET(0x15B42A90)

inline static constexpr unsigned int GPDLKLOEOJG___c__DisplayClass62_0_TypeDefinitionIndex = 60321;

	class GPDLKLOEOJG___c__DisplayClass62_0 : public ::System::Object
	{
	public:
		::GPDLKLOEOJG* __4__this; // 0x10
		::IFLICGOLBIG* dice; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG___C__DISPLAYCLASS62_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshHoldedDicesData_b__0(::GLPPDCIBMIH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GLPPDCIBMIH*))((::PBYTE)hIl2Cpp + GPDLKLOEOJG___C__DISPLAYCLASS62_0__REFRESHHOLDEDDICESDATA_B__0_OFFSET))(this, a1);
		}

	};
