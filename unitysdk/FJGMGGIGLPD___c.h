#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJGMGGIGLPD;
namespace System { class Object; }

#define FJGMGGIGLPD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E375880)
#define FJGMGGIGLPD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3758C0)
#define FJGMGGIGLPD___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E3758D0)

inline static constexpr unsigned int FJGMGGIGLPD___c_TypeDefinitionIndex = 31683;

	class FJGMGGIGLPD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59D10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJGMGGIGLPD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGMGGIGLPD___C_CTOR_OFFSET))(this);
		}

		::FJGMGGIGLPD* __cctor_b__18_0()
		{
			return ((::FJGMGGIGLPD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGMGGIGLPD___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
