#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MENCBJMOEML;
namespace System { class Object; }

#define MENCBJMOEML___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9E4480)
#define MENCBJMOEML___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9E44C0)
#define MENCBJMOEML___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E9E44D0)

inline static constexpr unsigned int MENCBJMOEML___c_TypeDefinitionIndex = 26662;

	class MENCBJMOEML___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E0C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MENCBJMOEML___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MENCBJMOEML___C_CTOR_OFFSET))(this);
		}

		::MENCBJMOEML* __cctor_b__23_0()
		{
			return ((::MENCBJMOEML*(*)(::PVOID))((::PBYTE)hIl2Cpp + MENCBJMOEML___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
