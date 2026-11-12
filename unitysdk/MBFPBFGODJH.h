#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBAMBIMMJKB.h"
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MBFPBFGODJH_CTOR_OFFSET UNITYSDK_OFFSET(0xC0C07B0)
#define MBFPBFGODJH_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0xC0C06E0)
#define MBFPBFGODJH_JCKGONAAIPB_OFFSET UNITYSDK_OFFSET(0xC0C0730)

inline static constexpr unsigned int MBFPBFGODJH_TypeDefinitionIndex = 73631;

	class MBFPBFGODJH : public ::LBAMBIMMJKB
	{
	public:
		::UnityEngine::Transform* BOGDFBIKEJE; // 0x18
		::UnityEngine::Transform* OFIPFNIBMLB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFPBFGODJH_CTOR_OFFSET))(this);
		}

		::System::String* IAMCNOAAALI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFPBFGODJH_IAMCNOAAALI_OFFSET))(this);
		}

		::System::Void JCKGONAAIPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFPBFGODJH_JCKGONAAIPB_OFFSET))(this);
		}

	};
