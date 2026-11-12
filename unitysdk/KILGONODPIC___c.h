#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KILGONODPIC;
namespace System { class Object; }

#define KILGONODPIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB7DE40)
#define KILGONODPIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB7DE70)
#define KILGONODPIC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FB7DE80)

inline static constexpr unsigned int KILGONODPIC___c_TypeDefinitionIndex = 34724;

	class KILGONODPIC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13AC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KILGONODPIC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KILGONODPIC___C_CTOR_OFFSET))(this);
		}

		::KILGONODPIC* __cctor_b__23_0()
		{
			return ((::KILGONODPIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KILGONODPIC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
