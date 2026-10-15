#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPCNFDBKAEE;
namespace System { class Object; }

#define EPCNFDBKAEE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2DA070)
#define EPCNFDBKAEE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2DA0B0)
#define EPCNFDBKAEE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2DA0C0)

inline static constexpr unsigned int EPCNFDBKAEE___c_TypeDefinitionIndex = 25229;

	class EPCNFDBKAEE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48160);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPCNFDBKAEE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCNFDBKAEE___C_CTOR_OFFSET))(this);
		}

		::EPCNFDBKAEE* __cctor_b__23_0()
		{
			return ((::EPCNFDBKAEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCNFDBKAEE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
