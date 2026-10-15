#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFDNHCKGNNB;
namespace System { class Object; }

#define AFDNHCKGNNB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E116250)
#define AFDNHCKGNNB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E116290)
#define AFDNHCKGNNB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1162A0)

	class AFDNHCKGNNB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2E450);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFDNHCKGNNB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFDNHCKGNNB___C_CTOR_OFFSET))(this);
		}

		::AFDNHCKGNNB* __cctor_b__28_0()
		{
			return ((::AFDNHCKGNNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFDNHCKGNNB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
