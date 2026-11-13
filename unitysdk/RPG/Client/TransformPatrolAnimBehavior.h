#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/RPG/Client/TransformPatrolAnimBehavior_ControlledAnimatorParameter.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Bounds.h"
namespace RPG::Client { class TransformPatrolAnim; }
namespace RPG::Client { class TransformPatrolAnimBehavior_PatrolPoint; }

#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE56D60)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0x1CE541D0)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_CHIMMNJAKFK_OFFSET UNITYSDK_OFFSET(0x1CE56420)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE56CF0)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_DLMEDIILLAH_OFFSET UNITYSDK_OFFSET(0x1CE56CA0)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_DPECFNIMIBK_OFFSET UNITYSDK_OFFSET(0x1CE55C80)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_GET_ARTBOUNDFULL_OFFSET UNITYSDK_OFFSET(0x1CE531A0)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_GET_ARTBOUND_OFFSET UNITYSDK_OFFSET(0x1CE53900)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0x1CE540B0)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x1CE54140)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_HPEFIABOLDA_OFFSET UNITYSDK_OFFSET(0x1CE566E0)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_JDAGFHEPMHF_OFFSET UNITYSDK_OFFSET(0x1CE54690)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_JDIDECKFIJC_OFFSET UNITYSDK_OFFSET(0x1CE56790)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0x1CE54210)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1CE53DE0)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x1CE540F0)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_MJMFDEIFLKF_OFFSET UNITYSDK_OFFSET(0x1CE554E0)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_NBJFLGNEBED_OFFSET UNITYSDK_OFFSET(0x1CE54870)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_NCKOMIDBFJE_OFFSET UNITYSDK_OFFSET(0x1CE56720)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_OGHKKPKMHMI_OFFSET UNITYSDK_OFFSET(0x1CE56800)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0x1CE54250)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1CE542F0)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x1CE53E50)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_PNMGGLEBIIA_OFFSET UNITYSDK_OFFSET(0x1CE56970)
#define RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x1CE54290)

namespace RPG::Client
{
	inline static constexpr unsigned int TransformPatrolAnimBehavior_TypeDefinitionIndex = 72304;

	class TransformPatrolAnimBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Single _StayTime; // 0x38
		::System::Single _MaxSpeed; // 0x3C
		::System::Single _CurrentSpeed; // 0x40
		::System::Single _CurrentProgress; // 0x44
		::RPG::Client::TransformPatrolAnimBehavior_PatrolPoint* _LastPatrolPoint; // 0x48
		::RPG::Client::TransformPatrolAnimBehavior_PatrolPoint* _NextPatrolPoint; // 0x50
		::System::Single _DistanceToLastStop; // 0x58
		::System::Single _DistanceToNextStop; // 0x5C
		::UnityEngine::Vector3 _LastPointPosition; // 0x60
		::UnityEngine::Quaternion _LastPointRotation; // 0x6C
		::UnityEngine::Vector3 _RelativeTransition; // 0x7C
		::UnityEngine::Quaternion _RelativeRotation; // 0x88
		::UnityEngine::Vector3 _RelativeScale; // 0x98
		::System::Boolean _Inited; // 0xA4
		::System::Boolean _Staying; // 0xA5
		::System::Boolean _Backing; // 0xA6
		::System::Byte _padding0[0x1];
		::System::Single _DelayTime; // 0xA8
		::RPG::Client::TransformPatrolAnimBehavior_ControlledAnimatorParameter _ControlledAnimatorParametersChecked; // 0xAC
		static ::System::Int32* StaticGet__StayAnimatorHash()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "TransformPatrolAnimBehavior")->GetStaticField(0xA610);
		}

		static ::System::Int32* StaticGet__CurrentPatrolPointAnimatorHash()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "TransformPatrolAnimBehavior")->GetStaticField(0xA614);
		}

		static ::System::Int32* StaticGet__SpeedRatioAnimatorHash()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "TransformPatrolAnimBehavior")->GetStaticField(0xA618);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void MJMFDEIFLKF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_MJMFDEIFLKF_OFFSET))(this, a1);
		}

		::System::Void DPECFNIMIBK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_DPECFNIMIBK_OFFSET))(this, a1);
		}

		::System::Void NBJFLGNEBED(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_NBJFLGNEBED_OFFSET))(this, a1);
		}

		::System::Void JDIDECKFIJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_JDIDECKFIJC_OFFSET))(this);
		}

		::System::Void HPEFIABOLDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_HPEFIABOLDA_OFFSET))(this);
		}

		::System::Void NCKOMIDBFJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_NCKOMIDBFJE_OFFSET))(this);
		}

		::System::Void JDAGFHEPMHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_JDAGFHEPMHF_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void OGHKKPKMHMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_OGHKKPKMHMI_OFFSET))(this);
		}

		::System::Void PNMGGLEBIIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_PNMGGLEBIIA_OFFSET))(this);
		}

		::System::Void CHIMMNJAKFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_CHIMMNJAKFK_OFFSET))(this);
		}

		::System::Void DLMEDIILLAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_DLMEDIILLAH_OFFSET))(this);
		}

		::UnityEngine::Bounds get_ArtBoundFull()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_GET_ARTBOUNDFULL_OFFSET))(this);
		}

		::System::Single get_ArtBound()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_GET_ARTBOUND_OFFSET))(this);
		}

		::RPG::Client::TransformPatrolAnim* get__Owner()
		{
			return ((::RPG::Client::TransformPatrolAnim*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMPATROLANIMBEHAVIOR_GET__OWNER_OFFSET))(this);
		}

	};
}
