#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEGCDIIGMHF;
namespace System { class Object; }

#define AEGCDIIGMHF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDBE7D0)
#define AEGCDIIGMHF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDBE810)
#define AEGCDIIGMHF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DDBE820)

inline static constexpr unsigned int AEGCDIIGMHF___c_TypeDefinitionIndex = 34228;

	class AEGCDIIGMHF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33E80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEGCDIIGMHF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGCDIIGMHF___C_CTOR_OFFSET))(this);
		}

		::AEGCDIIGMHF* __cctor_b__23_0()
		{
			return ((::AEGCDIIGMHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGCDIIGMHF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
