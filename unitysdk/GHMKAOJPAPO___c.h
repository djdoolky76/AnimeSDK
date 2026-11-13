#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHMKAOJPAPO;
namespace System { class Object; }

#define GHMKAOJPAPO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2027C370)
#define GHMKAOJPAPO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2027C3B0)
#define GHMKAOJPAPO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x2027C3C0)

inline static constexpr unsigned int GHMKAOJPAPO___c_TypeDefinitionIndex = 30597;

	class GHMKAOJPAPO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xFF40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHMKAOJPAPO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMKAOJPAPO___C_CTOR_OFFSET))(this);
		}

		::GHMKAOJPAPO* __cctor_b__23_0()
		{
			return ((::GHMKAOJPAPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMKAOJPAPO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
