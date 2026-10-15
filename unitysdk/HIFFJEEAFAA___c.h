#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIFFJEEAFAA;
namespace System { class Object; }

#define HIFFJEEAFAA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5672F0)
#define HIFFJEEAFAA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E567330)
#define HIFFJEEAFAA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E567340)

inline static constexpr unsigned int HIFFJEEAFAA___c_TypeDefinitionIndex = 27642;

	class HIFFJEEAFAA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33B20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIFFJEEAFAA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFFJEEAFAA___C_CTOR_OFFSET))(this);
		}

		::HIFFJEEAFAA* __cctor_b__28_0()
		{
			return ((::HIFFJEEAFAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFFJEEAFAA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
