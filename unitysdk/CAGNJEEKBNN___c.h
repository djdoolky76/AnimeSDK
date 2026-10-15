#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAGNJEEKBNN;
namespace System { class Object; }

#define CAGNJEEKBNN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E02D7A0)
#define CAGNJEEKBNN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E02D7E0)
#define CAGNJEEKBNN___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E02D7F0)

inline static constexpr unsigned int CAGNJEEKBNN___c_TypeDefinitionIndex = 32709;

	class CAGNJEEKBNN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAGNJEEKBNN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGNJEEKBNN___C_CTOR_OFFSET))(this);
		}

		::CAGNJEEKBNN* __cctor_b__18_0()
		{
			return ((::CAGNJEEKBNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGNJEEKBNN___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
