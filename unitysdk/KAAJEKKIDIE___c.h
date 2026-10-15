#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAAJEKKIDIE;
namespace System { class Object; }

#define KAAJEKKIDIE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7AF680)
#define KAAJEKKIDIE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7AF6C0)
#define KAAJEKKIDIE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E7AF6D0)

inline static constexpr unsigned int KAAJEKKIDIE___c_TypeDefinitionIndex = 31695;

	class KAAJEKKIDIE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xB7C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAAJEKKIDIE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAAJEKKIDIE___C_CTOR_OFFSET))(this);
		}

		::KAAJEKKIDIE* __cctor_b__23_0()
		{
			return ((::KAAJEKKIDIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAAJEKKIDIE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
