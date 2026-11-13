#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EJJDIEKLDPN.h"
#include "unitysdk/RPG/Client/SkillReadyType.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/RPG/Client/UISkillIndexMask.h"
#include "unitysdk/RPG/GameCore/BattleOperationType.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillInputType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
class CFFPEAALCPH;
class DEKDEPEBHNC;
class FDLCPHKGHME;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class SkillConfig; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class VCameraConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EANKAFJCEEH_ABGBKMFDOGH_OFFSET UNITYSDK_OFFSET(0x181E2660)
#define EANKAFJCEEH_ADHKBGLAIII_OFFSET UNITYSDK_OFFSET(0x181E55B0)
#define EANKAFJCEEH_AKNMPKDGMNC_OFFSET UNITYSDK_OFFSET(0x181DC000)
#define EANKAFJCEEH_AMFEKCMLBLG_OFFSET UNITYSDK_OFFSET(0x181E1B50)
#define EANKAFJCEEH_AMLINAIFNDB_OFFSET UNITYSDK_OFFSET(0x181E2340)
#define EANKAFJCEEH_AODHKGPCJME_OFFSET UNITYSDK_OFFSET(0x181DC4E0)
#define EANKAFJCEEH_BHBCLBBOPFL_OFFSET UNITYSDK_OFFSET(0x181E3B70)
#define EANKAFJCEEH_BIFGHFJALDJ_OFFSET UNITYSDK_OFFSET(0x181DFA20)
#define EANKAFJCEEH_CBEHANOKCLI_OFFSET UNITYSDK_OFFSET(0x181DD3E0)
#define EANKAFJCEEH_CCPNKFNNMOD_OFFSET UNITYSDK_OFFSET(0x181DEFB0)
#define EANKAFJCEEH_CDDEECMHLAF_OFFSET UNITYSDK_OFFSET(0x181E21D0)
#define EANKAFJCEEH_CILLHDBOCBJ_OFFSET UNITYSDK_OFFSET(0x181E3370)
#define EANKAFJCEEH_CNJICDDKPNH_OFFSET UNITYSDK_OFFSET(0x181DD580)
#define EANKAFJCEEH_CTOR_OFFSET UNITYSDK_OFFSET(0x181E5770)
#define EANKAFJCEEH_DCOGKELJLFM_OFFSET UNITYSDK_OFFSET(0x181E2E10)
#define EANKAFJCEEH_DDNMJNMLPJC_OFFSET UNITYSDK_OFFSET(0x181E2F50)
#define EANKAFJCEEH_DEMIDPPIOKD_OFFSET UNITYSDK_OFFSET(0x181E1CA0)
#define EANKAFJCEEH_DFGLPGCNBKC_OFFSET UNITYSDK_OFFSET(0x181E3D80)
#define EANKAFJCEEH_DHDHAMAGNOG_OFFSET UNITYSDK_OFFSET(0x181E0300)
#define EANKAFJCEEH_DICHMPOEPGA_OFFSET UNITYSDK_OFFSET(0x181DF0C0)
#define EANKAFJCEEH_DJLKAHFECPD_OFFSET UNITYSDK_OFFSET(0x181E0BE0)
#define EANKAFJCEEH_DPOIHHIAABK_OFFSET UNITYSDK_OFFSET(0x181DFAE0)
#define EANKAFJCEEH_ECAMJLLBEBO_OFFSET UNITYSDK_OFFSET(0x181DEB60)
#define EANKAFJCEEH_EEBEJCNHHOB_OFFSET UNITYSDK_OFFSET(0x181E3940)
#define EANKAFJCEEH_EEFGCLMIIJF_1_OFFSET UNITYSDK_OFFSET(0x181DD6D0)
#define EANKAFJCEEH_EEFGCLMIIJF_OFFSET UNITYSDK_OFFSET(0x181DED30)
#define EANKAFJCEEH_EFHJNHPHOCA_OFFSET UNITYSDK_OFFSET(0x181E56D0)
#define EANKAFJCEEH_EJJCDLMHLOI_OFFSET UNITYSDK_OFFSET(0x181DC7D0)
#define EANKAFJCEEH_EJPHKAJJCOG_OFFSET UNITYSDK_OFFSET(0x181E33F0)
#define EANKAFJCEEH_EMDAJOBIFCN_OFFSET UNITYSDK_OFFSET(0x181DF780)
#define EANKAFJCEEH_FELGAFPKJBD_OFFSET UNITYSDK_OFFSET(0x181DEBC0)
#define EANKAFJCEEH_FFKFBHJBOCK_OFFSET UNITYSDK_OFFSET(0x181E1150)
#define EANKAFJCEEH_FIHLOKNBBJC_OFFSET UNITYSDK_OFFSET(0x181E4890)
#define EANKAFJCEEH_FKHGKOGEAJL_OFFSET UNITYSDK_OFFSET(0x181DF2E0)
#define EANKAFJCEEH_GDCBFMCHHOK_OFFSET UNITYSDK_OFFSET(0x181E5060)
#define EANKAFJCEEH_GEOANMONPAB_OFFSET UNITYSDK_OFFSET(0x181DEF40)
#define EANKAFJCEEH_GET_ACTIVESKILLINDEX_OFFSET UNITYSDK_OFFSET(0x181E5550)
#define EANKAFJCEEH_GET_ACTIVESKILLUIINDEX_OFFSET UNITYSDK_OFFSET(0x181E5570)
#define EANKAFJCEEH_GET_CHARMLOCKTARGET_OFFSET UNITYSDK_OFFSET(0x181E5590)
#define EANKAFJCEEH_GET_SKILLLOCKDICT_OFFSET UNITYSDK_OFFSET(0x181E56B0)
#define EANKAFJCEEH_GIBPHDHJPDM_OFFSET UNITYSDK_OFFSET(0x181E4FE0)
#define EANKAFJCEEH_GIJMFONPFHO_OFFSET UNITYSDK_OFFSET(0x181DDA00)
#define EANKAFJCEEH_GPKLLKNFPIM_OFFSET UNITYSDK_OFFSET(0x181DE2D0)
#define EANKAFJCEEH_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x181DC350)
#define EANKAFJCEEH_HBPMIGDFCNC_OFFSET UNITYSDK_OFFSET(0x181E5630)
#define EANKAFJCEEH_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0x181DCFC0)
#define EANKAFJCEEH_HECDCJHGFFM_OFFSET UNITYSDK_OFFSET(0x181DFDC0)
#define EANKAFJCEEH_HGNOGNMMLCL_OFFSET UNITYSDK_OFFSET(0x181E4390)
#define EANKAFJCEEH_HMAABINBFPM_OFFSET UNITYSDK_OFFSET(0x181E49C0)
#define EANKAFJCEEH_HNFFMHAHGDN_OFFSET UNITYSDK_OFFSET(0x181E3230)
#define EANKAFJCEEH_HPJPKKBCPCD_OFFSET UNITYSDK_OFFSET(0x181E4D60)
#define EANKAFJCEEH_IFLMKEJMHOH_OFFSET UNITYSDK_OFFSET(0x181E5720)
#define EANKAFJCEEH_IOOINAKAKJC_OFFSET UNITYSDK_OFFSET(0x181E2180)
#define EANKAFJCEEH_IPNDPEBMFOD_OFFSET UNITYSDK_OFFSET(0x181DDF00)
#define EANKAFJCEEH_JCMBBKHBMKC_OFFSET UNITYSDK_OFFSET(0x181DDF50)
#define EANKAFJCEEH_JDAJMKMPENN_OFFSET UNITYSDK_OFFSET(0x181DF8E0)
#define EANKAFJCEEH_JJEDOCHLCNL_OFFSET UNITYSDK_OFFSET(0x181DEDA0)
#define EANKAFJCEEH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x181DC470)
#define EANKAFJCEEH_JNAGNKAHEEM_OFFSET UNITYSDK_OFFSET(0x181E1870)
#define EANKAFJCEEH_JPIFKOPJBNE_OFFSET UNITYSDK_OFFSET(0x181E1DF0)
#define EANKAFJCEEH_KCEALIEBCKN_OFFSET UNITYSDK_OFFSET(0x181E5190)
#define EANKAFJCEEH_KCJKLDLJJJD_OFFSET UNITYSDK_OFFSET(0x181DE150)
#define EANKAFJCEEH_KDFPCBNBEBC_OFFSET UNITYSDK_OFFSET(0x181E0690)
#define EANKAFJCEEH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x181DBF10)
#define EANKAFJCEEH_LEAHIKMACAL_OFFSET UNITYSDK_OFFSET(0x181E3280)
#define EANKAFJCEEH_LJCPHEMJHOC_OFFSET UNITYSDK_OFFSET(0x181E2E60)
#define EANKAFJCEEH_LKHGPMECGCL_OFFSET UNITYSDK_OFFSET(0x181DC6D0)
#define EANKAFJCEEH_LNBCGKAFKBI_OFFSET UNITYSDK_OFFSET(0x181E3B20)
#define EANKAFJCEEH_MAFJEJJLKJE_OFFSET UNITYSDK_OFFSET(0x181E3040)
#define EANKAFJCEEH_MKOKHPABLEN_OFFSET UNITYSDK_OFFSET(0x181E2480)
#define EANKAFJCEEH_MMGCENIJLMN_OFFSET UNITYSDK_OFFSET(0x181E10D0)
#define EANKAFJCEEH_MPMEFEPFBCE_OFFSET UNITYSDK_OFFSET(0x181E3A70)
#define EANKAFJCEEH_NOIGBBJDDFB_OFFSET UNITYSDK_OFFSET(0x181E2040)
#define EANKAFJCEEH_NPCMKMICIPH_OFFSET UNITYSDK_OFFSET(0x181E55F0)
#define EANKAFJCEEH_OCGEIAOACAB_OFFSET UNITYSDK_OFFSET(0x181E4C00)
#define EANKAFJCEEH_OEBNHFHNCBD_OFFSET UNITYSDK_OFFSET(0x181DE1D0)
#define EANKAFJCEEH_OEGBHGKMGHB_OFFSET UNITYSDK_OFFSET(0x181DD040)
#define EANKAFJCEEH_OIKFAEHANJM_OFFSET UNITYSDK_OFFSET(0x181E4440)
#define EANKAFJCEEH_OJIEFKCIGAJ_OFFSET UNITYSDK_OFFSET(0x181DF620)
#define EANKAFJCEEH_OLNDMANFKGF_OFFSET UNITYSDK_OFFSET(0x181E1420)
#define EANKAFJCEEH_PAJGEIIMGEJ_OFFSET UNITYSDK_OFFSET(0x181E4B70)
#define EANKAFJCEEH_PBBEINJGAOE_OFFSET UNITYSDK_OFFSET(0x181DC080)
#define EANKAFJCEEH_PBEMNDLFDDI_OFFSET UNITYSDK_OFFSET(0x181DE400)
#define EANKAFJCEEH_PFLPIODIHPD_OFFSET UNITYSDK_OFFSET(0x181DFA70)
#define EANKAFJCEEH_PNENFNKDIFL_OFFSET UNITYSDK_OFFSET(0x181DF010)
#define EANKAFJCEEH_POKALAINLIJ_1_OFFSET UNITYSDK_OFFSET(0x181DF1C0)
#define EANKAFJCEEH_POKALAINLIJ_OFFSET UNITYSDK_OFFSET(0x181DF240)
#define EANKAFJCEEH_SET_ACTIVESKILLINDEX_OFFSET UNITYSDK_OFFSET(0x181E5560)
#define EANKAFJCEEH_SET_ACTIVESKILLUIINDEX_OFFSET UNITYSDK_OFFSET(0x181E5580)
#define EANKAFJCEEH_SET_CHARMLOCKTARGET_OFFSET UNITYSDK_OFFSET(0x181E55A0)
#define EANKAFJCEEH_SET_SKILLLOCKDICT_OFFSET UNITYSDK_OFFSET(0x181E56C0)
#define EANKAFJCEEH___PLAYSKILLREADYEFFECT_B__61_0_OFFSET UNITYSDK_OFFSET(0x181E58A0)

inline static constexpr unsigned int EANKAFJCEEH_TypeDefinitionIndex = 74035;

	class EANKAFJCEEH : public ::System::Object
	{
	public:
		::RPG::GameCore::SkillData* OCOIDGHBAEH; // 0x10
		::RPG::GameCore::CharacterDataComponent* HANEKMPLHHP; // 0x18
		::CFFPEAALCPH* NCABPAPLJCI; // 0x20
		::RPG::GameCore::SkillData* GGAEMPPOJOO; // 0x28
		::System::String* ECAPACACPHI; // 0x30
		::RPG::Client::MonoEffect* KBEEJCPJJLI; // 0x38
		::RPG::GameCore::EventManager* EBOCGAJBGPG; // 0x40
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* HPPDNLHIHIG; // 0x48
		::System::Collections::Generic::List_1<::EJJDIEKLDPN>* NLNLJFNEHJN; // 0x50
		::RPG::GameCore::LevelUIComponent* CFKHNPGEAJA; // 0x58
		::RPG::GameCore::SkillData* LPHPLKEOPKN; // 0x60
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* EDDCNFBGELN; // 0x68
		::RPG::GameCore::SkillCharacterComponent* DLKGKDBPHOH; // 0x70
		::CFFPEAALCPH* PLCDBCDLGMM; // 0x78
		::RPG::GameCore::GameEntity* OECBECNAFEC; // 0x80
		::System::String* MGKGLNNEPFG; // 0x88
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x90
		::RPG::GameCore::GameEntity* BOIFNBDCMFH; // 0x98
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::FDLCPHKGHME*>*>* _SkillLockDict_k__BackingField; // 0xA0
		::RPG::Client::UISkillIndex _ActiveSkillUIIndex_k__BackingField; // 0xA8
		::System::Single IOBEPLFJBNM; // 0xAC
		::RPG::Client::UISkillIndex DKIGLCPJIBJ; // 0xB0
		::RPG::Client::UISkillIndexMask EMPDINCFOLD; // 0xB4
		::System::Single BHKMFCJIPKI; // 0xB8
		::System::Single BACKCBGEFFP; // 0xBC
		::System::Boolean OMMGEHGLGKA; // 0xC0
		::System::Boolean BLJDFHECHHI; // 0xC1
		::System::Boolean _CharmLockTarget_k__BackingField; // 0xC2
		::System::Boolean DGNLDNGNNJG; // 0xC3
		::System::Single MKMNJPCPIBH; // 0xC4
		::RPG::Client::UISkillIndex GOKPFFCCFFE; // 0xC8
		::System::Single DIAKBJGOILK; // 0xCC
		::System::Int32 LNPHGDOJCGP; // 0xD0
		::System::Int32 _ActiveSkillIndex_k__BackingField; // 0xD4
		::System::UInt32 NHLEFDLGHMJ; // 0xD8
		::System::Single CNPALGBHBNL; // 0xDC
		// static const ::System::Object CJGHKIMLPGA; // 0x0
		// static const ::System::Object HDEENKLELFB; // 0x0
		// static const ::System::Object KCPCKEDBEJP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::BattleInstance* a1, ::RPG::GameCore::LevelUIComponent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*, ::RPG::GameCore::LevelUIComponent*))((::PBYTE)hIl2Cpp + EANKAFJCEEH_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EANKAFJCEEH_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HCCKBPDFINA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EANKAFJCEEH_HCCKBPDFINA_OFFSET))(this, a1);
		}

		::System::Void OEGBHGKMGHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_OEGBHGKMGHB_OFFSET))(this);
		}

		::System::Void JCMBBKHBMKC(::RPG::Client::UISkillIndex a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + EANKAFJCEEH_JCMBBKHBMKC_OFFSET))(this, a1);
		}

		::System::Void ECAMJLLBEBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_ECAMJLLBEBO_OFFSET))(this);
		}

		::System::Void FELGAFPKJBD(::RPG::Client::UISkillIndex a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + EANKAFJCEEH_FELGAFPKJBD_OFFSET))(this, a1);
		}

		::System::Void JJEDOCHLCNL(::RPG::Client::UISkillIndex a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + EANKAFJCEEH_JJEDOCHLCNL_OFFSET))(this, a1);
		}

		::System::Void CCPNKFNNMOD(::RPG::Client::UISkillIndex a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + EANKAFJCEEH_CCPNKFNNMOD_OFFSET))(this, a1);
		}

		::System::Void PNENFNKDIFL(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + EANKAFJCEEH_PNENFNKDIFL_OFFSET))(this, a1, a2);
		}

		::System::Void POKALAINLIJ(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + EANKAFJCEEH_POKALAINLIJ_OFFSET))(this, a1, a2);
		}

		::System::Void POKALAINLIJ_1(::RPG::Client::UISkillIndex a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex, ::System::Boolean))((::PBYTE)hIl2Cpp + EANKAFJCEEH_POKALAINLIJ_1_OFFSET))(this, a1, a2);
		}

		::System::Void FKHGKOGEAJL(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + EANKAFJCEEH_FKHGKOGEAJL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void PBEMNDLFDDI(::RPG::Client::UISkillIndex a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + EANKAFJCEEH_PBEMNDLFDDI_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void DJLKAHFECPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_DJLKAHFECPD_OFFSET))(this);
		}

		::DEKDEPEBHNC* OLNDMANFKGF(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::BattleOperationType a3, ::System::Boolean a4, ::RPG::GameCore::GameEntity* a5, ::System::Int32 a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Boolean a9, ::Il2CppArray<::System::String*>* a10)
		{
			return ((::DEKDEPEBHNC*(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::BattleOperationType, ::System::Boolean, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EANKAFJCEEH_OLNDMANFKGF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::RPG::GameCore::SkillConfig* AMFEKCMLBLG()
		{
			return ((::RPG::GameCore::SkillConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_AMFEKCMLBLG_OFFSET))(this);
		}

		::RPG::GameCore::SkillData* DEMIDPPIOKD()
		{
			return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_DEMIDPPIOKD_OFFSET))(this);
		}

		::System::Boolean JPIFKOPJBNE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_JPIFKOPJBNE_OFFSET))(this);
		}

		::System::Boolean CBEHANOKCLI(::RPG::Client::UISkillIndex a1, ::RPG::GameCore::GameEntity* a2, ::RPG::Client::TextID a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UISkillIndex, ::RPG::GameCore::GameEntity*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_CBEHANOKCLI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GEOANMONPAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_GEOANMONPAB_OFFSET))(this);
		}

		::System::Void IOOINAKAKJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_IOOINAKAKJC_OFFSET))(this);
		}

		::System::Boolean AMLINAIFNDB(::RPG::Client::UISkillIndex a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + EANKAFJCEEH_AMLINAIFNDB_OFFSET))(this, a1);
		}

		::System::Boolean EEFGCLMIIJF(::RPG::Client::UISkillIndex a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + EANKAFJCEEH_EEFGCLMIIJF_OFFSET))(this, a1);
		}

		::System::Boolean EEFGCLMIIJF_1(::RPG::GameCore::SkillInputType a1, ::RPG::Client::UISkillIndex a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SkillInputType, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + EANKAFJCEEH_EEFGCLMIIJF_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean ABGBKMFDOGH(::RPG::Client::UISkillIndexMask a1, ::RPG::GameCore::SkillInputType a2, ::System::Boolean a3, ::System::Boolean a4, ::RPG::Client::UISkillIndex a5, ::System::Single a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UISkillIndexMask, ::RPG::GameCore::SkillInputType, ::System::Boolean, ::System::Boolean, ::RPG::Client::UISkillIndex, ::System::Single))((::PBYTE)hIl2Cpp + EANKAFJCEEH_ABGBKMFDOGH_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean LJCPHEMJHOC(::Il2CppArray<::RPG::GameCore::ControlSkillType>* a1, ::RPG::GameCore::SkillInputType a2, ::RPG::GameCore::ControlSkillType a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ControlSkillType>*, ::RPG::GameCore::SkillInputType, ::RPG::GameCore::ControlSkillType, ::System::Single))((::PBYTE)hIl2Cpp + EANKAFJCEEH_LJCPHEMJHOC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean DDNMJNMLPJC(::Il2CppArray<::RPG::GameCore::ControlSkillType>* a1, ::RPG::GameCore::SkillInputType a2, ::RPG::GameCore::ControlSkillType a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ControlSkillType>*, ::RPG::GameCore::SkillInputType, ::RPG::GameCore::ControlSkillType, ::System::Single))((::PBYTE)hIl2Cpp + EANKAFJCEEH_DDNMJNMLPJC_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::GameEntity* MAFJEJJLKJE()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_MAFJEJJLKJE_OFFSET))(this);
		}

		::System::Void AKNMPKDGMNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_AKNMPKDGMNC_OFFSET))(this);
		}

		::System::Void PBBEINJGAOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_PBBEINJGAOE_OFFSET))(this);
		}

		::System::Boolean KCJKLDLJJJD(::RPG::Client::UISkillIndex a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + EANKAFJCEEH_KCJKLDLJJJD_OFFSET))(this, a1);
		}

		::System::Boolean OEBNHFHNCBD(::RPG::Client::UISkillIndex a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + EANKAFJCEEH_OEBNHFHNCBD_OFFSET))(this, a1);
		}

		::System::Boolean CNJICDDKPNH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_CNJICDDKPNH_OFFSET))(this);
		}

		::System::Void EJJCDLMHLOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_EJJCDLMHLOI_OFFSET))(this);
		}

		::System::Void LEAHIKMACAL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EANKAFJCEEH_LEAHIKMACAL_OFFSET))(this, a1);
		}

		::System::Void CILLHDBOCBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_CILLHDBOCBJ_OFFSET))(this);
		}

		::System::Void EJPHKAJJCOG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EANKAFJCEEH_EJPHKAJJCOG_OFFSET))(this, a1);
		}

		::System::Void EEBEJCNHHOB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EANKAFJCEEH_EEBEJCNHHOB_OFFSET))(this, a1);
		}

		::System::Void MPMEFEPFBCE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EANKAFJCEEH_MPMEFEPFBCE_OFFSET))(this, a1);
		}

		::System::Void LNBCGKAFKBI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EANKAFJCEEH_LNBCGKAFKBI_OFFSET))(this, a1);
		}

		::System::Void BHBCLBBOPFL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EANKAFJCEEH_BHBCLBBOPFL_OFFSET))(this, a1);
		}

		::System::Void DFGLPGCNBKC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EANKAFJCEEH_DFGLPGCNBKC_OFFSET))(this, a1);
		}

		::System::Void HGNOGNMMLCL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EANKAFJCEEH_HGNOGNMMLCL_OFFSET))(this, a1);
		}

		::System::Void FIHLOKNBBJC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EANKAFJCEEH_FIHLOKNBBJC_OFFSET))(this, a1);
		}

		::System::Void HMAABINBFPM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EANKAFJCEEH_HMAABINBFPM_OFFSET))(this, a1);
		}

		::System::Void CDDEECMHLAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_CDDEECMHLAF_OFFSET))(this);
		}

		::System::Void LKHGPMECGCL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EANKAFJCEEH_LKHGPMECGCL_OFFSET))(this, a1);
		}

		::System::Void IPNDPEBMFOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_IPNDPEBMFOD_OFFSET))(this);
		}

		::System::Void FFKFBHJBOCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_FFKFBHJBOCK_OFFSET))(this);
		}

		::DEKDEPEBHNC* JNAGNKAHEEM(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3, ::RPG::GameCore::GameEntity* a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::Il2CppArray<::System::String*>* a9)
		{
			return ((::DEKDEPEBHNC*(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EANKAFJCEEH_JNAGNKAHEEM_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void AODHKGPCJME(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EANKAFJCEEH_AODHKGPCJME_OFFSET))(this, a1);
		}

		::System::Void GIJMFONPFHO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EANKAFJCEEH_GIJMFONPFHO_OFFSET))(this, a1);
		}

		::System::Boolean BIFGHFJALDJ(::RPG::Client::UISkillIndex a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + EANKAFJCEEH_BIFGHFJALDJ_OFFSET))(this, a1);
		}

		::System::Boolean EMDAJOBIFCN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_EMDAJOBIFCN_OFFSET))(this);
		}

		::System::Boolean DPOIHHIAABK(::RPG::Client::UISkillIndex a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UISkillIndex, ::System::Boolean))((::PBYTE)hIl2Cpp + EANKAFJCEEH_DPOIHHIAABK_OFFSET))(this, a1, a2);
		}

		::System::Void PFLPIODIHPD(::RPG::GameCore::SkillData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + EANKAFJCEEH_PFLPIODIHPD_OFFSET))(this, a1);
		}

		::System::Void JDAJMKMPENN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_JDAJMKMPENN_OFFSET))(this);
		}

		::System::Void HECDCJHGFFM(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + EANKAFJCEEH_HECDCJHGFFM_OFFSET))(this, a1, a2);
		}

		::System::Void OIKFAEHANJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_OIKFAEHANJM_OFFSET))(this);
		}

		::System::Void HPJPKKBCPCD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EANKAFJCEEH_HPJPKKBCPCD_OFFSET))(this, a1);
		}

		::System::Void MMGCENIJLMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_MMGCENIJLMN_OFFSET))(this);
		}

		::RPG::Client::SkillReadyType GIBPHDHJPDM(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::SkillReadyType(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EANKAFJCEEH_GIBPHDHJPDM_OFFSET))(this, a1, a2);
		}

		::System::Void DHDHAMAGNOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_DHDHAMAGNOG_OFFSET))(this);
		}

		::System::Void KDFPCBNBEBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_KDFPCBNBEBC_OFFSET))(this);
		}

		::System::Void KCEALIEBCKN(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::ControlSkillType a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ControlSkillType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + EANKAFJCEEH_KCEALIEBCKN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Nullable_1<::RPG::MVector3> GDCBFMCHHOK(::RPG::GameCore::VCameraConfig* a1)
		{
			return ((::System::Nullable_1<::RPG::MVector3>(*)(::PVOID, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + EANKAFJCEEH_GDCBFMCHHOK_OFFSET))(this, a1);
		}

		::System::Boolean OJIEFKCIGAJ(::RPG::Client::UISkillIndex a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + EANKAFJCEEH_OJIEFKCIGAJ_OFFSET))(this, a1);
		}

		::RPG::Client::UISkillIndex DICHMPOEPGA(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::Client::UISkillIndex(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EANKAFJCEEH_DICHMPOEPGA_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::SkillData* GPKLLKNFPIM(::RPG::Client::UISkillIndex a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::GameCore::SkillData*(*)(::PVOID, ::RPG::Client::UISkillIndex, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EANKAFJCEEH_GPKLLKNFPIM_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::ControlSkillType NOIGBBJDDFB(::RPG::Client::UISkillIndex a1)
		{
			return ((::RPG::GameCore::ControlSkillType(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + EANKAFJCEEH_NOIGBBJDDFB_OFFSET))(this, a1);
		}

		::System::Int32 get_ActiveSkillIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_GET_ACTIVESKILLINDEX_OFFSET))(this);
		}

		::System::Void set_ActiveSkillIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EANKAFJCEEH_SET_ACTIVESKILLINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::UISkillIndex get_ActiveSkillUIIndex()
		{
			return ((::RPG::Client::UISkillIndex(*)(::PVOID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_GET_ACTIVESKILLUIINDEX_OFFSET))(this);
		}

		::System::Void set_ActiveSkillUIIndex(::RPG::Client::UISkillIndex a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + EANKAFJCEEH_SET_ACTIVESKILLUIINDEX_OFFSET))(this, a1);
		}

		::System::Boolean get_CharmLockTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_GET_CHARMLOCKTARGET_OFFSET))(this);
		}

		::System::Void set_CharmLockTarget(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EANKAFJCEEH_SET_CHARMLOCKTARGET_OFFSET))(this, a1);
		}

		::RPG::GameCore::SkillData* ADHKBGLAIII()
		{
			return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_ADHKBGLAIII_OFFSET))(this);
		}

		::RPG::GameCore::SkillData* NPCMKMICIPH()
		{
			return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_NPCMKMICIPH_OFFSET))(this);
		}

		::RPG::Client::UISkillIndex HBPMIGDFCNC()
		{
			return ((::RPG::Client::UISkillIndex(*)(::PVOID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_HBPMIGDFCNC_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::FDLCPHKGHME*>*>* get_SkillLockDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::FDLCPHKGHME*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_GET_SKILLLOCKDICT_OFFSET))(this);
		}

		::System::Void set_SkillLockDict(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::FDLCPHKGHME*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::FDLCPHKGHME*>*>*))((::PBYTE)hIl2Cpp + EANKAFJCEEH_SET_SKILLLOCKDICT_OFFSET))(this, a1);
		}

		::System::Boolean DCOGKELJLFM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_DCOGKELJLFM_OFFSET))(this);
		}

		::System::Void PAJGEIIMGEJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EANKAFJCEEH_PAJGEIIMGEJ_OFFSET))(this, a1);
		}

		::RPG::Client::UISkillIndexMask EFHJNHPHOCA()
		{
			return ((::RPG::Client::UISkillIndexMask(*)(::PVOID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_EFHJNHPHOCA_OFFSET))(this);
		}

		::System::Void IFLMKEJMHOH(::RPG::Client::UISkillIndexMask a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndexMask))((::PBYTE)hIl2Cpp + EANKAFJCEEH_IFLMKEJMHOH_OFFSET))(this, a1);
		}

		::RPG::Client::UISkillIndexMask MKOKHPABLEN()
		{
			return ((::RPG::Client::UISkillIndexMask(*)(::PVOID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_MKOKHPABLEN_OFFSET))(this);
		}

		::System::Boolean HNFFMHAHGDN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EANKAFJCEEH_HNFFMHAHGDN_OFFSET))(this);
		}

		::System::Void OCGEIAOACAB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EANKAFJCEEH_OCGEIAOACAB_OFFSET))(this, a1);
		}

		::System::Void __PlaySkillReadyEffect_b__61_0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + EANKAFJCEEH___PLAYSKILLREADYEFFECT_B__61_0_OFFSET))(this, a1, a2);
		}

	};
