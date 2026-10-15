#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJILGJGLKIO;
namespace System { class Object; }

#define EJILGJGLKIO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B8E90)
#define EJILGJGLKIO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B8ED0)
#define EJILGJGLKIO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2B8EE0)

	class EJILGJGLKIO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4BAE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJILGJGLKIO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJILGJGLKIO___C_CTOR_OFFSET))(this);
		}

		::EJILGJGLKIO* __cctor_b__23_0()
		{
			return ((::EJILGJGLKIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJILGJGLKIO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
