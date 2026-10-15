#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHJBIHJBNHI;
namespace System { class Object; }

#define LHJBIHJBNHI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E963060)
#define LHJBIHJBNHI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9630A0)
#define LHJBIHJBNHI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E9630B0)

inline static constexpr unsigned int LHJBIHJBNHI___c_TypeDefinitionIndex = 28356;

	class LHJBIHJBNHI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x412F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHJBIHJBNHI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJBIHJBNHI___C_CTOR_OFFSET))(this);
		}

		::LHJBIHJBNHI* __cctor_b__23_0()
		{
			return ((::LHJBIHJBNHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJBIHJBNHI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
