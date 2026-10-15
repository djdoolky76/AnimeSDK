#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJKHPOHKIIF.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtSkillState.h"
class ANDEHGAKOHE;
class CENEFPOMFKG;
class EKFMIDBJDIA;
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class RtBattleStageConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GJANKOEDMLL_AEPNMKAEJOB_OFFSET UNITYSDK_OFFSET(0x15A4BCE0)
#define GJANKOEDMLL_AJLCJJOOOOE_OFFSET UNITYSDK_OFFSET(0x15A4B370)
#define GJANKOEDMLL_BHFOMIJFFAF_OFFSET UNITYSDK_OFFSET(0x15A4D000)
#define GJANKOEDMLL_BMJMLPGDBLP_OFFSET UNITYSDK_OFFSET(0x15A4BED0)
#define GJANKOEDMLL_CCTOR_OFFSET UNITYSDK_OFFSET(0x15A4D490)
#define GJANKOEDMLL_CFGJINNALHL_OFFSET UNITYSDK_OFFSET(0x15A4C640)
#define GJANKOEDMLL_CTOR_OFFSET UNITYSDK_OFFSET(0x15A4D2E0)
#define GJANKOEDMLL_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x15A4B2B0)
#define GJANKOEDMLL_EJNBJPPGNJF_OFFSET UNITYSDK_OFFSET(0x15A4D140)
#define GJANKOEDMLL_GAFKECIDLJG_OFFSET UNITYSDK_OFFSET(0x15A4BB70)
#define GJANKOEDMLL_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0x15A4B410)
#define GJANKOEDMLL_GNLKPJHAKHM_OFFSET UNITYSDK_OFFSET(0x15A4C580)
#define GJANKOEDMLL_HBONOMIHCFN_OFFSET UNITYSDK_OFFSET(0x15A4CA60)
#define GJANKOEDMLL_HIIPLBKPPAA_OFFSET UNITYSDK_OFFSET(0x15A4AE50)
#define GJANKOEDMLL_HJJLBAKGKLI_OFFSET UNITYSDK_OFFSET(0x15A4CE80)
#define GJANKOEDMLL_IGIJMNEEDLA_OFFSET UNITYSDK_OFFSET(0x15A4C870)
#define GJANKOEDMLL_IKLFOPOKLEH_OFFSET UNITYSDK_OFFSET(0x15A4B770)
#define GJANKOEDMLL_IPOCOBLHGFN_OFFSET UNITYSDK_OFFSET(0x15A4A210)
#define GJANKOEDMLL_KMEBEMKDMAP_OFFSET UNITYSDK_OFFSET(0x15A4B9C0)
#define GJANKOEDMLL_LBEDFDGDKNM_OFFSET UNITYSDK_OFFSET(0x15A4B6F0)
#define GJANKOEDMLL_LGLEDAFADHC_OFFSET UNITYSDK_OFFSET(0x15A4AFA0)
#define GJANKOEDMLL_LMPCMHLILBP_OFFSET UNITYSDK_OFFSET(0x15A4D0A0)
#define GJANKOEDMLL_MHBEJENLMIG_OFFSET UNITYSDK_OFFSET(0x15A4CF40)
#define GJANKOEDMLL_MLEHDEBGFGO_OFFSET UNITYSDK_OFFSET(0x15A4C390)
#define GJANKOEDMLL_MPILKBEMFII_OFFSET UNITYSDK_OFFSET(0x15A4A140)
#define GJANKOEDMLL_OIDEBNLAAJD_OFFSET UNITYSDK_OFFSET(0x15A4A1D0)

inline static constexpr unsigned int GJANKOEDMLL_TypeDefinitionIndex = 73258;

	class GJANKOEDMLL : public ::LJKHPOHKIIF
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* HCMIHPMDKHM; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* EMEIEIDPNLI; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* DCCKJLFFOBA; // 0x30
		::RPG::GameCore::GameWorld* MIGBODJOOEH; // 0x38
		::System::Boolean DGFKCAECPNB; // 0x40
		static ::RPG::GameCore::FixPoint* StaticGet_KDIOMDANNKG()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("", "GJANKOEDMLL")->GetStaticField(0x14D80);
		}

		// static const ::System::Object BPJOBEGCNAN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJANKOEDMLL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJANKOEDMLL_CCTOR_OFFSET))();
		}

		::System::Collections::IEnumerator* MPILKBEMFII()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJANKOEDMLL_MPILKBEMFII_OFFSET))(this);
		}

		::System::Void OIDEBNLAAJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJANKOEDMLL_OIDEBNLAAJD_OFFSET))(this);
		}

		::System::Void IPOCOBLHGFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJANKOEDMLL_IPOCOBLHGFN_OFFSET))(this);
		}

		::System::Void HIIPLBKPPAA(::System::Collections::Generic::List_1<::System::Object*>* a1, ::System::UInt32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + GJANKOEDMLL_HIIPLBKPPAA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LGLEDAFADHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJANKOEDMLL_LGLEDAFADHC_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJANKOEDMLL_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void GGNBOEIMEPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJANKOEDMLL_GGNBOEIMEPM_OFFSET))(this);
		}

		::System::Void GAFKECIDLJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJANKOEDMLL_GAFKECIDLJG_OFFSET))(this);
		}

		::System::Void AEPNMKAEJOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJANKOEDMLL_AEPNMKAEJOB_OFFSET))(this);
		}

		::System::Void MLEHDEBGFGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJANKOEDMLL_MLEHDEBGFGO_OFFSET))(this);
		}

		::System::Void GNLKPJHAKHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJANKOEDMLL_GNLKPJHAKHM_OFFSET))(this);
		}

		::System::Void AJLCJJOOOOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJANKOEDMLL_AJLCJJOOOOE_OFFSET))(this);
		}

		::ANDEHGAKOHE* IKLFOPOKLEH()
		{
			return ((::ANDEHGAKOHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJANKOEDMLL_IKLFOPOKLEH_OFFSET))(this);
		}

		::System::Void CFGJINNALHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJANKOEDMLL_CFGJINNALHL_OFFSET))(this);
		}

		::System::Void KMEBEMKDMAP(::ANDEHGAKOHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANDEHGAKOHE*))((::PBYTE)hIl2Cpp + GJANKOEDMLL_KMEBEMKDMAP_OFFSET))(this, a1);
		}

		::System::Void IGIJMNEEDLA(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::RPG::GameCore::RtBattleStageConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::RPG::GameCore::RtBattleStageConfig*))((::PBYTE)hIl2Cpp + GJANKOEDMLL_IGIJMNEEDLA_OFFSET))(this, a1, a2);
		}

		::System::Void BMJMLPGDBLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJANKOEDMLL_BMJMLPGDBLP_OFFSET))(this);
		}

		::System::Void HBONOMIHCFN(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + GJANKOEDMLL_HBONOMIHCFN_OFFSET))(this, a1);
		}

		::System::Void LBEDFDGDKNM(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + GJANKOEDMLL_LBEDFDGDKNM_OFFSET))(this, a1);
		}

		::System::Void HJJLBAKGKLI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJANKOEDMLL_HJJLBAKGKLI_OFFSET))(this, a1);
		}

		::System::Void MHBEJENLMIG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJANKOEDMLL_MHBEJENLMIG_OFFSET))(this, a1);
		}

		::System::Void BHFOMIJFFAF(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + GJANKOEDMLL_BHFOMIJFFAF_OFFSET))(this, a1);
		}

		::System::Void LMPCMHLILBP(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + GJANKOEDMLL_LMPCMHLILBP_OFFSET))(this, a1);
		}

		::System::Void EJNBJPPGNJF(::CENEFPOMFKG* a1, ::RPG::GameCore::RtSkillState a2, ::RPG::GameCore::RtSkillState a3)
		{
			return ((::System::Void(*)(::PVOID, ::CENEFPOMFKG*, ::RPG::GameCore::RtSkillState, ::RPG::GameCore::RtSkillState))((::PBYTE)hIl2Cpp + GJANKOEDMLL_EJNBJPPGNJF_OFFSET))(this, a1, a2, a3);
		}

	};
