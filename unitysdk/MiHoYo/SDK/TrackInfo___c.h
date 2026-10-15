#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class TrackInfo; }
namespace System { class Object; }

#define MIHOYO_SDK_TRACKINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB055E60)
#define MIHOYO_SDK_TRACKINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB055EA0)
#define MIHOYO_SDK_TRACKINFO___C___CCTOR_B__34_0_OFFSET UNITYSDK_OFFSET(0xB055EB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int TrackInfo___c_TypeDefinitionIndex = 46363;

	class TrackInfo___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x33BE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO___C_CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::TrackInfo* __cctor_b__34_0()
		{
			return ((::MiHoYo::SDK::TrackInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO___C___CCTOR_B__34_0_OFFSET))(this);
		}

	};
}
