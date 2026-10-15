#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class PageInfo; }
namespace System { class Object; }

#define MIHOYO_SDK_PAGEINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB013A50)
#define MIHOYO_SDK_PAGEINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB013A90)
#define MIHOYO_SDK_PAGEINFO___C___CCTOR_B__54_0_OFFSET UNITYSDK_OFFSET(0xB013AA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PageInfo___c_TypeDefinitionIndex = 46365;

	class PageInfo___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x2F800);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO___C_CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::PageInfo* __cctor_b__54_0()
		{
			return ((::MiHoYo::SDK::PageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO___C___CCTOR_B__54_0_OFFSET))(this);
		}

	};
}
