#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJFEHJMAIAA;
namespace System { class Object; }

#define KJFEHJMAIAA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFDC410)
#define KJFEHJMAIAA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FFDC450)
#define KJFEHJMAIAA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FFDC460)

inline static constexpr unsigned int KJFEHJMAIAA___c_TypeDefinitionIndex = 26037;

	class KJFEHJMAIAA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15E90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJFEHJMAIAA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFEHJMAIAA___C_CTOR_OFFSET))(this);
		}

		::KJFEHJMAIAA* __cctor_b__28_0()
		{
			return ((::KJFEHJMAIAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFEHJMAIAA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
