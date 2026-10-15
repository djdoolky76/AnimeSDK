#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIGMJINJFJC;
namespace System { class Object; }

#define GIGMJINJFJC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E46A0E0)
#define GIGMJINJFJC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E46A120)
#define GIGMJINJFJC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E46A130)

inline static constexpr unsigned int GIGMJINJFJC___c_TypeDefinitionIndex = 28450;

	class GIGMJINJFJC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIGMJINJFJC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIGMJINJFJC___C_CTOR_OFFSET))(this);
		}

		::GIGMJINJFJC* __cctor_b__28_0()
		{
			return ((::GIGMJINJFJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIGMJINJFJC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
