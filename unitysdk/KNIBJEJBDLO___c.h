#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNIBJEJBDLO;
namespace System { class Object; }

#define KNIBJEJBDLO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBE0380)
#define KNIBJEJBDLO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBE03C0)
#define KNIBJEJBDLO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FBE03D0)

inline static constexpr unsigned int KNIBJEJBDLO___c_TypeDefinitionIndex = 28181;

	class KNIBJEJBDLO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1CF50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNIBJEJBDLO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNIBJEJBDLO___C_CTOR_OFFSET))(this);
		}

		::KNIBJEJBDLO* __cctor_b__28_0()
		{
			return ((::KNIBJEJBDLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNIBJEJBDLO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
