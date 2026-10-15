#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJDJGMHNGGJ;
namespace System { class Object; }

#define BJDJGMHNGGJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE07FD0)
#define BJDJGMHNGGJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE08000)
#define BJDJGMHNGGJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DE08010)

	class BJDJGMHNGGJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48ED0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJDJGMHNGGJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJDJGMHNGGJ___C_CTOR_OFFSET))(this);
		}

		::BJDJGMHNGGJ* __cctor_b__28_0()
		{
			return ((::BJDJGMHNGGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJDJGMHNGGJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
