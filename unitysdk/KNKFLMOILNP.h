#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNKFLMOILNP;

#define KNKFLMOILNP_CTOR_OFFSET UNITYSDK_OFFSET(0xB587A00)
#define KNKFLMOILNP_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0xB587A10)
#define KNKFLMOILNP_NHNKBKHNDKA_OFFSET UNITYSDK_OFFSET(0xB587A80)

	class KNKFLMOILNP : public ::System::Object
	{
	public:
		static ::KNKFLMOILNP** StaticGet_EMLNOINPICJ()
		{
			return (::KNKFLMOILNP**)UnitySDK::FromName("", "KNKFLMOILNP")->GetStaticField(0x64130);
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
