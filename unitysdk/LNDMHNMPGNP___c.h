#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LNDMHNMPGNP;
namespace System { class Object; }

#define LNDMHNMPGNP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E985400)
#define LNDMHNMPGNP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E985430)
#define LNDMHNMPGNP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E985440)

inline static constexpr unsigned int LNDMHNMPGNP___c_TypeDefinitionIndex = 30750;

	class LNDMHNMPGNP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3FC10);
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
