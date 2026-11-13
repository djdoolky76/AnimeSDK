#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEJFHHFLMOC;
namespace System { class Object; }

#define PEJFHHFLMOC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2066E960)
#define PEJFHHFLMOC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2066E990)
#define PEJFHHFLMOC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x2066E9A0)

inline static constexpr unsigned int PEJFHHFLMOC___c_TypeDefinitionIndex = 32318;

	class PEJFHHFLMOC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33DA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEJFHHFLMOC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJFHHFLMOC___C_CTOR_OFFSET))(this);
		}

		::PEJFHHFLMOC* __cctor_b__33_0()
		{
			return ((::PEJFHHFLMOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJFHHFLMOC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
