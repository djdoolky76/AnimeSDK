#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class PageInfo; }
namespace System { class Object; }

#define MIHOYO_SDK_PAGEINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB676070)
#define MIHOYO_SDK_PAGEINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB6760B0)
#define MIHOYO_SDK_PAGEINFO___C___CCTOR_B__54_0_OFFSET UNITYSDK_OFFSET(0xB6760C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PageInfo___c_TypeDefinitionIndex = 47393;

	class PageInfo___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x28640);
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
