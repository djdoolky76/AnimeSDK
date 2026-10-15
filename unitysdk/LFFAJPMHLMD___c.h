#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MMPNGLIMIHL;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define LFFAJPMHLMD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC58BB0)
#define LFFAJPMHLMD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC58BF0)
#define LFFAJPMHLMD___C___ONPAUSEIMPLEMENT_B__7_0_OFFSET UNITYSDK_OFFSET(0x1EC58C00)
#define LFFAJPMHLMD___C___ONRESUMEIMPLEMENT_B__8_0_OFFSET UNITYSDK_OFFSET(0x1EC58D20)

inline static constexpr unsigned int LFFAJPMHLMD___c_TypeDefinitionIndex = 44203;

	class LFFAJPMHLMD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49A70);
		}

		static ::System::Action_1<::MMPNGLIMIHL*>** StaticGet___9__8_0()
		{
			return (::System::Action_1<::MMPNGLIMIHL*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49A78);
		}

		static ::System::Action_1<::MMPNGLIMIHL*>** StaticGet___9__7_0()
		{
			return (::System::Action_1<::MMPNGLIMIHL*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49A80);
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
