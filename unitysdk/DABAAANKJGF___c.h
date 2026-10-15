#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DABAAANKJGF;
namespace System { class Object; }

#define DABAAANKJGF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1499A0)
#define DABAAANKJGF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1499E0)
#define DABAAANKJGF___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E1499F0)

	class DABAAANKJGF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23520);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DABAAANKJGF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DABAAANKJGF___C_CTOR_OFFSET))(this);
		}

		::DABAAANKJGF* __cctor_b__48_0()
		{
			return ((::DABAAANKJGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DABAAANKJGF___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
