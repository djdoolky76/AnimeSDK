#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHEBFHDKAIO;
namespace System { class Object; }

#define LHEBFHDKAIO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x201BA370)
#define LHEBFHDKAIO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x201BA3B0)
#define LHEBFHDKAIO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x201BA3C0)

inline static constexpr unsigned int LHEBFHDKAIO___c_TypeDefinitionIndex = 29149;

	class LHEBFHDKAIO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38260);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHEBFHDKAIO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHEBFHDKAIO___C_CTOR_OFFSET))(this);
		}

		::LHEBFHDKAIO* __cctor_b__23_0()
		{
			return ((::LHEBFHDKAIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHEBFHDKAIO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
