#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIEACFOEMCE;
namespace System { class Object; }

#define HIEACFOEMCE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E591410)
#define HIEACFOEMCE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E591450)
#define HIEACFOEMCE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E591460)

inline static constexpr unsigned int HIEACFOEMCE___c_TypeDefinitionIndex = 31709;

	class HIEACFOEMCE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3BFD0);
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
