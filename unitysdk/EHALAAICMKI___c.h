#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EHALAAICMKI;
namespace System { class Object; }

#define EHALAAICMKI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF85160)
#define EHALAAICMKI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF851A0)
#define EHALAAICMKI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FF851B0)

inline static constexpr unsigned int EHALAAICMKI___c_TypeDefinitionIndex = 30036;

	class EHALAAICMKI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3BF10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHALAAICMKI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHALAAICMKI___C_CTOR_OFFSET))(this);
		}

		::EHALAAICMKI* __cctor_b__23_0()
		{
			return ((::EHALAAICMKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHALAAICMKI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
