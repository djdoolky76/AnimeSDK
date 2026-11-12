#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/FightStatus.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/LevelStateType.h"
#include "unitysdk/RPG/Client/LittleGameShare/MsgRetcode.h"
#include "unitysdk/RPG/GameCore/CakeRaceRegionTag.h"
#include "unitysdk/System/Object.h"
class BAHPIHGCJJJ;
class DPCIMIHKCGG;
class HONBPDEJDCC;
class IFBFJDCECML;
class JLJOBFCIBBC;
class NFAHODNHEKK;
class NGJLHMAHIDD;
class NNDMMMHDGIH;
class NONKABLNHEM;
class PBGNKMMDBGD;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Common { template <typename T> class StateMachine_1; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NFAHODNHEKK_ACAOCBOFJFH_OFFSET UNITYSDK_OFFSET(0x1D90DF20)
#define NFAHODNHEKK_AEHPIDLBEJD_OFFSET UNITYSDK_OFFSET(0x1D90F440)
#define NFAHODNHEKK_AIIIPHFLIFN_OFFSET UNITYSDK_OFFSET(0x1D90FD10)
#define NFAHODNHEKK_ANHLPJKFBDK_OFFSET UNITYSDK_OFFSET(0x1D911660)
#define NFAHODNHEKK_BHDKGAGPAGI_OFFSET UNITYSDK_OFFSET(0x1D912180)
#define NFAHODNHEKK_BIJMNGNGNHG_OFFSET UNITYSDK_OFFSET(0x1D914300)
#define NFAHODNHEKK_BMOLJGBLGFP_OFFSET UNITYSDK_OFFSET(0x1D911DC0)
#define NFAHODNHEKK_CFJHIKHKHMI_OFFSET UNITYSDK_OFFSET(0x1D90E670)
#define NFAHODNHEKK_CFKJHJBHJMA_OFFSET UNITYSDK_OFFSET(0x1D913CF0)
#define NFAHODNHEKK_CJAONKOMOCJ_OFFSET UNITYSDK_OFFSET(0x1D9113D0)
#define NFAHODNHEKK_CLFIAHJFOCD_OFFSET UNITYSDK_OFFSET(0x1D9143D0)
#define NFAHODNHEKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D90DA30)
#define NFAHODNHEKK_DGGPMDHEBFJ_OFFSET UNITYSDK_OFFSET(0x1D914360)
#define NFAHODNHEKK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D90DAB0)
#define NFAHODNHEKK_DLFBIMGPMHM_OFFSET UNITYSDK_OFFSET(0x1D9144D0)
#define NFAHODNHEKK_DLNHICDHPNA_OFFSET UNITYSDK_OFFSET(0x1D9144C0)
#define NFAHODNHEKK_DNHGOJJOOFG_OFFSET UNITYSDK_OFFSET(0x1D913990)
#define NFAHODNHEKK_EAOPHIAGIFH_OFFSET UNITYSDK_OFFSET(0x1D908180)
#define NFAHODNHEKK_EFALLIPOJIH_OFFSET UNITYSDK_OFFSET(0x1D9144E0)
#define NFAHODNHEKK_EGEBAONLDFA_OFFSET UNITYSDK_OFFSET(0x1D90DE10)
#define NFAHODNHEKK_FBDBBICKMFA_OFFSET UNITYSDK_OFFSET(0x1D914430)
#define NFAHODNHEKK_FECGCDKKDLJ_OFFSET UNITYSDK_OFFSET(0x1D90DEA0)
#define NFAHODNHEKK_FHPCGFEOCJA_OFFSET UNITYSDK_OFFSET(0x1D90F0D0)
#define NFAHODNHEKK_FPOOHLBPNEB_OFFSET UNITYSDK_OFFSET(0x1D9101A0)
#define NFAHODNHEKK_GEFOOHHOFDM_OFFSET UNITYSDK_OFFSET(0x1D912290)
#define NFAHODNHEKK_GET_CURSECTIONID_OFFSET UNITYSDK_OFFSET(0x1D914440)
#define NFAHODNHEKK_GET_MAXSECTIONID_OFFSET UNITYSDK_OFFSET(0x1D914460)
#define NFAHODNHEKK_GET_SECTIONDATAS_OFFSET UNITYSDK_OFFSET(0x1D914480)
#define NFAHODNHEKK_GET__FIGHTSTATUS_OFFSET UNITYSDK_OFFSET(0x1D9144A0)
#define NFAHODNHEKK_GNFJLPJJLBE_OFFSET UNITYSDK_OFFSET(0x1D912600)
#define NFAHODNHEKK_HJNINABBBFF_OFFSET UNITYSDK_OFFSET(0x1D9141C0)
#define NFAHODNHEKK_HPFJBECCCOK_OFFSET UNITYSDK_OFFSET(0x1D910FE0)
#define NFAHODNHEKK_IAEKDNGGBEN_OFFSET UNITYSDK_OFFSET(0x1D913FB0)
#define NFAHODNHEKK_IFCAEOMDBEF_OFFSET UNITYSDK_OFFSET(0x1D913EC0)
#define NFAHODNHEKK_JDINHIBPJJA_OFFSET UNITYSDK_OFFSET(0x1D911550)
#define NFAHODNHEKK_JKIKLOBBILC_OFFSET UNITYSDK_OFFSET(0x1D90DB00)
#define NFAHODNHEKK_KKOGKINJNOA_OFFSET UNITYSDK_OFFSET(0x1D90DD40)
#define NFAHODNHEKK_KLDLHKOMBMF_OFFSET UNITYSDK_OFFSET(0x1D910760)
#define NFAHODNHEKK_KOMNACLOHCE_OFFSET UNITYSDK_OFFSET(0x1D90DC20)
#define NFAHODNHEKK_LDJDADHBJPF_OFFSET UNITYSDK_OFFSET(0x1D911A80)
#define NFAHODNHEKK_LIKHFMMAEDF_OFFSET UNITYSDK_OFFSET(0x1D910420)
#define NFAHODNHEKK_NFJAMGFCHMJ_OFFSET UNITYSDK_OFFSET(0x1D90DB70)
#define NFAHODNHEKK_OFHPABCNHDF_OFFSET UNITYSDK_OFFSET(0x1D9126E0)
#define NFAHODNHEKK_PGNCHMOCKNH_OFFSET UNITYSDK_OFFSET(0x1D90F130)
#define NFAHODNHEKK_PPNHMKGEEEO_OFFSET UNITYSDK_OFFSET(0x1D90FFA0)
#define NFAHODNHEKK_SET_CURSECTIONID_OFFSET UNITYSDK_OFFSET(0x1D914450)
#define NFAHODNHEKK_SET_MAXSECTIONID_OFFSET UNITYSDK_OFFSET(0x1D914470)
#define NFAHODNHEKK_SET_SECTIONDATAS_OFFSET UNITYSDK_OFFSET(0x1D914490)
#define NFAHODNHEKK_SET__FIGHTSTATUS_OFFSET UNITYSDK_OFFSET(0x1D9144B0)
#define NFAHODNHEKK__ISALLONLINEPLAYERVOTECONFIRMED_B__18_0_OFFSET UNITYSDK_OFFSET(0x1D9145D0)
#define NFAHODNHEKK__ISALLPLAYERBETFINISHED_B__9_0_OFFSET UNITYSDK_OFFSET(0x1D9144F0)
#define NFAHODNHEKK___TRYADDSPECIALEFFECTFORVOTE_B__15_1_OFFSET UNITYSDK_OFFSET(0x1D914560)

inline static constexpr unsigned int NFAHODNHEKK_TypeDefinitionIndex = 38244;

	class NFAHODNHEKK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::BAHPIHGCJJJ*>* _SectionDatas_k__BackingField; // 0x10
		::RPG::Common::StateMachine_1<::NFAHODNHEKK*>* FKIBGPJNCIJ; // 0x18
		::PBGNKMMDBGD* FKGGBEAELPE; // 0x20
		::System::UInt32 _MaxSectionId_k__BackingField; // 0x28
		::System::UInt32 _CurSectionId_k__BackingField; // 0x2C
		::RPG::Client::LittleGameShare::CakeRaceCore::FightStatus __FightStatus_k__BackingField; // 0x30
		::System::Void _ctor(::PBGNKMMDBGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + NFAHODNHEKK_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAHODNHEKK_DISPOSE_OFFSET))(this);
		}

		::System::Void JKIKLOBBILC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAHODNHEKK_JKIKLOBBILC_OFFSET))(this);
		}

		::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType NFJAMGFCHMJ()
		{
			return ((::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAHODNHEKK_NFJAMGFCHMJ_OFFSET))(this);
		}

		::System::Boolean KOMNACLOHCE(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFAHODNHEKK_KOMNACLOHCE_OFFSET))(this, a1);
		}

		::System::UInt32 KKOGKINJNOA(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFAHODNHEKK_KKOGKINJNOA_OFFSET))(this, a1);
		}

		::IFBFJDCECML* FECGCDKKDLJ(::System::UInt32 a1)
		{
			return ((::IFBFJDCECML*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFAHODNHEKK_FECGCDKKDLJ_OFFSET))(this, a1);
		}

		::System::Void ACAOCBOFJFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAHODNHEKK_ACAOCBOFJFH_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Tuple_2<::System::UInt32, ::System::UInt32>*>* CFJHIKHKHMI(::System::Double a1, ::System::Object* a2)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Tuple_2<::System::UInt32, ::System::UInt32>*>*(*)(::PVOID, ::System::Double, ::System::Object*))((::PBYTE)hIl2Cpp + NFAHODNHEKK_CFJHIKHKHMI_OFFSET))(this, a1, a2);
		}

		::System::Boolean PGNCHMOCKNH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAHODNHEKK_PGNCHMOCKNH_OFFSET))(this);
		}

		::System::Int32 EAOPHIAGIFH(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFAHODNHEKK_EAOPHIAGIFH_OFFSET))(this, a1);
		}

		::System::Void AEHPIDLBEJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAHODNHEKK_AEHPIDLBEJD_OFFSET))(this);
		}

		::System::Boolean AIIIPHFLIFN(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NFAHODNHEKK_AIIIPHFLIFN_OFFSET))(this, a1, a2);
		}

		::System::Void PPNHMKGEEEO(::System::UInt32 a1, ::System::Object* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Object*, ::System::UInt32))((::PBYTE)hIl2Cpp + NFAHODNHEKK_PPNHMKGEEEO_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean FPOOHLBPNEB(::System::UInt32 a1, ::System::Object* a2, ::System::Object* a3, ::System::Boolean a4, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::CakeRaceRegionTag>* a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Object*, ::System::Object*, ::System::Boolean, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::CakeRaceRegionTag>*))((::PBYTE)hIl2Cpp + NFAHODNHEKK_FPOOHLBPNEB_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void LIKHFMMAEDF(::System::Object* a1, ::System::Object* a2, ::System::Boolean a3, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::CakeRaceRegionTag>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Boolean, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::CakeRaceRegionTag>*))((::PBYTE)hIl2Cpp + NFAHODNHEKK_LIKHFMMAEDF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KLDLHKOMBMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAHODNHEKK_KLDLHKOMBMF_OFFSET))(this);
		}

		::System::Void HPFJBECCCOK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFAHODNHEKK_HPFJBECCCOK_OFFSET))(this, a1);
		}

		::System::Boolean JDINHIBPJJA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAHODNHEKK_JDINHIBPJJA_OFFSET))(this);
		}

		::System::Void ANHLPJKFBDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAHODNHEKK_ANHLPJKFBDK_OFFSET))(this);
		}

		::System::Void BMOLJGBLGFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAHODNHEKK_BMOLJGBLGFP_OFFSET))(this);
		}

		::System::Void BHDKGAGPAGI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NFAHODNHEKK_BHDKGAGPAGI_OFFSET))(this, a1);
		}

		::System::Void GEFOOHHOFDM(::System::UInt32 a1, ::System::Int32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + NFAHODNHEKK_GEFOOHHOFDM_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GNFJLPJJLBE(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + NFAHODNHEKK_GNFJLPJJLBE_OFFSET))(this, a1, a2);
		}

		::System::Void OFHPABCNHDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAHODNHEKK_OFHPABCNHDF_OFFSET))(this);
		}

		::RPG::Client::LittleGameShare::MsgRetcode DNHGOJJOOFG(::System::UInt32 a1, ::JLJOBFCIBBC* a2, ::DPCIMIHKCGG* a3)
		{
			return ((::RPG::Client::LittleGameShare::MsgRetcode(*)(::PVOID, ::System::UInt32, ::JLJOBFCIBBC*, ::DPCIMIHKCGG*))((::PBYTE)hIl2Cpp + NFAHODNHEKK_DNHGOJJOOFG_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::LittleGameShare::MsgRetcode CFKJHJBHJMA(::System::UInt32 a1, ::NONKABLNHEM* a2, ::NNDMMMHDGIH* a3)
		{
			return ((::RPG::Client::LittleGameShare::MsgRetcode(*)(::PVOID, ::System::UInt32, ::NONKABLNHEM*, ::NNDMMMHDGIH*))((::PBYTE)hIl2Cpp + NFAHODNHEKK_CFKJHJBHJMA_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::LittleGameShare::MsgRetcode IFCAEOMDBEF(::System::UInt32 a1)
		{
			return ((::RPG::Client::LittleGameShare::MsgRetcode(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFAHODNHEKK_IFCAEOMDBEF_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* LDJDADHBJPF(::System::Object* a1)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NFAHODNHEKK_LDJDADHBJPF_OFFSET))(this, a1);
		}

		::System::UInt32 CJAONKOMOCJ(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + NFAHODNHEKK_CJAONKOMOCJ_OFFSET))(this, a1, a2);
		}

		::System::Void IAEKDNGGBEN(::Google::Protobuf::Collections::RepeatedField_1<::HONBPDEJDCC*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::HONBPDEJDCC*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + NFAHODNHEKK_IAEKDNGGBEN_OFFSET))(this, a1, a2);
		}

		::NGJLHMAHIDD* HJNINABBBFF(::System::UInt32 a1)
		{
			return ((::NGJLHMAHIDD*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFAHODNHEKK_HJNINABBBFF_OFFSET))(this, a1);
		}

		::BAHPIHGCJJJ* EGEBAONLDFA()
		{
			return ((::BAHPIHGCJJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAHODNHEKK_EGEBAONLDFA_OFFSET))(this);
		}

		::System::UInt32 BIJMNGNGNHG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAHODNHEKK_BIJMNGNGNHG_OFFSET))(this);
		}

		::System::Boolean DGGPMDHEBFJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAHODNHEKK_DGGPMDHEBFJ_OFFSET))(this);
		}

		::System::Boolean CLFIAHJFOCD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAHODNHEKK_CLFIAHJFOCD_OFFSET))(this);
		}

		::System::Boolean FBDBBICKMFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAHODNHEKK_FBDBBICKMFA_OFFSET))(this);
		}

		::IFBFJDCECML* FHPCGFEOCJA()
		{
			return ((::IFBFJDCECML*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAHODNHEKK_FHPCGFEOCJA_OFFSET))(this);
		}

		::System::UInt32 get_CurSectionId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAHODNHEKK_GET_CURSECTIONID_OFFSET))(this);
		}

		::System::Void set_CurSectionId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFAHODNHEKK_SET_CURSECTIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxSectionId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAHODNHEKK_GET_MAXSECTIONID_OFFSET))(this);
		}

		::System::Void set_MaxSectionId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFAHODNHEKK_SET_MAXSECTIONID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::BAHPIHGCJJJ*>* get_SectionDatas()
		{
			return ((::System::Collections::Generic::List_1<::BAHPIHGCJJJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAHODNHEKK_GET_SECTIONDATAS_OFFSET))(this);
		}

		::System::Void set_SectionDatas(::System::Collections::Generic::List_1<::BAHPIHGCJJJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BAHPIHGCJJJ*>*))((::PBYTE)hIl2Cpp + NFAHODNHEKK_SET_SECTIONDATAS_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGameShare::CakeRaceCore::FightStatus get__FightStatus()
		{
			return ((::RPG::Client::LittleGameShare::CakeRaceCore::FightStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAHODNHEKK_GET__FIGHTSTATUS_OFFSET))(this);
		}

		::System::Void set__FightStatus(::RPG::Client::LittleGameShare::CakeRaceCore::FightStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::CakeRaceCore::FightStatus))((::PBYTE)hIl2Cpp + NFAHODNHEKK_SET__FIGHTSTATUS_OFFSET))(this, a1);
		}

		::System::Boolean DLNHICDHPNA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAHODNHEKK_DLNHICDHPNA_OFFSET))(this);
		}

		::System::Boolean DLFBIMGPMHM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAHODNHEKK_DLFBIMGPMHM_OFFSET))(this);
		}

		::System::Boolean EFALLIPOJIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAHODNHEKK_EFALLIPOJIH_OFFSET))(this);
		}

		::System::Boolean _IsAllPlayerBetFinished_b__9_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFAHODNHEKK__ISALLPLAYERBETFINISHED_B__9_0_OFFSET))(this, a1);
		}

		::System::Boolean __TryAddSpecialEffectForVote_b__15_1(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFAHODNHEKK___TRYADDSPECIALEFFECTFORVOTE_B__15_1_OFFSET))(this, a1);
		}

		::System::Boolean _IsAllOnlinePlayerVoteConfirmed_b__18_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFAHODNHEKK__ISALLONLINEPLAYERVOTECONFIRMED_B__18_0_OFFSET))(this, a1);
		}

	};
