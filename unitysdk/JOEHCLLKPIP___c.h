#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOEHCLLKPIP;
namespace System { class Object; }

#define JOEHCLLKPIP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20007FD0)
#define JOEHCLLKPIP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20008010)
#define JOEHCLLKPIP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20008020)

inline static constexpr unsigned int JOEHCLLKPIP___c_TypeDefinitionIndex = 30579;

	class JOEHCLLKPIP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x67B20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOEHCLLKPIP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOEHCLLKPIP___C_CTOR_OFFSET))(this);
		}

		::JOEHCLLKPIP* __cctor_b__23_0()
		{
			return ((::JOEHCLLKPIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOEHCLLKPIP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
