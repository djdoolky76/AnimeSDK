#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MMPNGLIMIHL;
namespace System { class Action; }
namespace System { class Object; }

#define LFFAJPMHLMD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC86260)
#define LFFAJPMHLMD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC862A0)
#define LFFAJPMHLMD___C___ONPAUSEIMPLEMENT_B__7_0_OFFSET UNITYSDK_OFFSET(0x1EC862B0)
#define LFFAJPMHLMD___C___ONRESUMEIMPLEMENT_B__8_0_OFFSET UNITYSDK_OFFSET(0x1EC863D0)

inline static constexpr unsigned int LFFAJPMHLMD___c_TypeDefinitionIndex = 44203;

	class LFFAJPMHLMD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D580);
		}

		static ::System::Action** StaticGet___9__7_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D588);
		}

		static ::System::Action** StaticGet___9__8_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D590);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFFAJPMHLMD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFAJPMHLMD___C_CTOR_OFFSET))(this);
		}

		::System::Void __OnPauseImplement_b__7_0(::MMPNGLIMIHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMPNGLIMIHL*))((::PBYTE)hIl2Cpp + LFFAJPMHLMD___C___ONPAUSEIMPLEMENT_B__7_0_OFFSET))(this, a1);
		}

		::System::Void __OnResumeImplement_b__8_0(::MMPNGLIMIHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMPNGLIMIHL*))((::PBYTE)hIl2Cpp + LFFAJPMHLMD___C___ONRESUMEIMPLEMENT_B__8_0_OFFSET))(this, a1);
		}

	};
