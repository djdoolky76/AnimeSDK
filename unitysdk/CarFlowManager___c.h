#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class Car;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CARFLOWMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x19919800)
#define CARFLOWMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x19919840)
#define CARFLOWMANAGER___C__GETRANDOMCARPREFAB_B__28_0_OFFSET UNITYSDK_OFFSET(0x19919850)

inline static constexpr unsigned int CarFlowManager___c_TypeDefinitionIndex = 48101;

	class CarFlowManager___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Car*, ::System::Single>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::Car*, ::System::Single>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49390);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49398);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CARFLOWMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::Single _GetRandomCarPrefab_b__28_0(::Car* a1)
		{
			return ((::System::Single(*)(::PVOID, ::Car*))((::PBYTE)hIl2Cpp + CARFLOWMANAGER___C__GETRANDOMCARPREFAB_B__28_0_OFFSET))(this, a1);
		}

	};
