#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDJCAKMNDMI;
namespace System { class Object; }

#define KDJCAKMNDMI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7D52B0)
#define KDJCAKMNDMI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D52F0)
#define KDJCAKMNDMI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E7D5300)

inline static constexpr unsigned int KDJCAKMNDMI___c_TypeDefinitionIndex = 31423;

	class KDJCAKMNDMI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x108D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDJCAKMNDMI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJCAKMNDMI___C_CTOR_OFFSET))(this);
		}

		::KDJCAKMNDMI* __cctor_b__23_0()
		{
			return ((::KDJCAKMNDMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJCAKMNDMI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
