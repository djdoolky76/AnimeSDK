#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIHMNMMJIDL;
namespace System { class Object; }

#define KIHMNMMJIDL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E82D6F0)
#define KIHMNMMJIDL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E82D730)
#define KIHMNMMJIDL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E82D740)

inline static constexpr unsigned int KIHMNMMJIDL___c_TypeDefinitionIndex = 32897;

	class KIHMNMMJIDL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x184E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIHMNMMJIDL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHMNMMJIDL___C_CTOR_OFFSET))(this);
		}

		::KIHMNMMJIDL* __cctor_b__23_0()
		{
			return ((::KIHMNMMJIDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHMNMMJIDL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
