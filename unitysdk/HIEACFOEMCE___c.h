#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIEACFOEMCE;
namespace System { class Object; }

#define HIEACFOEMCE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2051B580)
#define HIEACFOEMCE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2051B5C0)
#define HIEACFOEMCE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x2051B5D0)

inline static constexpr unsigned int HIEACFOEMCE___c_TypeDefinitionIndex = 32622;

	class HIEACFOEMCE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2F300);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIEACFOEMCE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEACFOEMCE___C_CTOR_OFFSET))(this);
		}

		::HIEACFOEMCE* __cctor_b__23_0()
		{
			return ((::HIEACFOEMCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEACFOEMCE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
