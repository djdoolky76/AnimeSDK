#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEFBPMPIKNB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define AEFBPMPIKNB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB14DDB0)
#define AEFBPMPIKNB___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB14DDE0)
#define AEFBPMPIKNB___C___LISTENLEVELVAR_B__9_0_OFFSET UNITYSDK_OFFSET(0xB14DDF0)

inline static constexpr unsigned int AEFBPMPIKNB___c_TypeDefinitionIndex = 77074;

	class AEFBPMPIKNB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47660);
		}

		static ::System::Action_3<::AEFBPMPIKNB*, ::System::Int32, ::System::String*>** StaticGet___9__9_0()
		{
			return (::System::Action_3<::AEFBPMPIKNB*, ::System::Int32, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47668);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEFBPMPIKNB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFBPMPIKNB___C_CTOR_OFFSET))(this);
		}

		::System::Void __ListenLevelVar_b__9_0(::AEFBPMPIKNB* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::AEFBPMPIKNB*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + AEFBPMPIKNB___C___LISTENLEVELVAR_B__9_0_OFFSET))(this, a1, a2, a3);
		}

	};
