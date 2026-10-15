#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNHBHPDJACF;
namespace System { class Object; }

#define FNHBHPDJACF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3F05D0)
#define FNHBHPDJACF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F0610)
#define FNHBHPDJACF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3F0620)

inline static constexpr unsigned int FNHBHPDJACF___c_TypeDefinitionIndex = 28468;

	class FNHBHPDJACF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65450);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNHBHPDJACF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHBHPDJACF___C_CTOR_OFFSET))(this);
		}

		::FNHBHPDJACF* __cctor_b__28_0()
		{
			return ((::FNHBHPDJACF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHBHPDJACF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
