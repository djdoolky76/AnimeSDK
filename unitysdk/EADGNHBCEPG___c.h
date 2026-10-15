#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EADGNHBCEPG;
namespace System { class Object; }

#define EADGNHBCEPG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E223C10)
#define EADGNHBCEPG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E223C40)
#define EADGNHBCEPG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E223C50)

	class EADGNHBCEPG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EADGNHBCEPG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EADGNHBCEPG___C_CTOR_OFFSET))(this);
		}

		::EADGNHBCEPG* __cctor_b__28_0()
		{
			return ((::EADGNHBCEPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EADGNHBCEPG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
