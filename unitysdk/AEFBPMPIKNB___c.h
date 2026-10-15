#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEFBPMPIKNB;
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define AEFBPMPIKNB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB14F540)
#define AEFBPMPIKNB___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB14F570)
#define AEFBPMPIKNB___C___LISTENLEVELVAR_B__9_0_OFFSET UNITYSDK_OFFSET(0xB14F580)

	class AEFBPMPIKNB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C310);
		}

		static ::System::Action** StaticGet___9__9_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C318);
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
