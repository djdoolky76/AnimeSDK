#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILBJGGEHAEK;
namespace System { class Object; }

#define ILBJGGEHAEK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9ADBB0)
#define ILBJGGEHAEK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9ADBF0)
#define ILBJGGEHAEK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F9ADC00)

inline static constexpr unsigned int ILBJGGEHAEK___c_TypeDefinitionIndex = 32572;

	class ILBJGGEHAEK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52A80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILBJGGEHAEK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILBJGGEHAEK___C_CTOR_OFFSET))(this);
		}

		::ILBJGGEHAEK* __cctor_b__23_0()
		{
			return ((::ILBJGGEHAEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILBJGGEHAEK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
