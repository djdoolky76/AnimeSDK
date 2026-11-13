#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JHGJHIOLBBE;
namespace System { class Object; }

#define JHGJHIOLBBE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x204AEB80)
#define JHGJHIOLBBE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x204AEBB0)
#define JHGJHIOLBBE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x204AEBC0)

inline static constexpr unsigned int JHGJHIOLBBE___c_TypeDefinitionIndex = 31442;

	class JHGJHIOLBBE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60750);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHGJHIOLBBE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHGJHIOLBBE___C_CTOR_OFFSET))(this);
		}

		::JHGJHIOLBBE* __cctor_b__23_0()
		{
			return ((::JHGJHIOLBBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHGJHIOLBBE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
