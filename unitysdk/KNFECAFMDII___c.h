#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNFECAFMDII;
namespace System { class Object; }

#define KNFECAFMDII___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8A2D30)
#define KNFECAFMDII___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A2D70)
#define KNFECAFMDII___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E8A2D80)

inline static constexpr unsigned int KNFECAFMDII___c_TypeDefinitionIndex = 27525;

	class KNFECAFMDII___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23FD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNFECAFMDII___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFECAFMDII___C_CTOR_OFFSET))(this);
		}

		::KNFECAFMDII* __cctor_b__18_0()
		{
			return ((::KNFECAFMDII*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFECAFMDII___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
