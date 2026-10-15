#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LNDMHNMPGNP;
namespace System { class Object; }

#define LNDMHNMPGNP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9B2A50)
#define LNDMHNMPGNP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9B2A80)
#define LNDMHNMPGNP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E9B2A90)

	class LNDMHNMPGNP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4FF20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNDMHNMPGNP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNDMHNMPGNP___C_CTOR_OFFSET))(this);
		}

		::LNDMHNMPGNP* __cctor_b__23_0()
		{
			return ((::LNDMHNMPGNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNDMHNMPGNP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
