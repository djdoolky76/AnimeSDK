#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class AlleyPlacingShip; }
namespace System { class Object; }

#define PROTO_ALLEYPLACINGSHIP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFE6E60)
#define PROTO_ALLEYPLACINGSHIP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFE6EA0)
#define PROTO_ALLEYPLACINGSHIP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DFE6EB0)

namespace Proto
{
	inline static constexpr unsigned int AlleyPlacingShip___c_TypeDefinitionIndex = 26215;

	class AlleyPlacingShip___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x43950);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP___C_CTOR_OFFSET))(this);
		}

		::Proto::AlleyPlacingShip* __cctor_b__28_0()
		{
			return ((::Proto::AlleyPlacingShip*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ALLEYPLACINGSHIP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
}
