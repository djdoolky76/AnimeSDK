#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOLCKKMNHAE;
namespace System { class Object; }

#define MOLCKKMNHAE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA81500)
#define MOLCKKMNHAE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA81540)
#define MOLCKKMNHAE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA81550)

inline static constexpr unsigned int MOLCKKMNHAE___c_TypeDefinitionIndex = 32695;

	class MOLCKKMNHAE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5AEB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLCKKMNHAE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLCKKMNHAE___C_CTOR_OFFSET))(this);
		}

		::MOLCKKMNHAE* __cctor_b__23_0()
		{
			return ((::MOLCKKMNHAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLCKKMNHAE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
