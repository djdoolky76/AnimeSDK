#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/MonoSceneObjectBase.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class FindWayObjectPoint; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_CLHCKKEAFKP_OFFSET UNITYSDK_OFFSET(0x1043F0D0)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_DDEGEHCPCCI_OFFSET UNITYSDK_OFFSET(0x1043E610)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_DEKHCICHMFD_OFFSET UNITYSDK_OFFSET(0x1043DE30)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_DEKMFBHDJBA_OFFSET UNITYSDK_OFFSET(0x1043D270)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_DOHIDE_OFFSET UNITYSDK_OFFSET(0x1043C600)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_DOREALRESET_OFFSET UNITYSDK_OFFSET(0x1043CA80)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_DOSHOW_OFFSET UNITYSDK_OFFSET(0x1043BEA0)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_DOSTARTRESET_OFFSET UNITYSDK_OFFSET(0x1043C650)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_DOUPDATE_OFFSET UNITYSDK_OFFSET(0x1043C700)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_FCAFJJCDABA_OFFSET UNITYSDK_OFFSET(0x1043F3B0)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_FLLIHNCMAFH_OFFSET UNITYSDK_OFFSET(0x1043D600)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_FMDBAGEBGKE_OFFSET UNITYSDK_OFFSET(0x1043BF20)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_ILNOKKALJHB_OFFSET UNITYSDK_OFFSET(0x1043CF30)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_JEIPHHDECID_OFFSET UNITYSDK_OFFSET(0x1043E2D0)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1043CC10)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_SETTOMAT_OFFSET UNITYSDK_OFFSET(0x1043C420)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT_UPDATEWAYPOINTSSTARTEND_OFFSET UNITYSDK_OFFSET(0x1043CD50)
#define MOLEMOLE_MONOSCENEFINDWAYOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1043CE20)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSceneFindWayObject_TypeDefinitionIndex = 49295;

	class MonoSceneFindWayObject : public ::MoleMole::MonoSceneObjectBase
	{
	public:
		// static const ::System::Single MPCJINFAEOC; // 0x0
		// static const ::System::Int32 MGMKLCCCLBN = 0x8; // 0x0
		// static const ::System::Int32 NDAJBMHMDEM = 0x6; // 0x0
		::System::Int32 wayID; // 0x38
		::System::Byte _padding0[0x4];
		::Il2CppArray<::MoleMole::FindWayObjectPoint*>* wayPoints; // 0x40
		::System::String* matKey; // 0x48
		::Foundation::AssetRequestHandle DBBCPKDFAMH; // 0x50
		::System::Single thickness; // 0x70
		::System::Single elbowRadius; // 0x74
		::System::Single fadeInTime; // 0x78
		::System::Single fadeOutTime; // 0x7C
		::System::String* FadeInCurveKey; // 0x80
		::System::String* FadeOutCurveKey; // 0x88
		::System::Boolean IHFCMKMMMPP; // 0x90
		::System::Byte _padding1[0x7];
		::UnityEngine::AnimationCurve* NCMIEMAFBEA; // 0x98
		::UnityEngine::AnimationCurve* KNMLMBHEMJA; // 0xA0
		::System::Single LPBFDMMMKAH; // 0xA8
		::System::Single ALOCBAAPNCD; // 0xAC
		::System::Single FBBLGDICHOE; // 0xB0
		::System::Boolean MBHCDOGGJLG; // 0xB4
		::System::Boolean OCNGKILBDGA; // 0xB5
		::System::Byte _padding2[0x2];
		::UnityEngine::Material* EBIDGDBLDPI; // 0xB8
		::UnityEngine::Mesh* FGHPLOPCDEF; // 0xC0
		::System::Boolean generateElbows; // 0xC8
		::System::Boolean avoidStrangling; // 0xC9

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void DoShow(::System::Single FNIOPKPHDEH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_DOSHOW_OFFSET))(this, FNIOPKPHDEH);
		}

		::System::Void DoHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_DOHIDE_OFFSET))(this);
		}

		::System::Void SetToMat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_SETTOMAT_OFFSET))(this);
		}

		::System::Void DoStartReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_DOSTARTRESET_OFFSET))(this);
		}

		::System::Void DoRealReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_DOREALRESET_OFFSET))(this);
		}

		::System::Void DoUpdate(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_DOUPDATE_OFFSET))(this, PMNLNNGEIFM);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_ONDESTROY_OFFSET))(this);
		}

		::System::Void UpdateWayPointsStartEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_UPDATEWAYPOINTSSTARTEND_OFFSET))(this);
		}

		::System::Void ILNOKKALJHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_ILNOKKALJHB_OFFSET))(this);
		}

		::System::Void FLLIHNCMAFH(::UnityEngine::Mesh* MDLNMDJMMJP, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* CELGKCKLPJC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_FLLIHNCMAFH_OFFSET))(this, MDLNMDJMMJP, CELGKCKLPJC);
		}

		::System::Boolean CLHCKKEAFKP(::UnityEngine::Vector3& HGNJALIMMNO, ::UnityEngine::Vector3& LABFIGAKOMD, ::UnityEngine::Vector3 OAMHPAHMIDI, ::UnityEngine::Vector3 BNAEDKECIGN, ::UnityEngine::Vector3 PAAAOCJCNEF, ::UnityEngine::Vector3 OAHDLFABHIG)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_CLHCKKEAFKP_OFFSET))(this, HGNJALIMMNO, LABFIGAKOMD, OAMHPAHMIDI, BNAEDKECIGN, PAAAOCJCNEF, OAHDLFABHIG);
		}

		::System::Void FMDBAGEBGKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_FMDBAGEBGKE_OFFSET))(this);
		}

		::System::Void DEKHCICHMFD(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* DDCMDFBCOCJ, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* AGLPILADKGJ, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* CHPCHCGAFIN, ::UnityEngine::Vector3 MPLDDNMCECG, ::UnityEngine::Vector3 JBCNPOHMGPE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_DEKHCICHMFD_OFFSET))(this, DDCMDFBCOCJ, AGLPILADKGJ, CHPCHCGAFIN, MPLDDNMCECG, JBCNPOHMGPE);
		}

		::System::Void JEIPHHDECID(::System::Collections::Generic::List_1<::System::Int32>* JOLIICIAMBF, ::System::Int32 NJONOFHBPJO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_JEIPHHDECID_OFFSET))(this, JOLIICIAMBF, NJONOFHBPJO);
		}

		::System::Void DDEGEHCPCCI(::System::Int32 ABHBKFJKINO, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* DDCMDFBCOCJ, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* AGLPILADKGJ, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* CHPCHCGAFIN, ::System::Collections::Generic::List_1<::System::Int32>* JOLIICIAMBF, ::UnityEngine::Vector3 JBELLEJJOLM, ::UnityEngine::Vector3 FAHOINCMMCB, ::UnityEngine::Vector3 DFKBICAINLJ, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* CELGKCKLPJC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_DDEGEHCPCCI_OFFSET))(this, ABHBKFJKINO, DDCMDFBCOCJ, AGLPILADKGJ, CHPCHCGAFIN, JOLIICIAMBF, JBELLEJJOLM, FAHOINCMMCB, DFKBICAINLJ, CELGKCKLPJC);
		}

		::System::Void DEKMFBHDJBA(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* CELGKCKLPJC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_DEKMFBHDJBA_OFFSET))(this, CELGKCKLPJC);
		}

		::System::Void FCAFJJCDABA(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* DDCMDFBCOCJ, ::System::Collections::Generic::List_1<::System::Int32>* JOLIICIAMBF, ::System::Int32 NJONOFHBPJO, ::System::Int32 ELKBOLICNAG, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* CELGKCKLPJC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENEFINDWAYOBJECT_FCAFJJCDABA_OFFSET))(this, DDCMDFBCOCJ, JOLIICIAMBF, NJONOFHBPJO, ELKBOLICNAG, CELGKCKLPJC);
		}
	};
}
