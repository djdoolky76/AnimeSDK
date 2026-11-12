#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPGLJBFPDEG_CALIKBMPKEI;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define KPGLJBFPDEG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBE11010)
#define KPGLJBFPDEG___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBE11040)
#define KPGLJBFPDEG___C__HASCUSTOMTOPPANEL_B__0_0_OFFSET UNITYSDK_OFFSET(0xBE11050)

inline static constexpr unsigned int KPGLJBFPDEG___c_TypeDefinitionIndex = 74076;

	class KPGLJBFPDEG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F260);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F268);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPGLJBFPDEG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGLJBFPDEG___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _HasCustomTopPanel_b__0_0(::KPGLJBFPDEG_CALIKBMPKEI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KPGLJBFPDEG_CALIKBMPKEI*))((::PBYTE)hIl2Cpp + KPGLJBFPDEG___C__HASCUSTOMTOPPANEL_B__0_0_OFFSET))(this, a1);
		}

	};
