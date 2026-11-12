#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEDGOLOBNJM;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define DMOJAEDFBID___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x10646950)
#define DMOJAEDFBID___C_CTOR_OFFSET UNITYSDK_OFFSET(0x10646990)
#define DMOJAEDFBID___C___ONBINDHANDLERS_B__46_0_OFFSET UNITYSDK_OFFSET(0x106469A0)
#define DMOJAEDFBID___C___SETUPMODIFIERHINTS_B__63_1_OFFSET UNITYSDK_OFFSET(0x106469B0)

inline static constexpr unsigned int DMOJAEDFBID___c_TypeDefinitionIndex = 73294;

	class DMOJAEDFBID___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::MEDGOLOBNJM*>** StaticGet___9__63_1()
		{
			return (::System::Comparison_1<::MEDGOLOBNJM*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54D90);
		}

		static ::System::Action_1<::System::Object*>** StaticGet___9__46_0()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54D98);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54DA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMOJAEDFBID___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOJAEDFBID___C_CTOR_OFFSET))(this);
		}

		::System::Void __OnBindHandlers_b__46_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DMOJAEDFBID___C___ONBINDHANDLERS_B__46_0_OFFSET))(this, a1);
		}

		::System::Int32 __SetupModifierHints_b__63_1(::MEDGOLOBNJM* a1, ::MEDGOLOBNJM* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::MEDGOLOBNJM*, ::MEDGOLOBNJM*))((::PBYTE)hIl2Cpp + DMOJAEDFBID___C___SETUPMODIFIERHINTS_B__63_1_OFFSET))(this, a1, a2);
		}

	};
