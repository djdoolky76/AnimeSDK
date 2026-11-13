#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class PageInfo; }
namespace System { class Object; }

#define MIHOYO_SDK_PAGEINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF5FDB0)
#define MIHOYO_SDK_PAGEINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF5FDF0)
#define MIHOYO_SDK_PAGEINFO___C___CCTOR_B__54_0_OFFSET UNITYSDK_OFFSET(0x1BF5FE00)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PageInfo___c_TypeDefinitionIndex = 47393;

	class PageInfo___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x23900);
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
