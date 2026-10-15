#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDGKPPBOOHL;
namespace System { class Object; }

#define KDGKPPBOOHL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7FF7A0)
#define KDGKPPBOOHL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7FF7E0)
#define KDGKPPBOOHL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E7FF7F0)

	class KDGKPPBOOHL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10E30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDGKPPBOOHL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGKPPBOOHL___C_CTOR_OFFSET))(this);
		}

		::KDGKPPBOOHL* __cctor_b__28_0()
		{
			return ((::KDGKPPBOOHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGKPPBOOHL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
