#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHNBFDNKLHE;
namespace System { class Object; }

#define KHNBFDNKLHE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E84C280)
#define KHNBFDNKLHE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E84C2B0)
#define KHNBFDNKLHE___C___CCTOR_B__133_0_OFFSET UNITYSDK_OFFSET(0x1E84C2C0)

inline static constexpr unsigned int KHNBFDNKLHE___c_TypeDefinitionIndex = 33955;

	class KHNBFDNKLHE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17D30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHNBFDNKLHE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNBFDNKLHE___C_CTOR_OFFSET))(this);
		}

		::KHNBFDNKLHE* __cctor_b__133_0()
		{
			return ((::KHNBFDNKLHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNBFDNKLHE___C___CCTOR_B__133_0_OFFSET))(this);
		}

	};
