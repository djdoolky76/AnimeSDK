#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANOMGANGGGD.h"
#include "unitysdk/CBDDODKFCIJ_DDIALGGBHDB.h"
#include "unitysdk/GEKNEEMAHBC_JENDGGPPBIA.h"
#include "unitysdk/GIFOBKBCCMA.h"
#include "unitysdk/MoleMole/Config/TimePeriodType.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/PONEGOPCLPF.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"

class AIOGGGIHCAE;
class AKHOKICACBA;
class APLLBGDCEPE;
class EEHJOPEJOCD;
class GECKFNANGKB;
class IFLPGOKHDJI;
class IHNJCJPPBIH;
class MGJLJHECMFL_LDHINONOMIB;
class NHEBOOMFOMJ;
namespace MoleMole { class AvatarInitData; }
namespace MoleMole { class InLevelBuddyDataItem; }
namespace MoleMole { class UIInLevelPauseDialogContext; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::UniversalGame { class UIBigSceneDungeonResultPageContext; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CBDDODKFCIJ_AAMLNKCJHEC_OFFSET UNITYSDK_OFFSET(0x145A2990)
#define CBDDODKFCIJ_AEFPHMFNJLA_OFFSET UNITYSDK_OFFSET(0x145A7710)
#define CBDDODKFCIJ_AHBAFMKBCGL_OFFSET UNITYSDK_OFFSET(0x145A2820)
#define CBDDODKFCIJ_AMEGHCHMIOD_OFFSET UNITYSDK_OFFSET(0x145A7130)
#define CBDDODKFCIJ_APIAHLANGFM_OFFSET UNITYSDK_OFFSET(0x145A6C80)
#define CBDDODKFCIJ_BALCHJECMJI_OFFSET UNITYSDK_OFFSET(0x1459B700)
#define CBDDODKFCIJ_BCFEIAGGAOG_OFFSET UNITYSDK_OFFSET(0x145A7680)
#define CBDDODKFCIJ_BDKINFLCAIO_OFFSET UNITYSDK_OFFSET(0x145A4C40)
#define CBDDODKFCIJ_BLDGLIDJEFN_OFFSET UNITYSDK_OFFSET(0x145A64C0)
#define CBDDODKFCIJ_BLKHOLFDEDF_OFFSET UNITYSDK_OFFSET(0x145A6C00)
#define CBDDODKFCIJ_BPFPAIMCKBE_OFFSET UNITYSDK_OFFSET(0x145A1D10)
#define CBDDODKFCIJ_CMOAOHADKHD_OFFSET UNITYSDK_OFFSET(0x145A5550)
#define CBDDODKFCIJ_CMOLMJNKIFA_OFFSET UNITYSDK_OFFSET(0x145A7CB0)
#define CBDDODKFCIJ_CPGOJBMALKB_OFFSET UNITYSDK_OFFSET(0x145A3CB0)
#define CBDDODKFCIJ_CPJALGBKICO_OFFSET UNITYSDK_OFFSET(0x145A2970)
#define CBDDODKFCIJ_CPJMOMAMCBB_OFFSET UNITYSDK_OFFSET(0x145A77B0)
#define CBDDODKFCIJ_DGHNGIIAANG_OFFSET UNITYSDK_OFFSET(0x145A6DB0)
#define CBDDODKFCIJ_DICOKFGNDKB_OFFSET UNITYSDK_OFFSET(0x145A6E60)
#define CBDDODKFCIJ_DJLAPMLBKJK_OFFSET UNITYSDK_OFFSET(0x145A2980)
#define CBDDODKFCIJ_EBHPGHHODKM_OFFSET UNITYSDK_OFFSET(0x145A72D0)
#define CBDDODKFCIJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x145A6C70)
#define CBDDODKFCIJ_EEOCHNJMJBJ_OFFSET UNITYSDK_OFFSET(0x145A2E70)
#define CBDDODKFCIJ_FBIBOCCFAON_OFFSET UNITYSDK_OFFSET(0x145A5E10)
#define CBDDODKFCIJ_FCAOGDFBPGC_OFFSET UNITYSDK_OFFSET(0x145A79C0)
#define CBDDODKFCIJ_FEOLDDNKLHB_OFFSET UNITYSDK_OFFSET(0x145A7A60)
#define CBDDODKFCIJ_FGPMDBOONBH_OFFSET UNITYSDK_OFFSET(0x145A5320)
#define CBDDODKFCIJ_FPLEJPMMBOA_OFFSET UNITYSDK_OFFSET(0x145A46B0)
#define CBDDODKFCIJ_GAGFCKAJLEO_OFFSET UNITYSDK_OFFSET(0x145A6DD0)
#define CBDDODKFCIJ_GBCCNIDELNC_OFFSET UNITYSDK_OFFSET(0x145A6460)
#define CBDDODKFCIJ_GHMKOCHDALF_OFFSET UNITYSDK_OFFSET(0x145A48A0)
#define CBDDODKFCIJ_HBOIEDDDGKE_OFFSET UNITYSDK_OFFSET(0x145A34C0)
#define CBDDODKFCIJ_HDBFMMBFEDF_OFFSET UNITYSDK_OFFSET(0x145A2870)
#define CBDDODKFCIJ_HEMOJGJAPMJ_OFFSET UNITYSDK_OFFSET(0x145A7A50)
#define CBDDODKFCIJ_HHALOKGLFJB_OFFSET UNITYSDK_OFFSET(0x145A71B0)
#define CBDDODKFCIJ_HHOFDKFPAEB_OFFSET UNITYSDK_OFFSET(0x145A7930)
#define CBDDODKFCIJ_HLECAABIHCI_OFFSET UNITYSDK_OFFSET(0x145A4BD0)
#define CBDDODKFCIJ_HMHDEFCHLJP_OFFSET UNITYSDK_OFFSET(0x145A4410)
#define CBDDODKFCIJ_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x145A2460)
#define CBDDODKFCIJ_HNKBIIEEEEE_OFFSET UNITYSDK_OFFSET(0x145A4F60)
#define CBDDODKFCIJ_IEENPEOBDIC_OFFSET UNITYSDK_OFFSET(0x145A6DC0)
#define CBDDODKFCIJ_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x145A7CA0)
#define CBDDODKFCIJ_IHBFFPEHJKK_OFFSET UNITYSDK_OFFSET(0x145A3A10)
#define CBDDODKFCIJ_IHEEBLGGLDJ_OFFSET UNITYSDK_OFFSET(0x145A66D0)
#define CBDDODKFCIJ_IMDDPIBKIOL_OFFSET UNITYSDK_OFFSET(0x145A4460)
#define CBDDODKFCIJ_JGNLEGABBPB_OFFSET UNITYSDK_OFFSET(0x145A2920)
#define CBDDODKFCIJ_JLIKIPOOOGL_OFFSET UNITYSDK_OFFSET(0x145A75F0)
#define CBDDODKFCIJ_JPJLHGHIOMA_OFFSET UNITYSDK_OFFSET(0x145A4B70)
#define CBDDODKFCIJ_KDHEBLAPDCD_OFFSET UNITYSDK_OFFSET(0x145A4270)
#define CBDDODKFCIJ_KFANODFAOKL_OFFSET UNITYSDK_OFFSET(0x145A45D0)
#define CBDDODKFCIJ_KHIIOJPKJHH_OFFSET UNITYSDK_OFFSET(0x145A3860)
#define CBDDODKFCIJ_KKMOJCBCECP_OFFSET UNITYSDK_OFFSET(0x145A72E0)
#define CBDDODKFCIJ_KPCMPDDOFFI_OFFSET UNITYSDK_OFFSET(0x145A3390)
#define CBDDODKFCIJ_LEOONBOCKBC_OFFSET UNITYSDK_OFFSET(0x145A42C0)
#define CBDDODKFCIJ_LFNDHAOJMOF_OFFSET UNITYSDK_OFFSET(0x145A4620)
#define CBDDODKFCIJ_MBFAIMBMCCH_OFFSET UNITYSDK_OFFSET(0x145A1D20)
#define CBDDODKFCIJ_MOLGBEGJJMH_OFFSET UNITYSDK_OFFSET(0x145A6760)
#define CBDDODKFCIJ_NBLEHBOHILP_OFFSET UNITYSDK_OFFSET(0x145A7080)
#define CBDDODKFCIJ_NBPDPEKJPPB_OFFSET UNITYSDK_OFFSET(0x145A3F00)
#define CBDDODKFCIJ_NKJJNAIPGHF_OFFSET UNITYSDK_OFFSET(0x145A4950)
#define CBDDODKFCIJ_OCBINHCBKIF_OFFSET UNITYSDK_OFFSET(0x145A39B0)
#define CBDDODKFCIJ_OGIMJGOOLIK_OFFSET UNITYSDK_OFFSET(0x145A78A0)
#define CBDDODKFCIJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x145A38E0)
#define CBDDODKFCIJ_OJOANFEFDMJ_OFFSET UNITYSDK_OFFSET(0x145A2ED0)
#define CBDDODKFCIJ_ONHGLIKLEDJ_OFFSET UNITYSDK_OFFSET(0x145A7220)
#define CBDDODKFCIJ_PDPEPEFPPEG_OFFSET UNITYSDK_OFFSET(0x145A7210)
#define CBDDODKFCIJ_PFOBLILDDGB_OFFSET UNITYSDK_OFFSET(0x145A7890)
#define CBDDODKFCIJ_PHEOLFIBBGH_OFFSET UNITYSDK_OFFSET(0x145A2260)
#define CBDDODKFCIJ_PLMGOHCJHHJ_OFFSET UNITYSDK_OFFSET(0x145A73C0)
#define CBDDODKFCIJ_PPNLOBALFKG_OFFSET UNITYSDK_OFFSET(0x145A1D70)
#define CBDDODKFCIJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x145A66C0)
#define CBDDODKFCIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x145A6500)

inline static constexpr unsigned int CBDDODKFCIJ_TypeDefinitionIndex = 74346;

class CBDDODKFCIJ : public ::ANOMGANGGGD
{
public:
	static ::System::Boolean* StaticGet_IKMPBBKCPGP()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CBDDODKFCIJ_TypeDefinitionIndex)->GetStaticField(0xED10);
	}
	// static const ::System::String* PFOLDHAJHEN; // 0x0
	// static const ::System::String* MNDIMJFNOCJ; // 0x0
	// static const ::System::String* CEDGOHAMPPG; // 0x0
	// static const ::System::String* OFGIJAMHAJE; // 0x0
	// static const ::System::String* IKKIPKFEBGH; // 0x0
	::MoleMole::UniversalGame::UIBigSceneDungeonResultPageContext* _PCAFMMDIKDA_k__BackingField; // 0xF8
	::APLLBGDCEPE* CLKMIHHPGAB; // 0x100
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* GGJCMBCALMI; // 0x108
	::System::Collections::Generic::HashSet_1<::IFLPGOKHDJI*>* KDAODDBEEGL; // 0x110
	::MGJLJHECMFL_LDHINONOMIB* OHJBIMPFNNO; // 0x118
	::System::Collections::Generic::List_1<::System::Int32>* MGIAPHPPDKH; // 0x120
	::System::Int32 OOCLEBOGKKD; // 0x128
	::System::Int32 KJIGNIIHAGD; // 0x12C
	::System::Boolean MJIPGAKFHOB; // 0x130
	::System::Byte _padding0[0x3];
	::System::Int32 HJOLAJLFOEO; // 0x134
	::System::Int32 LABFBHJCCMF; // 0x138

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDDODKFCIJ__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBDDODKFCIJ__CCTOR_OFFSET))();
	}

	::GEKNEEMAHBC_JENDGGPPBIA BPFPAIMCKBE()
	{
		return ((::GEKNEEMAHBC_JENDGGPPBIA(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_BPFPAIMCKBE_OFFSET))(this);
	}

	::System::Void MBFAIMBMCCH(::NHEBOOMFOMJ* FOHOENDPLML)
	{
		return ((::System::Void(*)(::PVOID, ::NHEBOOMFOMJ*))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_MBFAIMBMCCH_OFFSET))(this, FOHOENDPLML);
	}

	::System::Void PPNLOBALFKG(::MoleMole::Battle::Entity* DBIOAKNMBDM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_PPNLOBALFKG_OFFSET))(this, DBIOAKNMBDM);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void AHBAFMKBCGL(::MoleMole::Battle::Entity* DJMEFDIHNDO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_AHBAFMKBCGL_OFFSET))(this, DJMEFDIHNDO);
	}

	::System::Void HDBFMMBFEDF(::AKHOKICACBA* MIMNNMMMJJF)
	{
		return ((::System::Void(*)(::PVOID, ::AKHOKICACBA*))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_HDBFMMBFEDF_OFFSET))(this, MIMNNMMMJJF);
	}

	::System::Boolean JGNLEGABBPB(::PONEGOPCLPF& JKBLDFBGBPK)
	{
		return ((::System::Boolean(*)(::PVOID, ::PONEGOPCLPF&))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_JGNLEGABBPB_OFFSET))(this, JKBLDFBGBPK);
	}

	::System::Boolean CPJALGBKICO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_CPJALGBKICO_OFFSET))(this);
	}

	::System::Boolean DJLAPMLBKJK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_DJLAPMLBKJK_OFFSET))(this);
	}

	::System::Boolean AAMLNKCJHEC(::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>& EPFNBELDLDP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>&))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_AAMLNKCJHEC_OFFSET))(this, EPFNBELDLDP);
	}

	::System::String* OJOANFEFDMJ(::System::String*& EIFJPFICKFM)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_OJOANFEFDMJ_OFFSET))(this, EIFJPFICKFM);
	}

	::System::Int32 KPCMPDDOFFI(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_KPCMPDDOFFI_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void HBOIEDDDGKE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_HBOIEDDDGKE_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void OCBINHCBKIF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_OCBINHCBKIF_OFFSET))(this);
	}

	::System::Void IHBFFPEHJKK(::AIOGGGIHCAE*& KNGNADJNFOP)
	{
		return ((::System::Void(*)(::PVOID, ::AIOGGGIHCAE*&))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_IHBFFPEHJKK_OFFSET))(this, KNGNADJNFOP);
	}

	::System::Void CPGOJBMALKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_CPGOJBMALKB_OFFSET))(this);
	}

	::System::Void KDHEBLAPDCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_KDHEBLAPDCD_OFFSET))(this);
	}

	::System::Void HMHDEFCHLJP(::CBDDODKFCIJ_DDIALGGBHDB FKMHMOELCIO)
	{
		return ((::System::Void(*)(::PVOID, ::CBDDODKFCIJ_DDIALGGBHDB))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_HMHDEFCHLJP_OFFSET))(this, FKMHMOELCIO);
	}

	::System::Void IMDDPIBKIOL(::IHNJCJPPBIH* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::IHNJCJPPBIH*))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_IMDDPIBKIOL_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void FPLEJPMMBOA(::MoleMole::Battle::Entity* BDHOILPIGKB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_FPLEJPMMBOA_OFFSET))(this, BDHOILPIGKB);
	}

	::Cysharp::Threading::Tasks::UniTask GHMKOCHDALF(::System::Threading::CancellationToken CBJFKEAGLGD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_GHMKOCHDALF_OFFSET))(this, CBJFKEAGLGD);
	}

	::System::Void NKJJNAIPGHF(::EEHJOPEJOCD* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::EEHJOPEJOCD*))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_NKJJNAIPGHF_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Boolean JPJLHGHIOMA(::MoleMole::ESystemSettingType JELHEKJMJNI, ::System::Boolean& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ESystemSettingType, ::System::Boolean&))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_JPJLHGHIOMA_OFFSET))(this, JELHEKJMJNI, IGAAKDOIPNN);
	}

	::MoleMole::UIInLevelPauseDialogContext* HLECAABIHCI()
	{
		return ((::MoleMole::UIInLevelPauseDialogContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_HLECAABIHCI_OFFSET))(this);
	}

	::System::Boolean FGPMDBOONBH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_FGPMDBOONBH_OFFSET))(this);
	}

	::System::UInt32 BLDGLIDJEFN()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_BLDGLIDJEFN_OFFSET))(this);
	}

	::System::Void IHEEBLGGLDJ(::NHEBOOMFOMJ* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::NHEBOOMFOMJ*))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_IHEEBLGGLDJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Collections::Generic::List_1<::System::Int32>* GBCCNIDELNC(::System::Boolean& AKJMIDGIOFN)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_GBCCNIDELNC_OFFSET))(this, AKJMIDGIOFN);
	}

	::System::Int32 BLKHOLFDEDF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_BLKHOLFDEDF_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_ECNOGHHOPPF_OFFSET))(this);
	}

	static ::System::Void APIAHLANGFM(::System::Action* GJBHEJGENMI, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_APIAHLANGFM_OFFSET))(GJBHEJGENMI, AELLPLBJELA);
	}

	::MGJLJHECMFL_LDHINONOMIB* DGHNGIIAANG()
	{
		return ((::MGJLJHECMFL_LDHINONOMIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_DGHNGIIAANG_OFFSET))(this);
	}

	::System::Void IEENPEOBDIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_IEENPEOBDIC_OFFSET))(this);
	}

	::System::Int32 BALCHJECMJI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_BALCHJECMJI_OFFSET))(this);
	}

	::System::Void GAGFCKAJLEO(::AIOGGGIHCAE*& MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::AIOGGGIHCAE*&))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_GAGFCKAJLEO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void DICOKFGNDKB(::System::EventArgs* OJPFHPALLHG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_DICOKFGNDKB_OFFSET))(this, OJPFHPALLHG);
	}

	::System::Void NBLEHBOHILP(::IFLPGOKHDJI* NLOBIBDOBGL)
	{
		return ((::System::Void(*)(::PVOID, ::IFLPGOKHDJI*))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_NBLEHBOHILP_OFFSET))(this, NLOBIBDOBGL);
	}

	static ::MoleMole::Config::TimePeriodType EEOCHNJMJBJ(::GIFOBKBCCMA EGNLBDMECID)
	{
		return ((::MoleMole::Config::TimePeriodType(*)(::GIFOBKBCCMA))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_EEOCHNJMJBJ_OFFSET))(EGNLBDMECID);
	}

	::System::Void AMEGHCHMIOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_AMEGHCHMIOD_OFFSET))(this);
	}

	::System::Void HHALOKGLFJB(::System::UInt32 IMGBAKKLEMJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_HHALOKGLFJB_OFFSET))(this, IMGBAKKLEMJ);
	}

	::System::Void NBPDPEKJPPB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_NBPDPEKJPPB_OFFSET))(this);
	}

	::System::Boolean PDPEPEFPPEG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_PDPEPEFPPEG_OFFSET))(this);
	}

	::System::Boolean ONHGLIKLEDJ(::System::UInt32 IMGBAKKLEMJ, ::System::UInt32& AOCOIDIMLIH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_ONHGLIKLEDJ_OFFSET))(this, IMGBAKKLEMJ, AOCOIDIMLIH);
	}

	::System::String* EBHPGHHODKM(::System::String*& MIALFKCCCPI)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_EBHPGHHODKM_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::UIInLevelPauseDialogContext* HNKBIIEEEEE()
	{
		return ((::MoleMole::UIInLevelPauseDialogContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_HNKBIIEEEEE_OFFSET))(this);
	}

	::System::Void KKMOJCBCECP(::System::UInt32 IMGBAKKLEMJ, ::System::UInt32 AOCOIDIMLIH)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_KKMOJCBCECP_OFFSET))(this, IMGBAKKLEMJ, AOCOIDIMLIH);
	}

	::System::Void LFNDHAOJMOF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_LFNDHAOJMOF_OFFSET))(this);
	}

	::System::Void PLMGOHCJHHJ(::System::EventArgs* OJPFHPALLHG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_PLMGOHCJHHJ_OFFSET))(this, OJPFHPALLHG);
	}

	::System::Void JLIKIPOOOGL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_JLIKIPOOOGL_OFFSET))(this);
	}

	::System::Void BCFEIAGGAOG(::IFLPGOKHDJI* NLOBIBDOBGL)
	{
		return ((::System::Void(*)(::PVOID, ::IFLPGOKHDJI*))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_BCFEIAGGAOG_OFFSET))(this, NLOBIBDOBGL);
	}

	::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*> CMOAOHADKHD(::GECKFNANGKB* LFJGGMHMFGA)
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*>(*)(::PVOID, ::GECKFNANGKB*))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_CMOAOHADKHD_OFFSET))(this, LFJGGMHMFGA);
	}

	::System::Void KFANODFAOKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_KFANODFAOKL_OFFSET))(this);
	}

	::System::Boolean AEFPHMFNJLA(::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>& MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>&))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_AEFPHMFNJLA_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void PHEOLFIBBGH()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBDDODKFCIJ_PHEOLFIBBGH_OFFSET))();
	}

	::System::Boolean CPJMOMAMCBB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_CPJMOMAMCBB_OFFSET))(this);
	}

	::System::Void PFOBLILDDGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_PFOBLILDDGB_OFFSET))(this);
	}

	::MoleMole::UIInLevelPauseDialogContext* BDKINFLCAIO()
	{
		return ((::MoleMole::UIInLevelPauseDialogContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_BDKINFLCAIO_OFFSET))(this);
	}

	::System::Void LEOONBOCKBC(::CBDDODKFCIJ_DDIALGGBHDB FKMHMOELCIO)
	{
		return ((::System::Void(*)(::PVOID, ::CBDDODKFCIJ_DDIALGGBHDB))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_LEOONBOCKBC_OFFSET))(this, FKMHMOELCIO);
	}

	::System::Void OGIMJGOOLIK(::IHNJCJPPBIH* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::IHNJCJPPBIH*))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_OGIMJGOOLIK_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void HHOFDKFPAEB(::MoleMole::Battle::Entity* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_HHOFDKFPAEB_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void KHIIOJPKJHH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_KHIIOJPKJHH_OFFSET))(this);
	}

	::System::Void FCAOGDFBPGC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_FCAOGDFBPGC_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* FBIBOCCFAON(::GECKFNANGKB* LFJGGMHMFGA)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*(*)(::PVOID, ::GECKFNANGKB*))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_FBIBOCCFAON_OFFSET))(this, LFJGGMHMFGA);
	}

	::System::Collections::Generic::List_1<::System::Int32>* MOLGBEGJJMH(::System::Boolean& EHELDKNPIBB)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_MOLGBEGJJMH_OFFSET))(this, EHELDKNPIBB);
	}

	::System::Void HEMOJGJAPMJ(::MoleMole::UniversalGame::UIBigSceneDungeonResultPageContext* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UniversalGame::UIBigSceneDungeonResultPageContext*))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_HEMOJGJAPMJ_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::System::Void FEOLDDNKLHB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBDDODKFCIJ_FEOLDDNKLHB_OFFSET))();
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_IFHNMAGGFAE_OFFSET))(this);
	}

	::MoleMole::UniversalGame::UIBigSceneDungeonResultPageContext* CMOLMJNKIFA()
	{
		return ((::MoleMole::UniversalGame::UIBigSceneDungeonResultPageContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDDODKFCIJ_CMOLMJNKIFA_OFFSET))(this);
	}
};
