#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDOOEDOKEPF;
namespace System { class Object; }

#define DDOOEDOKEPF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E18C480)
#define DDOOEDOKEPF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E18C4C0)
#define DDOOEDOKEPF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E18C4D0)

	class DDOOEDOKEPF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2F7D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDOOEDOKEPF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDOOEDOKEPF___C_CTOR_OFFSET))(this);
		}

		::DDOOEDOKEPF* __cctor_b__28_0()
		{
			return ((::DDOOEDOKEPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDOOEDOKEPF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
