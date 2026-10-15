#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JNJKCEIJENA;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define JNJKCEIJENA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB282650)
#define JNJKCEIJENA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB282680)
#define JNJKCEIJENA___C___LISTENLEVELVAR_B__15_0_OFFSET UNITYSDK_OFFSET(0xB282690)

inline static constexpr unsigned int JNJKCEIJENA___c_TypeDefinitionIndex = 77140;

	class JNJKCEIJENA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23380);
		}

		static ::System::Action_3<::JNJKCEIJENA*, ::System::Int32, ::System::String*>** StaticGet___9__15_0()
		{
			return (::System::Action_3<::JNJKCEIJENA*, ::System::Int32, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23388);
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
