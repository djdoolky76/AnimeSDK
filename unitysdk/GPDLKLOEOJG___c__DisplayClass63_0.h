#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFLICGOLBIG;

#define GPDLKLOEOJG___C__DISPLAYCLASS63_0_CTOR_OFFSET UNITYSDK_OFFSET(0x17DABD40)
#define GPDLKLOEOJG___C__DISPLAYCLASS63_0__REFRESHSTAGEDICESRENDER_B__0_OFFSET UNITYSDK_OFFSET(0x17DAFF40)

inline static constexpr unsigned int GPDLKLOEOJG___c__DisplayClass63_0_TypeDefinitionIndex = 61607;

	class GPDLKLOEOJG___c__DisplayClass63_0 : public ::System::Object
	{
	public:
		::IFLICGOLBIG* dice; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG___C__DISPLAYCLASS63_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshStageDicesRender_b__0(::IFLICGOLBIG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFLICGOLBIG*))((::PBYTE)hIl2Cpp + GPDLKLOEOJG___C__DISPLAYCLASS63_0__REFRESHSTAGEDICESRENDER_B__0_OFFSET))(this, a1);
		}

	};
