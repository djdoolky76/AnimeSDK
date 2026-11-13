#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LNDMHNMPGNP;
namespace System { class Object; }

#define LNDMHNMPGNP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x200C8B60)
#define LNDMHNMPGNP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x200C8B90)
#define LNDMHNMPGNP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x200C8BA0)

inline static constexpr unsigned int LNDMHNMPGNP___c_TypeDefinitionIndex = 31656;

	class LNDMHNMPGNP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44BF0);
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
