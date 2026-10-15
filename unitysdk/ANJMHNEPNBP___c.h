#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANJMHNEPNBP;
namespace System { class Object; }

#define ANJMHNEPNBP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6353B0)
#define ANJMHNEPNBP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6353F0)
#define ANJMHNEPNBP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E635400)

inline static constexpr unsigned int ANJMHNEPNBP___c_TypeDefinitionIndex = 32277;

	class ANJMHNEPNBP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47A80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANJMHNEPNBP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJMHNEPNBP___C_CTOR_OFFSET))(this);
		}

		::ANJMHNEPNBP* __cctor_b__33_0()
		{
			return ((::ANJMHNEPNBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJMHNEPNBP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
