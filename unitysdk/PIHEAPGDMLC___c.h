#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIHEAPGDMLC;
namespace System { class Object; }

#define PIHEAPGDMLC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF19090)
#define PIHEAPGDMLC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF190D0)
#define PIHEAPGDMLC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF190E0)

inline static constexpr unsigned int PIHEAPGDMLC___c_TypeDefinitionIndex = 28166;

	class PIHEAPGDMLC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34B90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIHEAPGDMLC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHEAPGDMLC___C_CTOR_OFFSET))(this);
		}

		::PIHEAPGDMLC* __cctor_b__28_0()
		{
			return ((::PIHEAPGDMLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHEAPGDMLC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
