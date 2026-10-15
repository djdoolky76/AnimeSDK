#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/RPG/GameCore/ChildSkillUILayoutType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
class AFOPMEOBPCM;
class ALGMPBLKIGI;
class EANKAFJCEEH;
class JGNCIONCKNN;
class MMHPBKNKBGP_EHCHDILLGPK;
class MNJNHIAPNKD;
class NMNIJNNFPGP;
class OMIOIONOFFD;
class PCFGMEAFAFD;
class PIHMIDGCDGM;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class SkillData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define MMHPBKNKBGP_ACAOANMOOJI_OFFSET UNITYSDK_OFFSET(0xB9C7A90)
#define MMHPBKNKBGP_AGNLBPEBLCG_OFFSET UNITYSDK_OFFSET(0xB9C88B0)
#define MMHPBKNKBGP_BBGGEBDCJJK_OFFSET UNITYSDK_OFFSET(0xB9C8AB0)
#define MMHPBKNKBGP_BHBCLBBOPFL_OFFSET UNITYSDK_OFFSET(0xB9C8280)
#define MMHPBKNKBGP_BKBMANBDINI_OFFSET UNITYSDK_OFFSET(0xB9C8B70)
#define MMHPBKNKBGP_BMKEIONMBBI_OFFSET UNITYSDK_OFFSET(0xB9C77B0)
#define MMHPBKNKBGP_BOEJBNDCKAI_OFFSET UNITYSDK_OFFSET(0xB9C5520)
#define MMHPBKNKBGP_BOOIIBEBBFC_OFFSET UNITYSDK_OFFSET(0xB9C8A60)
#define MMHPBKNKBGP_BPMNKPHDKHD_OFFSET UNITYSDK_OFFSET(0xB9C51E0)
#define MMHPBKNKBGP_CLGNNNALIBA_OFFSET UNITYSDK_OFFSET(0xB9C9FA0)
#define MMHPBKNKBGP_CTOR_OFFSET UNITYSDK_OFFSET(0xB9CB850)
#define MMHPBKNKBGP_DCBAOOMABFN_OFFSET UNITYSDK_OFFSET(0xB9C9070)
#define MMHPBKNKBGP_DCNPEMCJFFA_OFFSET UNITYSDK_OFFSET(0xB9C5C10)
#define MMHPBKNKBGP_DDBBEAGFHFD_OFFSET UNITYSDK_OFFSET(0xB9CA060)
#define MMHPBKNKBGP_DFDDJEMDDEL_OFFSET UNITYSDK_OFFSET(0xB9CA0C0)
#define MMHPBKNKBGP_DFGLPGCNBKC_OFFSET UNITYSDK_OFFSET(0xB9C82F0)
#define MMHPBKNKBGP_DJOPFOEMNDE_OFFSET UNITYSDK_OFFSET(0xB9C50B0)
#define MMHPBKNKBGP_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xB9C5C90)
#define MMHPBKNKBGP_EELDCNJLOBJ_OFFSET UNITYSDK_OFFSET(0xB9C8F80)
#define MMHPBKNKBGP_EELICFFLPGE_OFFSET UNITYSDK_OFFSET(0xB9C5770)
#define MMHPBKNKBGP_EHBAPPLIHIA_OFFSET UNITYSDK_OFFSET(0xB9C7820)
#define MMHPBKNKBGP_EJIODEIEAPO_OFFSET UNITYSDK_OFFSET(0xB9C9B50)
#define MMHPBKNKBGP_EJPHKAJJCOG_OFFSET UNITYSDK_OFFSET(0xB9C85F0)
#define MMHPBKNKBGP_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB9C61A0)
#define MMHPBKNKBGP_EPMFMGGLLOP_OFFSET UNITYSDK_OFFSET(0xB9CA9C0)
#define MMHPBKNKBGP_FAAILADAADH_OFFSET UNITYSDK_OFFSET(0xB9CB7D0)
#define MMHPBKNKBGP_FCCNFDECFHO_OFFSET UNITYSDK_OFFSET(0xB9C9610)
#define MMHPBKNKBGP_FMKBCHLBNDO_OFFSET UNITYSDK_OFFSET(0xB9C71C0)
#define MMHPBKNKBGP_GGMMMLNIPHG_OFFSET UNITYSDK_OFFSET(0xB9C4ED0)
#define MMHPBKNKBGP_GLLODPFAPHH_OFFSET UNITYSDK_OFFSET(0xB9C4BD0)
#define MMHPBKNKBGP_GOHJOAGJNEI_OFFSET UNITYSDK_OFFSET(0xB9C56C0)
#define MMHPBKNKBGP_HJLOHNOKIPM_OFFSET UNITYSDK_OFFSET(0xB9C9280)
#define MMHPBKNKBGP_HMDEILJIGGA_OFFSET UNITYSDK_OFFSET(0xB9C7920)
#define MMHPBKNKBGP_HMONODDINEC_OFFSET UNITYSDK_OFFSET(0xB9CB400)
#define MMHPBKNKBGP_IBBBJLDKGLI_OFFSET UNITYSDK_OFFSET(0xB9C7C40)
#define MMHPBKNKBGP_IKDLOIFBMLK_OFFSET UNITYSDK_OFFSET(0xB9C5830)
#define MMHPBKNKBGP_ILAJHKMOILG_OFFSET UNITYSDK_OFFSET(0xB9C9D20)
#define MMHPBKNKBGP_ILMPMNJDDPA_OFFSET UNITYSDK_OFFSET(0xB9C6380)
#define MMHPBKNKBGP_ILPBHPBBGNA_OFFSET UNITYSDK_OFFSET(0xB9C75E0)
#define MMHPBKNKBGP_INEDLJGDFAJ_OFFSET UNITYSDK_OFFSET(0xB9C9230)
#define MMHPBKNKBGP_JPGDPANMIEA_OFFSET UNITYSDK_OFFSET(0xB9C53F0)
#define MMHPBKNKBGP_KACBKEJCBLE_OFFSET UNITYSDK_OFFSET(0xB9C7B80)
#define MMHPBKNKBGP_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xB9C7D90)
#define MMHPBKNKBGP_KHHADKOMLAN_OFFSET UNITYSDK_OFFSET(0xB9C7CC0)
#define MMHPBKNKBGP_KMAPHAGLJNE_OFFSET UNITYSDK_OFFSET(0xB9C9DF0)
#define MMHPBKNKBGP_LJBCDPLDEGB_OFFSET UNITYSDK_OFFSET(0xB9CB580)
#define MMHPBKNKBGP_LLFMMFPFAKB_OFFSET UNITYSDK_OFFSET(0xB9C7570)
#define MMHPBKNKBGP_MGBLPOKFNLD_OFFSET UNITYSDK_OFFSET(0xB9C5B30)
#define MMHPBKNKBGP_MIJJHKOEHOG_OFFSET UNITYSDK_OFFSET(0xB9C9530)
#define MMHPBKNKBGP_NFBKJLPGIDN_OFFSET UNITYSDK_OFFSET(0xB9C8C80)
#define MMHPBKNKBGP_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xB9C5B80)
#define MMHPBKNKBGP_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0xB9C6230)
#define MMHPBKNKBGP_OJCAJJMAGLK_OFFSET UNITYSDK_OFFSET(0xB9C7350)
#define MMHPBKNKBGP_OOKHOMDFLML_OFFSET UNITYSDK_OFFSET(0xB9C4FC0)
#define MMHPBKNKBGP_OPHIPMAONJD_OFFSET UNITYSDK_OFFSET(0xB9C96D0)
#define MMHPBKNKBGP_PECFGOMMOCD_OFFSET UNITYSDK_OFFSET(0xB9C6B10)
#define MMHPBKNKBGP_PHGCJGAPNJD_OFFSET UNITYSDK_OFFSET(0xB9C68D0)
#define MMHPBKNKBGP__ONBIND_OFFSET UNITYSDK_OFFSET(0xB9C4A00)
#define MMHPBKNKBGP__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xB9C62A0)
#define MMHPBKNKBGP__ONTICK_OFFSET UNITYSDK_OFFSET(0xB9C6300)

	class MMHPBKNKBGP : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* DGKNCLMLNNG; // 0x60
		::UnityEngine::ParticleSystem* OIPLFCPMMOP; // 0x68
		::EANKAFJCEEH* MODMKBNMDKC; // 0x70
		::OMIOIONOFFD* LNGCBFGFMFN; // 0x78
		::OMIOIONOFFD* CHPBLINMICK; // 0x80
		::UnityEngine::ParticleSystem* FNIAHHDDBIG; // 0x88
		::RPG::Client::PrefabLoadMeta* EKNBMKIEFDM; // 0x90
		::OMIOIONOFFD* LLMBPJJGEKA; // 0x98
		::UnityEngine::Transform* OONJJODODEK; // 0xA0
		::ALGMPBLKIGI* IOANIBICPFL; // 0xA8
		::UnityEngine::Animation* GNJGANIKNIN; // 0xB0
		::NMNIJNNFPGP* OCIBCDHPKIP; // 0xB8
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0xC0
		::OMIOIONOFFD* FDOMLMMFGGK; // 0xC8
		::OMIOIONOFFD* GCLAFLADBID; // 0xD0
		::UnityEngine::ParticleSystem* FOLDEMHOICE; // 0xD8
		::UnityEngine::ParticleSystem* NMNGAOGMMHJ; // 0xE0
		::AFOPMEOBPCM* EMEAEHDCJAF; // 0xE8
		::OMIOIONOFFD* DLKHHOAIDDK; // 0xF0
		::UnityEngine::Transform* OJGANHIKCEI; // 0xF8
		::RPG::GameCore::LevelUIComponent* OMCLLLAHOIP; // 0x100
		::PCFGMEAFAFD* PAIHJGFCCAJ; // 0x108
		::PIHMIDGCDGM* IGNDPNMBPNJ; // 0x110
		::MNJNHIAPNKD* LJDNAPPIBDB; // 0x118
		::MMHPBKNKBGP_EHCHDILLGPK* LFBDNBLMGOH; // 0x120
		::JGNCIONCKNN* IEHLKNBOHJB; // 0x128
		::OMIOIONOFFD* INOCHKINFCC; // 0x130
		::OMIOIONOFFD* COHPEINIJLO; // 0x138
		::OMIOIONOFFD* MAADDCEILAI; // 0x140
		::RPG::Client::UISkillIndex EAGCJMJKBDK; // 0x148
		::System::Boolean AKBPNMEFGAO; // 0x14C
		::System::Boolean HPFIEAIPING; // 0x14D
		::System::Boolean CCEDHBFPBAK; // 0x14E
		::System::Boolean FMNEEONAMNO; // 0x14F
		::System::Boolean LJEEDCKLDMD; // 0x150
		::System::Boolean DEMGHMGFDHC; // 0x151
		// static const ::System::String* KDODNCFEJFD; // 0x0
		// static const ::System::String* JCANEFDCDPM; // 0x0
		// static const ::System::String* MEHHKGEIMND; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHPBKNKBGP__ONBIND_OFFSET))(this);
		}

		::System::Void GLLODPFAPHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_GLLODPFAPHH_OFFSET))(this);
		}

		::OMIOIONOFFD* GGMMMLNIPHG(::System::String* a1, ::RPG::Client::UISkillIndex a2)
		{
			return ((::OMIOIONOFFD*(*)(::PVOID, ::System::String*, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_GGMMMLNIPHG_OFFSET))(this, a1, a2);
		}

		::NMNIJNNFPGP* JPGDPANMIEA(::System::String* a1, ::RPG::Client::UISkillIndex a2)
		{
			return ((::NMNIJNNFPGP*(*)(::PVOID, ::System::String*, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_JPGDPANMIEA_OFFSET))(this, a1, a2);
		}

		::OMIOIONOFFD* OOKHOMDFLML(::System::String* a1, ::RPG::Client::UISkillIndex a2)
		{
			return ((::OMIOIONOFFD*(*)(::PVOID, ::System::String*, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_OOKHOMDFLML_OFFSET))(this, a1, a2);
		}

		::OMIOIONOFFD* DJOPFOEMNDE(::System::String* a1)
		{
			return ((::OMIOIONOFFD*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_DJOPFOEMNDE_OFFSET))(this, a1);
		}

		::PCFGMEAFAFD* BPMNKPHDKHD()
		{
			return ((::PCFGMEAFAFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_BPMNKPHDKHD_OFFSET))(this);
		}

		::JGNCIONCKNN* BOEJBNDCKAI()
		{
			return ((::JGNCIONCKNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_BOEJBNDCKAI_OFFSET))(this);
		}

		::System::Void GOHJOAGJNEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_GOHJOAGJNEI_OFFSET))(this);
		}

		::System::Void EELICFFLPGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_EELICFFLPGE_OFFSET))(this);
		}

		::System::Void IKDLOIFBMLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_IKDLOIFBMLK_OFFSET))(this);
		}

		::System::Void MGBLPOKFNLD(::AFOPMEOBPCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFOPMEOBPCM*))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_MGBLPOKFNLD_OFFSET))(this, a1);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHPBKNKBGP__ONDISPOSE_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MMHPBKNKBGP__ONTICK_OFFSET))(this, a1);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_NJBDJBHEBAN_OFFSET))(this, a1);
		}

		::System::Void PHGCJGAPNJD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_PHGCJGAPNJD_OFFSET))(this, a1);
		}

		::System::Boolean FMKBCHLBNDO(::RPG::Client::UISkillIndex a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_FMKBCHLBNDO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::NMNIJNNFPGP*>* OJCAJJMAGLK()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NMNIJNNFPGP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_OJCAJJMAGLK_OFFSET))(this);
		}

		::System::Void LLFMMFPFAKB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_LLFMMFPFAKB_OFFSET))(this, a1);
		}

		::System::Void BMKEIONMBBI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_BMKEIONMBBI_OFFSET))(this, a1);
		}

		::System::Void HMDEILJIGGA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_HMDEILJIGGA_OFFSET))(this, a1);
		}

		::System::Void ACAOANMOOJI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_ACAOANMOOJI_OFFSET))(this, a1);
		}

		::System::Void ILMPMNJDDPA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_ILMPMNJDDPA_OFFSET))(this, a1);
		}

		::System::Boolean ILPBHPBBGNA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_ILPBHPBBGNA_OFFSET))(this);
		}

		::System::Void BHBCLBBOPFL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_BHBCLBBOPFL_OFFSET))(this, a1);
		}

		::System::Void DFGLPGCNBKC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_DFGLPGCNBKC_OFFSET))(this, a1);
		}

		::System::Void EJPHKAJJCOG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_EJPHKAJJCOG_OFFSET))(this, a1);
		}

		::System::Void AGNLBPEBLCG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_AGNLBPEBLCG_OFFSET))(this, a1);
		}

		::System::Void BOOIIBEBBFC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_BOOIIBEBBFC_OFFSET))(this, a1);
		}

		::System::Void BBGGEBDCJJK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_BBGGEBDCJJK_OFFSET))(this, a1);
		}

		::System::Void BKBMANBDINI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_BKBMANBDINI_OFFSET))(this, a1);
		}

		::System::Void NFBKJLPGIDN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_NFBKJLPGIDN_OFFSET))(this, a1);
		}

		::System::Void DCBAOOMABFN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_DCBAOOMABFN_OFFSET))(this, a1);
		}

		::System::Void HJLOHNOKIPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_HJLOHNOKIPM_OFFSET))(this);
		}

		::System::Void MIJJHKOEHOG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_MIJJHKOEHOG_OFFSET))(this, a1);
		}

		::System::Void EJIODEIEAPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_EJIODEIEAPO_OFFSET))(this);
		}

		::System::Void OPHIPMAONJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_OPHIPMAONJD_OFFSET))(this);
		}

		::System::Void ILAJHKMOILG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_ILAJHKMOILG_OFFSET))(this, a1);
		}

		::System::Void CLGNNNALIBA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_CLGNNNALIBA_OFFSET))(this, a1);
		}

		::System::Void DDBBEAGFHFD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_DDBBEAGFHFD_OFFSET))(this, a1);
		}

		::System::Void DFDDJEMDDEL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_DFDDJEMDDEL_OFFSET))(this, a1);
		}

		::System::Boolean IBBBJLDKGLI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_IBBBJLDKGLI_OFFSET))(this);
		}

		::System::Boolean KHHADKOMLAN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_KHHADKOMLAN_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_KANMCJHEFJJ_OFFSET))(this, a1);
		}

		::System::Boolean EPMFMGGLLOP(::RPG::GameCore::SkillData* a1, ::RPG::Client::UISkillIndex a2, ::System::Boolean a3, ::RPG::GameCore::TurnState a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SkillData*, ::RPG::Client::UISkillIndex, ::System::Boolean, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_EPMFMGGLLOP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PECFGOMMOCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_PECFGOMMOCD_OFFSET))(this);
		}

		::System::Void EHBAPPLIHIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_EHBAPPLIHIA_OFFSET))(this);
		}

		::System::Void EELDCNJLOBJ(::RPG::Client::UISkillIndex a1, ::RPG::Client::UISkillIndex a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_EELDCNJLOBJ_OFFSET))(this, a1, a2);
		}

		::System::Boolean HMONODDINEC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_HMONODDINEC_OFFSET))(this);
		}

		::System::Boolean FCCNFDECFHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_FCCNFDECFHO_OFFSET))(this);
		}

		::System::Boolean INEDLJGDFAJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_INEDLJGDFAJ_OFFSET))(this);
		}

		::System::Int32 LJBCDPLDEGB(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_LJBCDPLDEGB_OFFSET))(this, a1);
		}

		::System::Void KMAPHAGLJNE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_KMAPHAGLJNE_OFFSET))(this, a1);
		}

		::System::Void KACBKEJCBLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_KACBKEJCBLE_OFFSET))(this);
		}

		::System::Void DCNPEMCJFFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_DCNPEMCJFFA_OFFSET))(this);
		}

		static ::RPG::GameCore::ChildSkillUILayoutType FAAILADAADH()
		{
			return ((::RPG::GameCore::ChildSkillUILayoutType(*)())((::PBYTE)hIl2Cpp + MMHPBKNKBGP_FAAILADAADH_OFFSET))();
		}

	};
