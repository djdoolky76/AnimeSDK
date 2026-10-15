#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OENDLKLJHPF;
namespace System { class Object; }

#define OENDLKLJHPF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE04330)
#define OENDLKLJHPF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE04370)
#define OENDLKLJHPF___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DE04380)

inline static constexpr unsigned int OENDLKLJHPF___c_TypeDefinitionIndex = 34344;

	class OENDLKLJHPF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14AB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OENDLKLJHPF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OENDLKLJHPF___C_CTOR_OFFSET))(this);
		}

		::OENDLKLJHPF* __cctor_b__38_0()
		{
			return ((::OENDLKLJHPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OENDLKLJHPF___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
