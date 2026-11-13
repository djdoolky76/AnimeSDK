#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNKFLMOILNP;

#define KNKFLMOILNP_CTOR_OFFSET UNITYSDK_OFFSET(0x18FA9BF0)
#define KNKFLMOILNP_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x18FA9C00)
#define KNKFLMOILNP_NHNKBKHNDKA_OFFSET UNITYSDK_OFFSET(0x18FA9C70)

inline static constexpr unsigned int KNKFLMOILNP_TypeDefinitionIndex = 52879;

	class KNKFLMOILNP : public ::System::Object
	{
	public:
		static ::KNKFLMOILNP** StaticGet_EMLNOINPICJ()
		{
			return (::KNKFLMOILNP**)UnitySDK::FromName("", "KNKFLMOILNP")->GetStaticField(0x69720);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKFLMOILNP_CTOR_OFFSET))(this);
		}

		static ::KNKFLMOILNP* GGBLHEHJBDO()
		{
			return ((::KNKFLMOILNP*(*)())((::PBYTE)hIl2Cpp + KNKFLMOILNP_GGBLHEHJBDO_OFFSET))();
		}

		::System::Int32 NHNKBKHNDKA(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KNKFLMOILNP_NHNKBKHNDKA_OFFSET))(this, a1);
		}

	};
