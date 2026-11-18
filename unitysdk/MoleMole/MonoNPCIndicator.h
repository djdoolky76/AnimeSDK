#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ProtoScript/TimePeriodType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/MoleMole/MonoNPCIndicator_BLBHLPLGKJO.h"
#include "unitysdk/MoleMole/MonoNPCIndicator_NJLAMELCINE.h"

class COCJHGGDBCA;
class MonoNPCCrowdPlatModelComponent;
namespace MoleMole { class MonoNPCIndicator_ICLNEIGEJHL; }
namespace MoleMole::Battle { class Entity; }
namespace NPCCrowd { class NPCPathGraphManager; }
namespace NPCCrowd::AI { class PopulationRuntime; }
namespace NPCCrowd::AI { class SpawnPointConfig; }
namespace NPCCrowd::AI { class SpawnPointGroup; }
namespace NPCCrowd::Animation { class NPCCrowdAnimationInstancerRuntimeData; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_MONONPCINDICATOR_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x1248EC20)
#define MOLEMOLE_MONONPCINDICATOR_BCLGIHNLCMG_OFFSET UNITYSDK_OFFSET(0x1248B200)
#define MOLEMOLE_MONONPCINDICATOR_BMGILHECIOB_OFFSET UNITYSDK_OFFSET(0x1248A6B0)
#define MOLEMOLE_MONONPCINDICATOR_DOJKOBLEFBI_OFFSET UNITYSDK_OFFSET(0x1248ACA0)
#define MOLEMOLE_MONONPCINDICATOR_GETSIZESTR_OFFSET UNITYSDK_OFFSET(0x12487EF0)
#define MOLEMOLE_MONONPCINDICATOR_GLJHMBAJBHC_OFFSET UNITYSDK_OFFSET(0x12489FE0)
#define MOLEMOLE_MONONPCINDICATOR_GOIKMDNNIIH_OFFSET UNITYSDK_OFFSET(0x1248D200)
#define MOLEMOLE_MONONPCINDICATOR_HCFHOCEGAJK_OFFSET UNITYSDK_OFFSET(0x12489760)
#define MOLEMOLE_MONONPCINDICATOR_HHGICEOPMEA_OFFSET UNITYSDK_OFFSET(0x12487E90)
#define MOLEMOLE_MONONPCINDICATOR_ICMDPLNDDLG_OFFSET UNITYSDK_OFFSET(0x1248ED80)
#define MOLEMOLE_MONONPCINDICATOR_ILEDPEAIADG_OFFSET UNITYSDK_OFFSET(0x1248DD20)
#define MOLEMOLE_MONONPCINDICATOR_IOODHJDEOGI_OFFSET UNITYSDK_OFFSET(0x124883C0)
#define MOLEMOLE_MONONPCINDICATOR_JHCFKMAOIFN_OFFSET UNITYSDK_OFFSET(0x1248D400)
#define MOLEMOLE_MONONPCINDICATOR_JICMBELAGFF_OFFSET UNITYSDK_OFFSET(0x1248C980)
#define MOLEMOLE_MONONPCINDICATOR_JMHLDMEMGMI_OFFSET UNITYSDK_OFFSET(0x1248DF10)
#define MOLEMOLE_MONONPCINDICATOR_KIDGPFKNMPG_OFFSET UNITYSDK_OFFSET(0x1248CC20)
#define MOLEMOLE_MONONPCINDICATOR_KIIHFCHNHAF_OFFSET UNITYSDK_OFFSET(0x1248E080)
#define MOLEMOLE_MONONPCINDICATOR_LEMKAGLBGPF_OFFSET UNITYSDK_OFFSET(0x1248ADF0)
#define MOLEMOLE_MONONPCINDICATOR_LMOPOFHACEF_OFFSET UNITYSDK_OFFSET(0x1248CF00)
#define MOLEMOLE_MONONPCINDICATOR_LNIFHJKFNLD_OFFSET UNITYSDK_OFFSET(0x12488F50)
#define MOLEMOLE_MONONPCINDICATOR_MFGABLFMPBE_OFFSET UNITYSDK_OFFSET(0x1248DFD0)
#define MOLEMOLE_MONONPCINDICATOR_NABCBGICLDF_OFFSET UNITYSDK_OFFSET(0x1248C570)
#define MOLEMOLE_MONONPCINDICATOR_NEBKGJGFAIE_OFFSET UNITYSDK_OFFSET(0x1248CFA0)
#define MOLEMOLE_MONONPCINDICATOR_NECOBEAKEEK_OFFSET UNITYSDK_OFFSET(0x1248D6F0)
#define MOLEMOLE_MONONPCINDICATOR_NOHMPAMPHEA_OFFSET UNITYSDK_OFFSET(0x12489E20)
#define MOLEMOLE_MONONPCINDICATOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12486800)
#define MOLEMOLE_MONONPCINDICATOR_PMHJBNNPCLB_OFFSET UNITYSDK_OFFSET(0x12488260)
#define MOLEMOLE_MONONPCINDICATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x12487B60)
#define MOLEMOLE_MONONPCINDICATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x12488100)

namespace MoleMole
{
	inline static constexpr unsigned int MonoNPCIndicator_TypeDefinitionIndex = 68086;

	class MonoNPCIndicator : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Int64 MCMFNMNFMKH = 0x100000; // 0x0
		::UnityEngine::UI::Text* CrowdCountText; // 0x18
		::UnityEngine::UI::Text* CrowdTextureMemoryText; // 0x20
		::UnityEngine::UI::Text* CrowdMeshMemoryText; // 0x28
		::UnityEngine::UI::Text* CrowdAnimationMemoryText; // 0x30
		::UnityEngine::UI::Text* CrowdGPUAnimationBufferMemoryText; // 0x38
		::UnityEngine::UI::Text* CrowdLODInfoText; // 0x40
		::UnityEngine::UI::Text* NormalNPCCountText; // 0x48
		::UnityEngine::UI::Text* NormalNPCTextureMemoryText; // 0x50
		::UnityEngine::UI::Text* NormalNPCMeshMemoryText; // 0x58
		::UnityEngine::UI::Text* NormalNPCAnimationMemoryText; // 0x60
		::UnityEngine::UI::Text* NPCPerformanceText; // 0x68
		::UnityEngine::UI::Text* NPCCountText; // 0x70
		::System::Single HEBJJFOBGIJ; // 0x78
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*>* BCIJJGHMPDO; // 0x80
		::System::Collections::Generic::List_1<::COCJHGGDBCA*>* IPBBFPFOJIP; // 0x88
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* AIOFFHGJEEG; // 0x90
		::System::Collections::Generic::List_1<::MonoNPCCrowdPlatModelComponent*>* JJHJOIPEIPC; // 0x98
		::Nap::NapECS::EcsFilter* IAGGLCANLFI; // 0xA0
		::System::Text::StringBuilder* BBBLIGIHEPB; // 0xA8
		::MoleMole::MonoNPCIndicator_ICLNEIGEJHL* BKHKFAEHAMF; // 0xB0
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* MIBMIBAMHDE; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_UPDATE_OFFSET))(this);
		}

		static ::System::String* GetSizeStr(::System::Int64 BEPMDFENBMH)
		{
			return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_GETSIZESTR_OFFSET))(BEPMDFENBMH);
		}

		::System::Void PMHJBNNPCLB(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_PMHJBNNPCLB_OFFSET))(this, MNGHGOLKKNO);
		}

		::System::Int64 IOODHJDEOGI()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_IOODHJDEOGI_OFFSET))(this);
		}

		::System::Void HHGICEOPMEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_HHGICEOPMEA_OFFSET))(this);
		}

		::System::Int64 DOJKOBLEFBI()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_DOJKOBLEFBI_OFFSET))(this);
		}

		static ::System::Void LEMKAGLBGPF(::NPCCrowd::AI::SpawnPointGroup* KPNIHKEKDOC, ::MoleMole::MonoNPCIndicator_NJLAMELCINE& param_1)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::SpawnPointGroup*, ::MoleMole::MonoNPCIndicator_NJLAMELCINE&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_LEMKAGLBGPF_OFFSET))(KPNIHKEKDOC, param_1);
		}

		::System::Void BMGILHECIOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_BMGILHECIOB_OFFSET))(this);
		}

		::System::Void GLJHMBAJBHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_GLJHMBAJBHC_OFFSET))(this);
		}

		::System::Int64 NABCBGICLDF()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_NABCBGICLDF_OFFSET))(this);
		}

		::System::Void BCLGIHNLCMG(::System::Text::StringBuilder* GENNIFDPOAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_BCLGIHNLCMG_OFFSET))(this, GENNIFDPOAM);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>* JICMBELAGFF(::NPCCrowd::AI::SpawnPointConfig* AFEAFGGLAMK, ::NPCCrowd::NPCPathGraphManager* MINGNPLFJBJ)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>*(*)(::NPCCrowd::AI::SpawnPointConfig*, ::NPCCrowd::NPCPathGraphManager*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_JICMBELAGFF_OFFSET))(AFEAFGGLAMK, MINGNPLFJBJ);
		}

		::System::Int64 GOIKMDNNIIH()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_GOIKMDNNIIH_OFFSET))(this);
		}

		::System::Void HCFHOCEGAJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_HCFHOCEGAJK_OFFSET))(this);
		}

		static ::System::Void JMHLDMEMGMI(::NPCCrowd::AI::SpawnPointGroup* KPNIHKEKDOC, ::MoleMole::MonoNPCIndicator_BLBHLPLGKJO& param_1)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::SpawnPointGroup*, ::MoleMole::MonoNPCIndicator_BLBHLPLGKJO&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_JMHLDMEMGMI_OFFSET))(KPNIHKEKDOC, param_1);
		}

		::System::Int64 JHCFKMAOIFN()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_JHCFKMAOIFN_OFFSET))(this);
		}

		::System::Void MFGABLFMPBE(::COCJHGGDBCA* DFAJBFNNHJG)
		{
			return ((::System::Void(*)(::PVOID, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_MFGABLFMPBE_OFFSET))(this, DFAJBFNNHJG);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* NEBKGJGFAIE(::System::Collections::Generic::List_1<::System::Int32>* MFLJMGLAGKJ, ::ProtoScript::TimePeriodType MDKMECPGPCN)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::ProtoScript::TimePeriodType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_NEBKGJGFAIE_OFFSET))(MFLJMGLAGKJ, MDKMECPGPCN);
		}

		::System::Int64 LNIFHJKFNLD(::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* AEPONOJONAA)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_LNIFHJKFNLD_OFFSET))(this, AEPONOJONAA);
		}

		::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_APAGIJMHEAK_OFFSET))(this, MNGHGOLKKNO);
		}

		::System::Void ILEDPEAIADG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_ILEDPEAIADG_OFFSET))(this);
		}

		::System::Void NOHMPAMPHEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_NOHMPAMPHEA_OFFSET))(this);
		}

		::System::Int64 ICMDPLNDDLG()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_ICMDPLNDDLG_OFFSET))(this);
		}

		static ::System::Int32 KIIHFCHNHAF(::NPCCrowd::AI::PopulationRuntime* PMNLAHHMNFM, ::ProtoScript::TimePeriodType MDKMECPGPCN)
		{
			return ((::System::Int32(*)(::NPCCrowd::AI::PopulationRuntime*, ::ProtoScript::TimePeriodType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_KIIHFCHNHAF_OFFSET))(PMNLAHHMNFM, MDKMECPGPCN);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* KIDGPFKNMPG(::NPCCrowd::AI::SpawnPointConfig* AFEAFGGLAMK, ::NPCCrowd::NPCPathGraphManager* MINGNPLFJBJ)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*(*)(::NPCCrowd::AI::SpawnPointConfig*, ::NPCCrowd::NPCPathGraphManager*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_KIDGPFKNMPG_OFFSET))(AFEAFGGLAMK, MINGNPLFJBJ);
		}

		::System::Int64 NECOBEAKEEK()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_NECOBEAKEEK_OFFSET))(this);
		}

		static ::ProtoScript::TimePeriodType LMOPOFHACEF()
		{
			return ((::ProtoScript::TimePeriodType(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_LMOPOFHACEF_OFFSET))();
		}
	};
}
