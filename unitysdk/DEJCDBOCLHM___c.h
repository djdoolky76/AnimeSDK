#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEJCDBOCLHM;
namespace System { class Object; }

#define DEJCDBOCLHM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1689C0)
#define DEJCDBOCLHM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E168A00)
#define DEJCDBOCLHM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E168A10)

inline static constexpr unsigned int DEJCDBOCLHM___c_TypeDefinitionIndex = 28049;

	class DEJCDBOCLHM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C700);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEJCDBOCLHM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJCDBOCLHM___C_CTOR_OFFSET))(this);
		}

		::DEJCDBOCLHM* __cctor_b__23_0()
		{
			return ((::DEJCDBOCLHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJCDBOCLHM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
