#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELJOHIOHPMJ;
namespace System { class Object; }

#define ELJOHIOHPMJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2D4D90)
#define ELJOHIOHPMJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D4DD0)
#define ELJOHIOHPMJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2D4DE0)

inline static constexpr unsigned int ELJOHIOHPMJ___c_TypeDefinitionIndex = 29191;

	class ELJOHIOHPMJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELJOHIOHPMJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJOHIOHPMJ___C_CTOR_OFFSET))(this);
		}

		::ELJOHIOHPMJ* __cctor_b__23_0()
		{
			return ((::ELJOHIOHPMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJOHIOHPMJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
