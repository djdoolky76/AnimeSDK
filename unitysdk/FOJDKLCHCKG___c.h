#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOJDKLCHCKG;
namespace System { class Object; }

#define FOJDKLCHCKG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3FCFB0)
#define FOJDKLCHCKG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3FCFF0)
#define FOJDKLCHCKG___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E3FD000)

	class FOJDKLCHCKG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOJDKLCHCKG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJDKLCHCKG___C_CTOR_OFFSET))(this);
		}

		::FOJDKLCHCKG* __cctor_b__48_0()
		{
			return ((::FOJDKLCHCKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJDKLCHCKG___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
