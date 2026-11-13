#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILHFAFGOJAC;
namespace System { class Object; }

#define ILHFAFGOJAC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206B4EB0)
#define ILHFAFGOJAC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x206B4EE0)
#define ILHFAFGOJAC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x206B4EF0)

inline static constexpr unsigned int ILHFAFGOJAC___c_TypeDefinitionIndex = 35242;

	class ILHFAFGOJAC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4CA40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILHFAFGOJAC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHFAFGOJAC___C_CTOR_OFFSET))(this);
		}

		::ILHFAFGOJAC* __cctor_b__33_0()
		{
			return ((::ILHFAFGOJAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHFAFGOJAC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
