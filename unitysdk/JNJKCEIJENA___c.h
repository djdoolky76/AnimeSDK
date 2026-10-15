#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JNJKCEIJENA;
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define JNJKCEIJENA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB288C50)
#define JNJKCEIJENA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB288C80)
#define JNJKCEIJENA___C___LISTENLEVELVAR_B__15_0_OFFSET UNITYSDK_OFFSET(0xB288C90)

inline static constexpr unsigned int JNJKCEIJENA___c_TypeDefinitionIndex = 77141;

	class JNJKCEIJENA___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__15_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22CC0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22CC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNJKCEIJENA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJKCEIJENA___C_CTOR_OFFSET))(this);
		}

		::System::Void __ListenLevelVar_b__15_0(::JNJKCEIJENA* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::JNJKCEIJENA*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + JNJKCEIJENA___C___LISTENLEVELVAR_B__15_0_OFFSET))(this, a1, a2, a3);
		}

	};
