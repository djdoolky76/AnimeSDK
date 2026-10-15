#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCEJNBLDAFE;
namespace System { class Object; }

#define KCEJNBLDAFE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7C8460)
#define KCEJNBLDAFE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C84A0)
#define KCEJNBLDAFE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E7C84B0)

inline static constexpr unsigned int KCEJNBLDAFE___c_TypeDefinitionIndex = 27097;

	class KCEJNBLDAFE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF2B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCEJNBLDAFE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEJNBLDAFE___C_CTOR_OFFSET))(this);
		}

		::KCEJNBLDAFE* __cctor_b__23_0()
		{
			return ((::KCEJNBLDAFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEJNBLDAFE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
