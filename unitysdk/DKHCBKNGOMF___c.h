#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKHCBKNGOMF;
namespace System { class Object; }

#define DKHCBKNGOMF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1D75B0)
#define DKHCBKNGOMF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D75F0)
#define DKHCBKNGOMF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E1D7600)

	class DKHCBKNGOMF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3AD10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKHCBKNGOMF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHCBKNGOMF___C_CTOR_OFFSET))(this);
		}

		::DKHCBKNGOMF* __cctor_b__23_0()
		{
			return ((::DKHCBKNGOMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHCBKNGOMF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
