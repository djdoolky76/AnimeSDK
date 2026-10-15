#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHFEIOEICNP;
namespace System { class Object; }

#define GHFEIOEICNP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4876E0)
#define GHFEIOEICNP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E487720)
#define GHFEIOEICNP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E487730)

	class GHFEIOEICNP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16DD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHFEIOEICNP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFEIOEICNP___C_CTOR_OFFSET))(this);
		}

		::GHFEIOEICNP* __cctor_b__23_0()
		{
			return ((::GHFEIOEICNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFEIOEICNP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
