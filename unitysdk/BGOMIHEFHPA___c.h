#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGOMIHEFHPA;
namespace System { class Object; }

#define BGOMIHEFHPA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDF0980)
#define BGOMIHEFHPA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDF09B0)
#define BGOMIHEFHPA___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1DDF09C0)

	class BGOMIHEFHPA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44560);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGOMIHEFHPA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOMIHEFHPA___C_CTOR_OFFSET))(this);
		}

		::BGOMIHEFHPA* __cctor_b__58_0()
		{
			return ((::BGOMIHEFHPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOMIHEFHPA___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
