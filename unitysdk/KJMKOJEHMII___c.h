#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJMKOJEHMII;
namespace System { class Object; }

#define KJMKOJEHMII___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E843530)
#define KJMKOJEHMII___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E843560)
#define KJMKOJEHMII___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E843570)

inline static constexpr unsigned int KJMKOJEHMII___c_TypeDefinitionIndex = 34937;

	class KJMKOJEHMII___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1AC70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJMKOJEHMII___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMKOJEHMII___C_CTOR_OFFSET))(this);
		}

		::KJMKOJEHMII* __cctor_b__43_0()
		{
			return ((::KJMKOJEHMII*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMKOJEHMII___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
