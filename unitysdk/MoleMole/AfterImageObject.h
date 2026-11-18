#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class AGJFDPBLDDF;
class GEIHCPAOKKK;
namespace MoleMole { class AfterImage; }
namespace MoleMole { class FollowAnimator; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_AFTERIMAGEOBJECT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1274F730)
#define MOLEMOLE_AFTERIMAGEOBJECT_BEGINBLURSHADOW_OFFSET UNITYSDK_OFFSET(0x1274F7C0)
#define MOLEMOLE_AFTERIMAGEOBJECT_CENFOFONDFN_OFFSET UNITYSDK_OFFSET(0x12750120)
#define MOLEMOLE_AFTERIMAGEOBJECT_CPPHHNGGCPJ_OFFSET UNITYSDK_OFFSET(0x12750440)
#define MOLEMOLE_AFTERIMAGEOBJECT_ELJMIDHGECN_OFFSET UNITYSDK_OFFSET(0x1274FF60)
#define MOLEMOLE_AFTERIMAGEOBJECT_JBFOPOFLHNM_OFFSET UNITYSDK_OFFSET(0x1274F9F0)
#define MOLEMOLE_AFTERIMAGEOBJECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12750170)
#define MOLEMOLE_AFTERIMAGEOBJECT_PIPGAGDAHEE_OFFSET UNITYSDK_OFFSET(0x127503C0)
#define MOLEMOLE_AFTERIMAGEOBJECT_STOPBLURSHADOW_OFFSET UNITYSDK_OFFSET(0x1274FE40)
#define MOLEMOLE_AFTERIMAGEOBJECT_UPDATE_OFFSET UNITYSDK_OFFSET(0x12750030)
#define MOLEMOLE_AFTERIMAGEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x12750370)

namespace MoleMole
{
	inline static constexpr unsigned int AfterImageObject_TypeDefinitionIndex = 44436;

	class AfterImageObject : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* prefabPath; // 0x18
		::UnityEngine::Transform* TargetRoot; // 0x20
		::System::Boolean use2ndFixedMaterial; // 0x28
		::System::Byte _padding0[0x7];
		::MoleMole::AfterImage* IAPEAPJKOGH; // 0x30
		::MoleMole::FollowAnimator* PEFLPDADHPC; // 0x38
		::System::Boolean UseLowPrefab; // 0x40
		::System::Byte _padding1[0x7];
		::UnityEngine::GameObject* GPBOLNKLBJP; // 0x48
		::System::Boolean APNNODMBFKP; // 0x50
		::System::Boolean MKJFJPMCOEK; // 0x51
		::System::Byte _padding2[0x6];
		::GEIHCPAOKKK* LEOKEOFNDLH; // 0x58
		::AGJFDPBLDDF* CGLBABFPANL; // 0x60
		::System::Boolean MHJKCFANKBD; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGEOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGEOBJECT_AWAKE_OFFSET))(this);
		}

		::System::Void BeginBlurShadow(::System::Int32 MLJMAOLJIBH, ::System::Single FAOPLCFLJLE, ::System::Single BBHIMJMPIGL, ::GEIHCPAOKKK* KECKGDFIALJ, ::System::Boolean KFFBHGGPGPG, ::System::Boolean FCMPANBIMHM, ::System::Single MDPPNMIPDMP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::GEIHCPAOKKK*, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGEOBJECT_BEGINBLURSHADOW_OFFSET))(this, MLJMAOLJIBH, FAOPLCFLJLE, BBHIMJMPIGL, KECKGDFIALJ, KFFBHGGPGPG, FCMPANBIMHM, MDPPNMIPDMP);
		}

		::System::Void StopBlurShadow(::System::Boolean FCMPANBIMHM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGEOBJECT_STOPBLURSHADOW_OFFSET))(this, FCMPANBIMHM);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGEOBJECT_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGEOBJECT_ONDESTROY_OFFSET))(this);
		}

		::System::Void ELJMIDHGECN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGEOBJECT_ELJMIDHGECN_OFFSET))(this);
		}

		::System::Void CENFOFONDFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGEOBJECT_CENFOFONDFN_OFFSET))(this);
		}

		::System::Void JBFOPOFLHNM(::System::Int32 MLJMAOLJIBH, ::System::Single FAOPLCFLJLE, ::System::Single BBHIMJMPIGL, ::GEIHCPAOKKK* KECKGDFIALJ, ::System::Boolean KFFBHGGPGPG, ::System::Single MDPPNMIPDMP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::GEIHCPAOKKK*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGEOBJECT_JBFOPOFLHNM_OFFSET))(this, MLJMAOLJIBH, FAOPLCFLJLE, BBHIMJMPIGL, KECKGDFIALJ, KFFBHGGPGPG, MDPPNMIPDMP);
		}

		::System::Void CPPHHNGGCPJ(::System::Boolean FIPHFGHNNBE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGEOBJECT_CPPHHNGGCPJ_OFFSET))(this, FIPHFGHNNBE);
		}

		::System::Void PIPGAGDAHEE(::System::Boolean DEFJLANCGGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_AFTERIMAGEOBJECT_PIPGAGDAHEE_OFFSET))(this, DEFJLANCGGO);
		}
	};
}
