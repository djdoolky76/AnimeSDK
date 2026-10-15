#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDMHNMOLHKN;
namespace System { class Object; }

#define IDMHNMOLHKN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6034D0)
#define IDMHNMOLHKN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E603500)
#define IDMHNMOLHKN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E603510)

inline static constexpr unsigned int IDMHNMOLHKN___c_TypeDefinitionIndex = 33408;

	class IDMHNMOLHKN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46FD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDMHNMOLHKN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMHNMOLHKN___C_CTOR_OFFSET))(this);
		}

		::IDMHNMOLHKN* __cctor_b__33_0()
		{
			return ((::IDMHNMOLHKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMHNMOLHKN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
