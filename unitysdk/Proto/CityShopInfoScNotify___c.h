#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class CityShopInfoScNotify; }
namespace System { class Object; }

#define PROTO_CITYSHOPINFOSCNOTIFY___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFE9D70)
#define PROTO_CITYSHOPINFOSCNOTIFY___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFE9DB0)
#define PROTO_CITYSHOPINFOSCNOTIFY___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DFE9DC0)

namespace Proto
{
	inline static constexpr unsigned int CityShopInfoScNotify___c_TypeDefinitionIndex = 34188;

	class CityShopInfoScNotify___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x43A10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY___C_CTOR_OFFSET))(this);
		}

		::Proto::CityShopInfoScNotify* __cctor_b__38_0()
		{
			return ((::Proto::CityShopInfoScNotify*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
}
