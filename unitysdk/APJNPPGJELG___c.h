#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APJNPPGJELG;
namespace System { class Object; }

#define APJNPPGJELG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E64ADC0)
#define APJNPPGJELG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E64AE00)
#define APJNPPGJELG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E64AE10)

inline static constexpr unsigned int APJNPPGJELG___c_TypeDefinitionIndex = 34532;

	class APJNPPGJELG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A9E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APJNPPGJELG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APJNPPGJELG___C_CTOR_OFFSET))(this);
		}

		::APJNPPGJELG* __cctor_b__23_0()
		{
			return ((::APJNPPGJELG*(*)(::PVOID))((::PBYTE)hIl2Cpp + APJNPPGJELG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
