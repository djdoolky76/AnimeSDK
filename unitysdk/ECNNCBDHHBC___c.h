#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECNNCBDHHBC;
namespace System { class Object; }

#define ECNNCBDHHBC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F554770)
#define ECNNCBDHHBC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5547B0)
#define ECNNCBDHHBC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F5547C0)

inline static constexpr unsigned int ECNNCBDHHBC___c_TypeDefinitionIndex = 31009;

	class ECNNCBDHHBC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4EBC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECNNCBDHHBC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNNCBDHHBC___C_CTOR_OFFSET))(this);
		}

		::ECNNCBDHHBC* __cctor_b__28_0()
		{
			return ((::ECNNCBDHHBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNNCBDHHBC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
