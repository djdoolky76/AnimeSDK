#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMHNCGCPBEF;
namespace System { class Object; }

#define KMHNCGCPBEF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDCA590)
#define KMHNCGCPBEF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDCA5D0)
#define KMHNCGCPBEF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FDCA5E0)

inline static constexpr unsigned int KMHNCGCPBEF___c_TypeDefinitionIndex = 26663;

	class KMHNCGCPBEF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1DB90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMHNCGCPBEF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHNCGCPBEF___C_CTOR_OFFSET))(this);
		}

		::KMHNCGCPBEF* __cctor_b__23_0()
		{
			return ((::KMHNCGCPBEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHNCGCPBEF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
