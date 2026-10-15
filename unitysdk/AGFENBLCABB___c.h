#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGFENBLCABB;
namespace System { class Object; }

#define AGFENBLCABB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E12BAB0)
#define AGFENBLCABB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E12BAF0)
#define AGFENBLCABB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E12BB00)

inline static constexpr unsigned int AGFENBLCABB___c_TypeDefinitionIndex = 31393;

	class AGFENBLCABB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x307C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGFENBLCABB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFENBLCABB___C_CTOR_OFFSET))(this);
		}

		::AGFENBLCABB* __cctor_b__23_0()
		{
			return ((::AGFENBLCABB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFENBLCABB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
