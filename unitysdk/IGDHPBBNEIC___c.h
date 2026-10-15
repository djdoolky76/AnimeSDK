#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGDHPBBNEIC;
namespace System { class Object; }

#define IGDHPBBNEIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E64A980)
#define IGDHPBBNEIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E64A9B0)
#define IGDHPBBNEIC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E64A9C0)

inline static constexpr unsigned int IGDHPBBNEIC___c_TypeDefinitionIndex = 33705;

	class IGDHPBBNEIC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4ADC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGDHPBBNEIC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDHPBBNEIC___C_CTOR_OFFSET))(this);
		}

		::IGDHPBBNEIC* __cctor_b__23_0()
		{
			return ((::IGDHPBBNEIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDHPBBNEIC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
