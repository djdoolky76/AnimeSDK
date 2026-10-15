#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ABKMDDDHPCG.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class LookAtAdditiveCurve; }
namespace RPG::Client { class LookAtAdditiveCurveConstraint; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LOOKATADDITIVECURVE_AKPCHIFNFAM_OFFSET UNITYSDK_OFFSET(0xD4AFD90)
#define RPG_CLIENT_LOOKATADDITIVECURVE_CBLJJNKHEOC_OFFSET UNITYSDK_OFFSET(0xD4AFFE0)
#define RPG_CLIENT_LOOKATADDITIVECURVE_CLEAR_OFFSET UNITYSDK_OFFSET(0xD4B05B0)
#define RPG_CLIENT_LOOKATADDITIVECURVE_CTOR_OFFSET UNITYSDK_OFFSET(0xD4AFCC0)
#define RPG_CLIENT_LOOKATADDITIVECURVE_EOCEFJFIJLK_OFFSET UNITYSDK_OFFSET(0xD4B06E0)
#define RPG_CLIENT_LOOKATADDITIVECURVE_FIMKMGEHHCB_OFFSET UNITYSDK_OFFSET(0xD4AFAE0)
#define RPG_CLIENT_LOOKATADDITIVECURVE_GET_BLEND_OFFSET UNITYSDK_OFFSET(0xD4AFAD0)
#define RPG_CLIENT_LOOKATADDITIVECURVE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xD4AFBF0)
#define RPG_CLIENT_LOOKATADDITIVECURVE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0xD4AFA20)
#define RPG_CLIENT_LOOKATADDITIVECURVE_GET_ISBLENDOUT_OFFSET UNITYSDK_OFFSET(0xD4AFC20)
#define RPG_CLIENT_LOOKATADDITIVECURVE_GET_STOPTRACE_OFFSET UNITYSDK_OFFSET(0xD4AFC00)
#define RPG_CLIENT_LOOKATADDITIVECURVE_GET_USESPINENUM_OFFSET UNITYSDK_OFFSET(0xD4AFCA0)
#define RPG_CLIENT_LOOKATADDITIVECURVE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xD4B0060)
#define RPG_CLIENT_LOOKATADDITIVECURVE_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xD4B0420)
#define RPG_CLIENT_LOOKATADDITIVECURVE_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0xD4AFD00)
#define RPG_CLIENT_LOOKATADDITIVECURVE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0xD4AFAC0)

namespace RPG::Client
{
	class LookAtAdditiveCurve : public ::System::Object
	{
	public:
		::System::Boolean _Enabled; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single _Duration; // 0x14
		::UnityEngine::AnimationCurve* _Curve; // 0x18
		::RPG::Client::LookAtAdditiveCurveConstraint* _Constraint; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::LookAtAdditiveCurve*>* _InterruptedCurves; // 0x28
		::System::Single _Progress; // 0x30
		::System::Single _Blend; // 0x34
		::System::Boolean _Interrupted; // 0x38
		::System::Byte _padding1[0x3];
		::System::Single _InterruptedBlendOutTime; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATADDITIVECURVE_CTOR_OFFSET))(this);
		}

		::System::Boolean get_Enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATADDITIVECURVE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_Enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATADDITIVECURVE_SET_ENABLED_OFFSET))(this, a1);
		}

		::System::Single get_Blend()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATADDITIVECURVE_GET_BLEND_OFFSET))(this);
		}

		::System::Single FIMKMGEHHCB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATADDITIVECURVE_FIMKMGEHHCB_OFFSET))(this);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATADDITIVECURVE_GET_DURATION_OFFSET))(this);
		}

		::System::Boolean get_StopTrace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATADDITIVECURVE_GET_STOPTRACE_OFFSET))(this);
		}

		::System::Boolean get_IsBlendOut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATADDITIVECURVE_GET_ISBLENDOUT_OFFSET))(this);
		}

		::System::Int32 get_UseSpineNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATADDITIVECURVE_GET_USESPINENUM_OFFSET))(this);
		}

		::System::Void PPEGOIODAKI(::RPG::Client::LookAtAdditiveCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LookAtAdditiveCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATADDITIVECURVE_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::System::Void AKPCHIFNFAM(::UnityEngine::AnimationCurve* a1, ::RPG::Client::LookAtAdditiveCurveConstraint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::RPG::Client::LookAtAdditiveCurveConstraint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATADDITIVECURVE_AKPCHIFNFAM_OFFSET))(this, a1, a2);
		}

		::System::Void CBLJJNKHEOC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATADDITIVECURVE_CBLJJNKHEOC_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATADDITIVECURVE_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void PKADDEPKJFN(::UnityEngine::Vector3 a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATADDITIVECURVE_PKADDEPKJFN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATADDITIVECURVE_CLEAR_OFFSET))(this);
		}

		::System::Void EOCEFJFIJLK(::ABKMDDDHPCG a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABKMDDDHPCG))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATADDITIVECURVE_EOCEFJFIJLK_OFFSET))(this, a1);
		}

	};
}
