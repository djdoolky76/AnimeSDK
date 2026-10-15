#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMHNCGCPBEF;
namespace System { class Object; }

#define KMHNCGCPBEF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E86E050)
#define KMHNCGCPBEF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E86E090)
#define KMHNCGCPBEF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E86E0A0)

inline static constexpr unsigned int KMHNCGCPBEF___c_TypeDefinitionIndex = 26136;

	class KMHNCGCPBEF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F0C0);
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
