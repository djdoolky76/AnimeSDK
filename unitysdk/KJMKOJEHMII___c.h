#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJMKOJEHMII;
namespace System { class Object; }

#define KJMKOJEHMII___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFE2230)
#define KJMKOJEHMII___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FFE2260)
#define KJMKOJEHMII___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1FFE2270)

inline static constexpr unsigned int KJMKOJEHMII___c_TypeDefinitionIndex = 35865;

	class KJMKOJEHMII___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x164E0);
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
