#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECMNFOEDOJC;
namespace System { class Object; }

#define ECMNFOEDOJC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2288B0)
#define ECMNFOEDOJC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2288E0)
#define ECMNFOEDOJC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2288F0)

inline static constexpr unsigned int ECMNFOEDOJC___c_TypeDefinitionIndex = 33803;

	class ECMNFOEDOJC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42C10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECMNFOEDOJC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECMNFOEDOJC___C_CTOR_OFFSET))(this);
		}

		::ECMNFOEDOJC* __cctor_b__23_0()
		{
			return ((::ECMNFOEDOJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECMNFOEDOJC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
