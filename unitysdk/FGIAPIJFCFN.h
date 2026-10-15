#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FGIAPIJFCFN_TimelineControllerState.h"
#include "unitysdk/System/Object.h"
class OOAFFEKMMDL;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class TimelinePrefabController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define FGIAPIJFCFN_AABLEFMMHNM_OFFSET UNITYSDK_OFFSET(0x157639C0)
#define FGIAPIJFCFN_BEJLMNCPPGG_OFFSET UNITYSDK_OFFSET(0x157643E0)
#define FGIAPIJFCFN_CTOR_OFFSET UNITYSDK_OFFSET(0x15763010)
#define FGIAPIJFCFN_DIDMMOFOGEG_OFFSET UNITYSDK_OFFSET(0x157644C0)
#define FGIAPIJFCFN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157630F0)
#define FGIAPIJFCFN_EBEGDPPAJDJ_OFFSET UNITYSDK_OFFSET(0x157642A0)
#define FGIAPIJFCFN_FAFPBEDEGNH_OFFSET UNITYSDK_OFFSET(0x15763380)
#define FGIAPIJFCFN_FCEEMALKLBO_OFFSET UNITYSDK_OFFSET(0x15763D20)
#define FGIAPIJFCFN_FKGJJAHNCLA_OFFSET UNITYSDK_OFFSET(0x15763090)
#define FGIAPIJFCFN_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x15763140)
#define FGIAPIJFCFN_IECIAPPANHI_OFFSET UNITYSDK_OFFSET(0x15763B40)
#define FGIAPIJFCFN_JDAGFHEPMHF_OFFSET UNITYSDK_OFFSET(0x15763220)
#define FGIAPIJFCFN_JEJEMAPNLBO_OFFSET UNITYSDK_OFFSET(0x15764440)
#define FGIAPIJFCFN_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15764140)
#define FGIAPIJFCFN_KDFFCKAFMPJ_OFFSET UNITYSDK_OFFSET(0x157641E0)
#define FGIAPIJFCFN_LAIHABBGKKK_OFFSET UNITYSDK_OFFSET(0x15763BE0)
#define FGIAPIJFCFN_MDPCLECCNBJ_OFFSET UNITYSDK_OFFSET(0x157635E0)
#define FGIAPIJFCFN_NOJCAGEDEKO_OFFSET UNITYSDK_OFFSET(0x15764010)
#define FGIAPIJFCFN_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0x15763F70)

inline static constexpr unsigned int FGIAPIJFCFN_TypeDefinitionIndex = 60764;

	class FGIAPIJFCFN : public ::System::Object
	{
	public:
		::RPG::Client::TimelinePrefabController* CBKPIFBDEDF; // 0x10
		::UnityEngine::Playables::PlayableDirector* JOPCGEFEJAM; // 0x18
		::Cinemachine::CinemachineVirtualCamera* EAJFHBDCFFO; // 0x20
		::System::Collections::Generic::List_1<::OOAFFEKMMDL*>* NHMKMMGGMFI; // 0x28
		::FGIAPIJFCFN_TimelineControllerState DLNIGFGLPLJ; // 0x30
		::System::Byte _padding0[0x4];
		::System::Double MLNKKEDOHMF; // 0x38
		::System::Void _ctor(::RPG::Client::TimelinePrefabController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TimelinePrefabController*))((::PBYTE)hIl2Cpp + FGIAPIJFCFN_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean FKGJJAHNCLA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIAPIJFCFN_FKGJJAHNCLA_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIAPIJFCFN_DISPOSE_OFFSET))(this);
		}

		::System::Boolean JDAGFHEPMHF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIAPIJFCFN_JDAGFHEPMHF_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIAPIJFCFN_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIAPIJFCFN_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void IECIAPPANHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIAPIJFCFN_IECIAPPANHI_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIAPIJFCFN_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Boolean EBEGDPPAJDJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIAPIJFCFN_EBEGDPPAJDJ_OFFSET))(this);
		}

		::System::Void NOJCAGEDEKO(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + FGIAPIJFCFN_NOJCAGEDEKO_OFFSET))(this, a1);
		}

		::System::Void FAFPBEDEGNH(::Cinemachine::CinemachineVirtualCamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + FGIAPIJFCFN_FAFPBEDEGNH_OFFSET))(this, a1);
		}

		::System::Void LAIHABBGKKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIAPIJFCFN_LAIHABBGKKK_OFFSET))(this);
		}

		::System::Void MDPCLECCNBJ(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + FGIAPIJFCFN_MDPCLECCNBJ_OFFSET))(this, a1);
		}

		::System::Void FCEEMALKLBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIAPIJFCFN_FCEEMALKLBO_OFFSET))(this);
		}

		::System::Void KDFFCKAFMPJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIAPIJFCFN_KDFFCKAFMPJ_OFFSET))(this);
		}

		::System::Void AABLEFMMHNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIAPIJFCFN_AABLEFMMHNM_OFFSET))(this);
		}

		::System::Double JEJEMAPNLBO()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIAPIJFCFN_JEJEMAPNLBO_OFFSET))(this);
		}

		::System::Double BEJLMNCPPGG()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIAPIJFCFN_BEJLMNCPPGG_OFFSET))(this);
		}

		::System::Boolean DIDMMOFOGEG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIAPIJFCFN_DIDMMOFOGEG_OFFSET))(this);
		}

	};
