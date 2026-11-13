#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDIIMNDEADO;
namespace System { class Object; }

#define BDIIMNDEADO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA8B7D0)
#define BDIIMNDEADO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA8B810)
#define BDIIMNDEADO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FA8B820)

inline static constexpr unsigned int BDIIMNDEADO___c_TypeDefinitionIndex = 26001;

	class BDIIMNDEADO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45CA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDIIMNDEADO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDIIMNDEADO___C_CTOR_OFFSET))(this);
		}

		::BDIIMNDEADO* __cctor_b__23_0()
		{
			return ((::BDIIMNDEADO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDIIMNDEADO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
