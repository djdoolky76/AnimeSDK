#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDEOLCNPBPP;
namespace System { class Object; }

#define BDEOLCNPBPP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA89690)
#define BDEOLCNPBPP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA896D0)
#define BDEOLCNPBPP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FA896E0)

inline static constexpr unsigned int BDEOLCNPBPP___c_TypeDefinitionIndex = 32405;

	class BDEOLCNPBPP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45B90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDEOLCNPBPP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDEOLCNPBPP___C_CTOR_OFFSET))(this);
		}

		::BDEOLCNPBPP* __cctor_b__28_0()
		{
			return ((::BDEOLCNPBPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDEOLCNPBPP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
