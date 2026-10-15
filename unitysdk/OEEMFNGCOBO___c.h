#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OEEMFNGCOBO;
namespace System { class Object; }

#define OEEMFNGCOBO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDFD260)
#define OEEMFNGCOBO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDFD2A0)
#define OEEMFNGCOBO___C___CCTOR_B__37_0_OFFSET UNITYSDK_OFFSET(0x1DDFD2B0)

inline static constexpr unsigned int OEEMFNGCOBO___c_TypeDefinitionIndex = 26225;

	class OEEMFNGCOBO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13760);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEEMFNGCOBO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEEMFNGCOBO___C_CTOR_OFFSET))(this);
		}

		::OEEMFNGCOBO* __cctor_b__37_0()
		{
			return ((::OEEMFNGCOBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEEMFNGCOBO___C___CCTOR_B__37_0_OFFSET))(this);
		}

	};
