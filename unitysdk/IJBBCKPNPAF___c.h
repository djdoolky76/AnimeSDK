#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJBBCKPNPAF;
namespace System { class Object; }

#define IJBBCKPNPAF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6905C0)
#define IJBBCKPNPAF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E690600)
#define IJBBCKPNPAF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E690610)

inline static constexpr unsigned int IJBBCKPNPAF___c_TypeDefinitionIndex = 28071;

	class IJBBCKPNPAF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51CF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJBBCKPNPAF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJBBCKPNPAF___C_CTOR_OFFSET))(this);
		}

		::IJBBCKPNPAF* __cctor_b__23_0()
		{
			return ((::IJBBCKPNPAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJBBCKPNPAF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
