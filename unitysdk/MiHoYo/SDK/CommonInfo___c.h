#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class CommonInfo; }
namespace System { class Object; }

#define MIHOYO_SDK_COMMONINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xAF67610)
#define MIHOYO_SDK_COMMONINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xAF67650)
#define MIHOYO_SDK_COMMONINFO___C___CCTOR_B__59_0_OFFSET UNITYSDK_OFFSET(0xAF67660)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int CommonInfo___c_TypeDefinitionIndex = 46367;

	class CommonInfo___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x1EE60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO___C_CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::CommonInfo* __cctor_b__59_0()
		{
			return ((::MiHoYo::SDK::CommonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO___C___CCTOR_B__59_0_OFFSET))(this);
		}

	};
}
