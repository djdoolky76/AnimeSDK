#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGMCLFHAJNJ;
namespace System { class Object; }

#define KGMCLFHAJNJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB54370)
#define KGMCLFHAJNJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB543B0)
#define KGMCLFHAJNJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FB543C0)

inline static constexpr unsigned int KGMCLFHAJNJ___c_TypeDefinitionIndex = 29869;

	class KGMCLFHAJNJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF8E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGMCLFHAJNJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMCLFHAJNJ___C_CTOR_OFFSET))(this);
		}

		::KGMCLFHAJNJ* __cctor_b__23_0()
		{
			return ((::KGMCLFHAJNJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMCLFHAJNJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
