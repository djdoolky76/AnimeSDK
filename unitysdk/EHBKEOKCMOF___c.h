#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define EHBKEOKCMOF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x18BC6F30)
#define EHBKEOKCMOF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x18BC6F70)
#define EHBKEOKCMOF___C___ONLANGUAGECHANGED_B__23_0_OFFSET UNITYSDK_OFFSET(0x18BC6F80)
#define EHBKEOKCMOF___C___ONLOGINFAILED_B__25_0_OFFSET UNITYSDK_OFFSET(0x18BC7030)

inline static constexpr unsigned int EHBKEOKCMOF___c_TypeDefinitionIndex = 62496;

	class EHBKEOKCMOF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12870);
		}

		static ::System::Action_1<::System::Boolean>** StaticGet___9__25_0()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12878);
		}

		static ::System::Action_1<::System::Boolean>** StaticGet___9__23_0()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12880);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHBKEOKCMOF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHBKEOKCMOF___C_CTOR_OFFSET))(this);
		}

		::System::Void __OnLanguageChanged_b__23_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EHBKEOKCMOF___C___ONLANGUAGECHANGED_B__23_0_OFFSET))(this, a1);
		}

		::System::Void __OnLoginFailed_b__25_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EHBKEOKCMOF___C___ONLOGINFAILED_B__25_0_OFFSET))(this, a1);
		}

	};
