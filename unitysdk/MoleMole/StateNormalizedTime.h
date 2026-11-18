#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class NLNIIPDCABP;
namespace UnityEngine { class Animator; }

#define MOLEMOLE_STATENORMALIZEDTIME_GMBDGCBMFKK_OFFSET UNITYSDK_OFFSET(0x198D3F50)
#define MOLEMOLE_STATENORMALIZEDTIME_GMBKGFHCBCH_OFFSET UNITYSDK_OFFSET(0x198D3390)
#define MOLEMOLE_STATENORMALIZEDTIME_HELOBBCBBEE_OFFSET UNITYSDK_OFFSET(0x198D3850)
#define MOLEMOLE_STATENORMALIZEDTIME_KNGCNLKFMDC_OFFSET UNITYSDK_OFFSET(0x198D3060)
#define MOLEMOLE_STATENORMALIZEDTIME_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0x198D2CF0)
#define MOLEMOLE_STATENORMALIZEDTIME_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0x198D37C0)
#define MOLEMOLE_STATENORMALIZEDTIME_POOMDENNKIK_OFFSET UNITYSDK_OFFSET(0x198D3F40)
#define MOLEMOLE_STATENORMALIZEDTIME__CCTOR_OFFSET UNITYSDK_OFFSET(0x198D3ED0)
#define MOLEMOLE_STATENORMALIZEDTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x198D3E70)

namespace MoleMole
{
	inline static constexpr unsigned int StateNormalizedTime_TypeDefinitionIndex = 80982;

	class StateNormalizedTime : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		static ::System::Int32* StaticGet_frameCountParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(StateNormalizedTime_TypeDefinitionIndex)->GetStaticField(0x123F0);
		}
		static ::System::Int32* StaticGet_normalizedTimeParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(StateNormalizedTime_TypeDefinitionIndex)->GetStaticField(0x123F4);
		}
		::NLNIIPDCABP* cachedAnimatorComponent; // 0x18
		::System::Boolean paramHashInitialize; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single cachedTotalFrameCount; // 0x24
		::System::Int32 cachedAnimatorHash; // 0x28
		::System::Int32 cachedShortNameHash; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATENORMALIZEDTIME__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_STATENORMALIZEDTIME__CCTOR_OFFSET))();
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* ICAAMDMMDDJ, ::UnityEngine::AnimatorStateInfo LGAABHLIHKE, ::System::Int32 EEGBEFGJJBM)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_STATENORMALIZEDTIME_ONSTATEENTER_OFFSET))(this, ICAAMDMMDDJ, LGAABHLIHKE, EEGBEFGJJBM);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* ICAAMDMMDDJ, ::UnityEngine::AnimatorStateInfo LGAABHLIHKE, ::System::Int32 EEGBEFGJJBM)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_STATENORMALIZEDTIME_ONSTATEUPDATE_OFFSET))(this, ICAAMDMMDDJ, LGAABHLIHKE, EEGBEFGJJBM);
		}

		::System::Void POOMDENNKIK(::UnityEngine::Animator* MIALFKCCCPI, ::UnityEngine::AnimatorStateInfo KMGKAIDEIBA, ::System::Int32 FDHMCIFPNCK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_STATENORMALIZEDTIME_POOMDENNKIK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}

		::System::Void GMBKGFHCBCH(::NLNIIPDCABP* FNFNDIBMPDE, ::UnityEngine::Animator* ICAAMDMMDDJ, ::UnityEngine::AnimatorStateInfo LGAABHLIHKE, ::System::Int32 EEGBEFGJJBM)
		{
			return ((::System::Void(*)(::PVOID, ::NLNIIPDCABP*, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_STATENORMALIZEDTIME_GMBKGFHCBCH_OFFSET))(this, FNFNDIBMPDE, ICAAMDMMDDJ, LGAABHLIHKE, EEGBEFGJJBM);
		}

		::System::Boolean KNGCNLKFMDC(::UnityEngine::Animator* ICAAMDMMDDJ, ::NLNIIPDCABP*& FNFNDIBMPDE)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animator*, ::NLNIIPDCABP*&))((::PBYTE)hIl2Cpp + MOLEMOLE_STATENORMALIZEDTIME_KNGCNLKFMDC_OFFSET))(this, ICAAMDMMDDJ, FNFNDIBMPDE);
		}

		::System::Void GMBDGCBMFKK(::UnityEngine::Animator* MIALFKCCCPI, ::UnityEngine::AnimatorStateInfo KMGKAIDEIBA, ::System::Int32 FDHMCIFPNCK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_STATENORMALIZEDTIME_GMBDGCBMFKK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}

		::System::Void HELOBBCBBEE(::UnityEngine::Animator* ICAAMDMMDDJ, ::UnityEngine::AnimatorStateInfo& LGAABHLIHKE, ::System::Int32 EEGBEFGJJBM)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo&, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_STATENORMALIZEDTIME_HELOBBCBBEE_OFFSET))(this, ICAAMDMMDDJ, LGAABHLIHKE, EEGBEFGJJBM);
		}
	};
}
