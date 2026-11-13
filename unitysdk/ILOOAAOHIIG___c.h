#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define ILOOAAOHIIG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A5C7A70)
#define ILOOAAOHIIG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5C7AB0)
#define ILOOAAOHIIG___C__GET_CANINTERACT_B__54_0_OFFSET UNITYSDK_OFFSET(0x1A5C7AC0)

inline static constexpr unsigned int ILOOAAOHIIG___c_TypeDefinitionIndex = 82251;

	class ILOOAAOHIIG___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Il2CppArray<::System::Boolean>*, ::System::Boolean>** StaticGet___9__54_0()
		{
			return (::System::Func_2<::Il2CppArray<::System::Boolean>*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53470);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53478);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILOOAAOHIIG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILOOAAOHIIG___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_CanInteract_b__54_0(::Il2CppArray<::System::Boolean>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + ILOOAAOHIIG___C__GET_CANINTERACT_B__54_0_OFFSET))(this, a1);
		}

	};
