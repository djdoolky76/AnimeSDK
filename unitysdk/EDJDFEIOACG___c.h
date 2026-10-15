#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDJDFEIOACG;
namespace System { class Object; }

#define EDJDFEIOACG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E233550)
#define EDJDFEIOACG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E233590)
#define EDJDFEIOACG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2335A0)

inline static constexpr unsigned int EDJDFEIOACG___c_TypeDefinitionIndex = 25939;

	class EDJDFEIOACG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDJDFEIOACG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJDFEIOACG___C_CTOR_OFFSET))(this);
		}

		::EDJDFEIOACG* __cctor_b__23_0()
		{
			return ((::EDJDFEIOACG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJDFEIOACG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
