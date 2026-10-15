#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOFFDNPBHIK;
namespace System { class Object; }

#define GOFFDNPBHIK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4C22C0)
#define GOFFDNPBHIK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4C2300)
#define GOFFDNPBHIK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E4C2310)

inline static constexpr unsigned int GOFFDNPBHIK___c_TypeDefinitionIndex = 25330;

	class GOFFDNPBHIK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x229F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOFFDNPBHIK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFFDNPBHIK___C_CTOR_OFFSET))(this);
		}

		::GOFFDNPBHIK* __cctor_b__28_0()
		{
			return ((::GOFFDNPBHIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFFDNPBHIK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
