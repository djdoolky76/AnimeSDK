#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOFKNBAKKDI;
namespace System { class Object; }

#define MOFKNBAKKDI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAA8870)
#define MOFKNBAKKDI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAA88B0)
#define MOFKNBAKKDI___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1EAA88C0)

inline static constexpr unsigned int MOFKNBAKKDI___c_TypeDefinitionIndex = 31883;

	class MOFKNBAKKDI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOFKNBAKKDI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOFKNBAKKDI___C_CTOR_OFFSET))(this);
		}

		::MOFKNBAKKDI* __cctor_b__53_0()
		{
			return ((::MOFKNBAKKDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOFKNBAKKDI___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
