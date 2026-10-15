#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGIBNBCMEAG;
namespace System { class Object; }

#define IGIBNBCMEAG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E64D4D0)
#define IGIBNBCMEAG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E64D500)
#define IGIBNBCMEAG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E64D510)

inline static constexpr unsigned int IGIBNBCMEAG___c_TypeDefinitionIndex = 30290;

	class IGIBNBCMEAG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B1E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGIBNBCMEAG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGIBNBCMEAG___C_CTOR_OFFSET))(this);
		}

		::IGIBNBCMEAG* __cctor_b__28_0()
		{
			return ((::IGIBNBCMEAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGIBNBCMEAG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
