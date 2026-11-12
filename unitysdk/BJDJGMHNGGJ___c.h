#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJDJGMHNGGJ;
namespace System { class Object; }

#define BJDJGMHNGGJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F165220)
#define BJDJGMHNGGJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F165250)
#define BJDJGMHNGGJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F165260)

inline static constexpr unsigned int BJDJGMHNGGJ___c_TypeDefinitionIndex = 26444;

	class BJDJGMHNGGJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B1D0);
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
