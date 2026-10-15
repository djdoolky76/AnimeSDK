#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OJKDPIDOBEO;
namespace System { class Object; }

#define OJKDPIDOBEO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE88640)
#define OJKDPIDOBEO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE88680)
#define OJKDPIDOBEO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE88690)

	class OJKDPIDOBEO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1FB70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJKDPIDOBEO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJKDPIDOBEO___C_CTOR_OFFSET))(this);
		}

		::OJKDPIDOBEO* __cctor_b__23_0()
		{
			return ((::OJKDPIDOBEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJKDPIDOBEO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
