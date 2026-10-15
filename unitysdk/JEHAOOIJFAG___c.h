#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEHAOOIJFAG;
namespace System { class Object; }

#define JEHAOOIJFAG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E71B270)
#define JEHAOOIJFAG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E71B2A0)
#define JEHAOOIJFAG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E71B2B0)

inline static constexpr unsigned int JEHAOOIJFAG___c_TypeDefinitionIndex = 25446;

	class JEHAOOIJFAG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5ED20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEHAOOIJFAG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHAOOIJFAG___C_CTOR_OFFSET))(this);
		}

		::JEHAOOIJFAG* __cctor_b__28_0()
		{
			return ((::JEHAOOIJFAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHAOOIJFAG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
