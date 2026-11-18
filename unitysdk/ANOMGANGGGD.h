#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CJMCICODFBN_PILBLDPFJIB.h"
#include "unitysdk/GEKNEEMAHBC.h"
#include "unitysdk/GEKNEEMAHBC_JENDGGPPBIA.h"
#include "unitysdk/MoleMole/Config/TimePeriodType.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/MoleMole/BattleGameWeatherAndTime.h"
#include "unitysdk/UnityEngine/Rendering/Universal/VisualEnvironmentE_WeatherType.h"
#include "unitysdk/AGJFJGEMIPB_IJGJFOLIMAH_CPPCMLKMHCA.h"
#include "unitysdk/System/ValueTuple_2.h"

class EHDAGHGEDJO;
class ENGKPGFGGLM;
class FCBNEBOPNIF;
class GLGOLPBLBOC;
class HDGPDMPBHEE;
class HEJEPGBODPG;
class JDFAOFNFGLO;
class JGPGCHAJKGA;
class JLCLMJOCGHI;
class MPAKAODAAAI;
class OABFNMFOABA;
namespace MoleMole { class AvatarInitData; }
namespace MoleMole { class InLevelAvatarDataItem; }
namespace MoleMole { class InLevelBuddyDataItem; }
namespace MoleMole { class TeamDataItem; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ANOMGANGGGD_AAMLNKCJHEC_OFFSET UNITYSDK_OFFSET(0xF771150)
#define ANOMGANGGGD_AHLHPKGDJAH_OFFSET UNITYSDK_OFFSET(0xF774370)
#define ANOMGANGGGD_AIFGOFHINMM_OFFSET UNITYSDK_OFFSET(0xF771640)
#define ANOMGANGGGD_AIIJNGGFNPC_OFFSET UNITYSDK_OFFSET(0xF7702D0)
#define ANOMGANGGGD_BEKJFGHHEIC_OFFSET UNITYSDK_OFFSET(0xF771A70)
#define ANOMGANGGGD_BFEGAFIAFIP_OFFSET UNITYSDK_OFFSET(0xF776E20)
#define ANOMGANGGGD_BLOGBDCPAGO_OFFSET UNITYSDK_OFFSET(0xF776FD0)
#define ANOMGANGGGD_BMHGOPEPGHD_OFFSET UNITYSDK_OFFSET(0xF771710)
#define ANOMGANGGGD_BMPOOFICLHD_OFFSET UNITYSDK_OFFSET(0xF7713B0)
#define ANOMGANGGGD_BNAJELKCNHP_OFFSET UNITYSDK_OFFSET(0xF776E00)
#define ANOMGANGGGD_BPFPAIMCKBE_OFFSET UNITYSDK_OFFSET(0xF770270)
#define ANOMGANGGGD_CGMKKFEIFMI_OFFSET UNITYSDK_OFFSET(0xF770420)
#define ANOMGANGGGD_CHALBDJGKDB_OFFSET UNITYSDK_OFFSET(0xF774380)
#define ANOMGANGGGD_COOHJECKCGP_OFFSET UNITYSDK_OFFSET(0xF774C40)
#define ANOMGANGGGD_CPHOFPBKAAP_OFFSET UNITYSDK_OFFSET(0xF773040)
#define ANOMGANGGGD_DAKHFAAEJOG_OFFSET UNITYSDK_OFFSET(0xF771D30)
#define ANOMGANGGGD_DCBNLKGILOM_OFFSET UNITYSDK_OFFSET(0xF7735A0)
#define ANOMGANGGGD_DHGNACDMFHG_OFFSET UNITYSDK_OFFSET(0xF7761C0)
#define ANOMGANGGGD_DJANNOLOPDI_OFFSET UNITYSDK_OFFSET(0xF773BA0)
#define ANOMGANGGGD_DJICDGEHDDH_OFFSET UNITYSDK_OFFSET(0xF774450)
#define ANOMGANGGGD_DMANOOPPOJJ_OFFSET UNITYSDK_OFFSET(0xF771400)
#define ANOMGANGGGD_EACAKAJOEGD_OFFSET UNITYSDK_OFFSET(0xF7756C0)
#define ANOMGANGGGD_EIKMNDNBNGH_OFFSET UNITYSDK_OFFSET(0xF770B00)
#define ANOMGANGGGD_ENNDJOKKAFI_OFFSET UNITYSDK_OFFSET(0xF770E40)
#define ANOMGANGGGD_EOOPMKJEOPC_OFFSET UNITYSDK_OFFSET(0xF775F90)
#define ANOMGANGGGD_FCIJKJDEBPD_OFFSET UNITYSDK_OFFSET(0xF773AE0)
#define ANOMGANGGGD_FGBGGIHNAKF_OFFSET UNITYSDK_OFFSET(0xF7763D0)
#define ANOMGANGGGD_FNMDDHAICPD_OFFSET UNITYSDK_OFFSET(0xF773EB0)
#define ANOMGANGGGD_FPLEJPMMBOA_OFFSET UNITYSDK_OFFSET(0xF770280)
#define ANOMGANGGGD_GAMPADKIEAJ_OFFSET UNITYSDK_OFFSET(0xF770EC0)
#define ANOMGANGGGD_GEFPCMMIKOA_OFFSET UNITYSDK_OFFSET(0xF773050)
#define ANOMGANGGGD_GPAAGHNMMNM_OFFSET UNITYSDK_OFFSET(0xF771DC0)
#define ANOMGANGGGD_HBPHOMFPGKH_OFFSET UNITYSDK_OFFSET(0xF771390)
#define ANOMGANGGGD_HCBOBMGMJPM_OFFSET UNITYSDK_OFFSET(0xF774360)
#define ANOMGANGGGD_HCEDDBCKILM_OFFSET UNITYSDK_OFFSET(0xF772070)
#define ANOMGANGGGD_HCOJKIICFJL_OFFSET UNITYSDK_OFFSET(0xF777640)
#define ANOMGANGGGD_HDNIKJMNCMG_OFFSET UNITYSDK_OFFSET(0xF771DE0)
#define ANOMGANGGGD_HOALPNBHGMM_OFFSET UNITYSDK_OFFSET(0xF774440)
#define ANOMGANGGGD_IKGHDGAIPHN_OFFSET UNITYSDK_OFFSET(0xF776FE0)
#define ANOMGANGGGD_ILOIGKAJCCJ_OFFSET UNITYSDK_OFFSET(0xF772FB0)
#define ANOMGANGGGD_JBHJMPEGCPB_OFFSET UNITYSDK_OFFSET(0xF775B00)
#define ANOMGANGGGD_JDCBLEGMJAP_OFFSET UNITYSDK_OFFSET(0xF776E10)
#define ANOMGANGGGD_JHPAOMGOMCJ_OFFSET UNITYSDK_OFFSET(0xF773150)
#define ANOMGANGGGD_JLMAPAJPEDP_OFFSET UNITYSDK_OFFSET(0xF772C40)
#define ANOMGANGGGD_JMNFGONNPMI_OFFSET UNITYSDK_OFFSET(0xF7709C0)
#define ANOMGANGGGD_KBGIDFAEOEI_OFFSET UNITYSDK_OFFSET(0xF776DF0)
#define ANOMGANGGGD_KCMEJOMDDAD_OFFSET UNITYSDK_OFFSET(0xF7712D0)
#define ANOMGANGGGD_KDHEBLAPDCD_OFFSET UNITYSDK_OFFSET(0xF770320)
#define ANOMGANGGGD_KDHHDFGMKDO_OFFSET UNITYSDK_OFFSET(0xF775430)
#define ANOMGANGGGD_KEKECAHEFGB_OFFSET UNITYSDK_OFFSET(0xF7703C0)
#define ANOMGANGGGD_KLLDDILJFJL_OFFSET UNITYSDK_OFFSET(0xF774FB0)
#define ANOMGANGGGD_KMJHMEJHNPI_OFFSET UNITYSDK_OFFSET(0xF775440)
#define ANOMGANGGGD_KNELBBGADLJ_OFFSET UNITYSDK_OFFSET(0xF770470)
#define ANOMGANGGGD_LEBCJFEGBMM_OFFSET UNITYSDK_OFFSET(0xF777430)
#define ANOMGANGGGD_LKBCNHMPONC_OFFSET UNITYSDK_OFFSET(0xF775B20)
#define ANOMGANGGGD_MALJLPNEBDI_OFFSET UNITYSDK_OFFSET(0xF777370)
#define ANOMGANGGGD_MALJOHLACOI_OFFSET UNITYSDK_OFFSET(0xF771650)
#define ANOMGANGGGD_MAPLJIICGEL_OFFSET UNITYSDK_OFFSET(0xF7718B0)
#define ANOMGANGGGD_MCDOACGCECH_OFFSET UNITYSDK_OFFSET(0xF771B20)
#define ANOMGANGGGD_MGGOIKKPDHH_OFFSET UNITYSDK_OFFSET(0xF774110)
#define ANOMGANGGGD_MIAFKJELNMO_OFFSET UNITYSDK_OFFSET(0xF7774A0)
#define ANOMGANGGGD_MJCBGIANADB_OFFSET UNITYSDK_OFFSET(0xF774630)
#define ANOMGANGGGD_NCDBKFMPCHG_OFFSET UNITYSDK_OFFSET(0xF777490)
#define ANOMGANGGGD_NFLLJJALFJB_OFFSET UNITYSDK_OFFSET(0xF7758E0)
#define ANOMGANGGGD_NNFHLCFLMFM_OFFSET UNITYSDK_OFFSET(0xF7745A0)
#define ANOMGANGGGD_OABEIDBMIEM_OFFSET UNITYSDK_OFFSET(0xF776E30)
#define ANOMGANGGGD_OBEALHEBOLN_OFFSET UNITYSDK_OFFSET(0xF770D10)
#define ANOMGANGGGD_OJNHOKMCPAA_OFFSET UNITYSDK_OFFSET(0xF771B10)
#define ANOMGANGGGD_OJOANFEFDMJ_OFFSET UNITYSDK_OFFSET(0xF770D60)
#define ANOMGANGGGD_OMJFOEADDDN_OFFSET UNITYSDK_OFFSET(0xF774850)
#define ANOMGANGGGD_ONCKGEJPAIE_OFFSET UNITYSDK_OFFSET(0xF770D00)
#define ANOMGANGGGD_OPIAEFOIHLA_OFFSET UNITYSDK_OFFSET(0xF771720)
#define ANOMGANGGGD_PDNCLDFKOID_OFFSET UNITYSDK_OFFSET(0xF775B10)
#define ANOMGANGGGD_PEIAEIIPDOE_OFFSET UNITYSDK_OFFSET(0xF775E70)
#define ANOMGANGGGD_PELLEGOEIDB_OFFSET UNITYSDK_OFFSET(0xF7739F0)
#define ANOMGANGGGD_PFOBLILDDGB_OFFSET UNITYSDK_OFFSET(0xF771A80)
#define ANOMGANGGGD_PGNPNIDINNN_OFFSET UNITYSDK_OFFSET(0xF776D00)
#define ANOMGANGGGD_PMIFPCMGINB_OFFSET UNITYSDK_OFFSET(0xF7715F0)
#define ANOMGANGGGD_POAMLAMENKC_OFFSET UNITYSDK_OFFSET(0xF7763E0)
#define ANOMGANGGGD__CCTOR_OFFSET UNITYSDK_OFFSET(0xF7712C0)
#define ANOMGANGGGD__CTOR_OFFSET UNITYSDK_OFFSET(0xF7711A0)

inline static constexpr unsigned int ANOMGANGGGD_TypeDefinitionIndex = 68165;

class ANOMGANGGGD : public ::GEKNEEMAHBC
{
public:
	static ::System::Int32* StaticGet_OBGJBPEJICD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ANOMGANGGGD_TypeDefinitionIndex)->GetStaticField(0x13690);
	}
	::MPAKAODAAAI* ELDKMABFDLN; // 0x90
	::System::String* _OLGMPGLHNNB_k__BackingField; // 0x98
	::System::Collections::Generic::List_1<::System::String*>* _FLKANILKFPG_k__BackingField; // 0xA0
	::System::Collections::Generic::List_1<::HDGPDMPBHEE*>* EKAKJLPEHCC; // 0xA8
	::HEJEPGBODPG* _KLDAHJJDLAL_k__BackingField; // 0xB0
	::System::Collections::Generic::List_1<::MoleMole::BattleGameWeatherAndTime>* MKJAHEEOLEK; // 0xB8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::GLGOLPBLBOC*>* GFFGFEGMLFF; // 0xC0
	::System::String* CJCEMAFODBI; // 0xC8
	::System::String* _GJKKHLLGDDI_k__BackingField; // 0xD0
	::System::String* _EHBDCACIIKD_k__BackingField; // 0xD8
	::MoleMole::TeamDataItem* _OLFHKCNAILD_k__BackingField; // 0xE0
	::System::Int32 _KNCMLBGDKPF_k__BackingField; // 0xE8
	::System::Int32 _LMKHFKKNMIN_k__BackingField; // 0xEC
	::System::Boolean _NBFGBEFEEPC_k__BackingField; // 0xF0
	::System::Boolean IFAOCDKPPFB; // 0xF1
	::System::Byte _padding0[0x2];
	::GEKNEEMAHBC_JENDGGPPBIA _AIBIEOKMLJJ_k__BackingField; // 0xF4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOMGANGGGD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANOMGANGGGD__CCTOR_OFFSET))();
	}

	::GEKNEEMAHBC_JENDGGPPBIA BPFPAIMCKBE()
	{
		return ((::GEKNEEMAHBC_JENDGGPPBIA(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOMGANGGGD_BPFPAIMCKBE_OFFSET))(this);
	}

	::System::Void FPLEJPMMBOA(::MoleMole::Battle::Entity* BDHOILPIGKB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ANOMGANGGGD_FPLEJPMMBOA_OFFSET))(this, BDHOILPIGKB);
	}

	::System::Boolean AIIJNGGFNPC(::CJMCICODFBN_PILBLDPFJIB KPOMCFMHBBC, ::System::Collections::Generic::List_1<::JLCLMJOCGHI*>*& JMMPKOAOJIH)
	{
		return ((::System::Boolean(*)(::PVOID, ::CJMCICODFBN_PILBLDPFJIB, ::System::Collections::Generic::List_1<::JLCLMJOCGHI*>*&))((::PBYTE)hIl2Cpp + ANOMGANGGGD_AIIJNGGFNPC_OFFSET))(this, KPOMCFMHBBC, JMMPKOAOJIH);
	}

	::System::Void KDHEBLAPDCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOMGANGGGD_KDHEBLAPDCD_OFFSET))(this);
	}

	::System::Void CGMKKFEIFMI(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ANOMGANGGGD_CGMKKFEIFMI_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
	}

	::OABFNMFOABA* KNELBBGADLJ()
	{
		return ((::OABFNMFOABA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOMGANGGGD_KNELBBGADLJ_OFFSET))(this);
	}

	::System::UInt32 ONCKGEJPAIE()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOMGANGGGD_ONCKGEJPAIE_OFFSET))(this);
	}

	::System::Void OBEALHEBOLN(::System::String*& HBLCHDGKCLO)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + ANOMGANGGGD_OBEALHEBOLN_OFFSET))(this, HBLCHDGKCLO);
	}

	::System::String* OJOANFEFDMJ(::System::String*& EIFJPFICKFM)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + ANOMGANGGGD_OJOANFEFDMJ_OFFSET))(this, EIFJPFICKFM);
	}

	::System::Boolean AAMLNKCJHEC(::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>& EPFNBELDLDP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>&))((::PBYTE)hIl2Cpp + ANOMGANGGGD_AAMLNKCJHEC_OFFSET))(this, EPFNBELDLDP);
	}

	::System::Void KCMEJOMDDAD(::MoleMole::Config::WeatherType GHPGIDAMMOP, ::System::Int32 DKOFFFNEFJC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::WeatherType, ::System::Int32))((::PBYTE)hIl2Cpp + ANOMGANGGGD_KCMEJOMDDAD_OFFSET))(this, GHPGIDAMMOP, DKOFFFNEFJC);
	}

	::MPAKAODAAAI* PMIFPCMGINB()
	{
		return ((::MPAKAODAAAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOMGANGGGD_PMIFPCMGINB_OFFSET))(this);
	}

	::System::String* AIFGOFHINMM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOMGANGGGD_AIFGOFHINMM_OFFSET))(this);
	}

	::System::String* ENNDJOKKAFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOMGANGGGD_ENNDJOKKAFI_OFFSET))(this);
	}

	::System::Void MALJOHLACOI(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ANOMGANGGGD_MALJOHLACOI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BMHGOPEPGHD(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ANOMGANGGGD_BMHGOPEPGHD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean OPIAEFOIHLA(::MoleMole::AvatarInitData* NHEPEEIPENO, ::System::Int32& DHGLFBIKKFH)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::AvatarInitData*, ::System::Int32&))((::PBYTE)hIl2Cpp + ANOMGANGGGD_OPIAEFOIHLA_OFFSET))(this, NHEPEEIPENO, DHGLFBIKKFH);
	}

	::System::Void JMNFGONNPMI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOMGANGGGD_JMNFGONNPMI_OFFSET))(this);
	}

	::MoleMole::Config::TimePeriodType HBPHOMFPGKH()
	{
		return ((::MoleMole::Config::TimePeriodType(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOMGANGGGD_HBPHOMFPGKH_OFFSET))(this);
	}

	::MoleMole::TeamDataItem* BEKJFGHHEIC()
	{
		return ((::MoleMole::TeamDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOMGANGGGD_BEKJFGHHEIC_OFFSET))(this);
	}

	::System::Void PFOBLILDDGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOMGANGGGD_PFOBLILDDGB_OFFSET))(this);
	}

	::System::Void OJNHOKMCPAA(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ANOMGANGGGD_OJNHOKMCPAA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean MCDOACGCECH(::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>& EPFNBELDLDP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>&))((::PBYTE)hIl2Cpp + ANOMGANGGGD_MCDOACGCECH_OFFSET))(this, EPFNBELDLDP);
	}

	::System::Void HDNIKJMNCMG(::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* FDBILPBLFHM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*))((::PBYTE)hIl2Cpp + ANOMGANGGGD_HDNIKJMNCMG_OFFSET))(this, FDBILPBLFHM);
	}

	::System::Void HCEDDBCKILM(::MoleMole::InLevelAvatarDataItem* CBHCJFDKGNP, ::System::Collections::Generic::List_1<::System::Object*>* JNCIOPLMLII)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelAvatarDataItem*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ANOMGANGGGD_HCEDDBCKILM_OFFSET))(this, CBHCJFDKGNP, JNCIOPLMLII);
	}

	::System::Void ILOIGKAJCCJ(::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType KAPIHNNIEBL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType))((::PBYTE)hIl2Cpp + ANOMGANGGGD_ILOIGKAJCCJ_OFFSET))(this, KAPIHNNIEBL);
	}

	::System::Void CPHOFPBKAAP(::System::Collections::Generic::List_1<::System::String*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + ANOMGANGGGD_CPHOFPBKAAP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GEFPCMMIKOA(::AGJFJGEMIPB_IJGJFOLIMAH_CPPCMLKMHCA DFMKILICPFB, ::System::Single IECOJPMPJMP, ::System::Int32 DKOFFFNEFJC)
	{
		return ((::System::Void(*)(::PVOID, ::AGJFJGEMIPB_IJGJFOLIMAH_CPPCMLKMHCA, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + ANOMGANGGGD_GEFPCMMIKOA_OFFSET))(this, DFMKILICPFB, IECOJPMPJMP, DKOFFFNEFJC);
	}

	::System::Void KEKECAHEFGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOMGANGGGD_KEKECAHEFGB_OFFSET))(this);
	}

	::System::Void JHPAOMGOMCJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOMGANGGGD_JHPAOMGOMCJ_OFFSET))(this);
	}

	::System::Void DCBNLKGILOM(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* GLOIMHAJJIE, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* EHPNKJEJGEJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + ANOMGANGGGD_DCBNLKGILOM_OFFSET))(this, GLOIMHAJJIE, EHPNKJEJGEJ);
	}

	::System::Void PELLEGOEIDB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOMGANGGGD_PELLEGOEIDB_OFFSET))(this);
	}

	::System::Int32 EIKMNDNBNGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOMGANGGGD_EIKMNDNBNGH_OFFSET))(this);
	}

	::System::Void FNMDDHAICPD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOMGANGGGD_FNMDDHAICPD_OFFSET))(this);
	}

	::System::Void MGGOIKKPDHH(::FCBNEBOPNIF* CENFDFIKBDC)
	{
		return ((::System::Void(*)(::PVOID, ::FCBNEBOPNIF*))((::PBYTE)hIl2Cpp + ANOMGANGGGD_MGGOIKKPDHH_OFFSET))(this, CENFDFIKBDC);
	}

	::System::Void HCBOBMGMJPM(::HEJEPGBODPG* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::HEJEPGBODPG*))((::PBYTE)hIl2Cpp + ANOMGANGGGD_HCBOBMGMJPM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FCIJKJDEBPD(::MoleMole::Config::WeatherType GHPGIDAMMOP, ::MoleMole::Config::TimePeriodType EMFIDMPAGIG, ::System::Int32 DKOFFFNEFJC, ::System::String* KHGFAKJKDGG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::WeatherType, ::MoleMole::Config::TimePeriodType, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + ANOMGANGGGD_FCIJKJDEBPD_OFFSET))(this, GHPGIDAMMOP, EMFIDMPAGIG, DKOFFFNEFJC, KHGFAKJKDGG);
	}

	::System::Boolean GAMPADKIEAJ(::System::String*& EMDIGGBLFBN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + ANOMGANGGGD_GAMPADKIEAJ_OFFSET))(this, EMDIGGBLFBN);
	}

	::System::Void AHLHPKGDJAH(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ANOMGANGGGD_AHLHPKGDJAH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CHALBDJGKDB(::HDGPDMPBHEE* IPMMCGDMODG)
	{
		return ((::System::Void(*)(::PVOID, ::HDGPDMPBHEE*))((::PBYTE)hIl2Cpp + ANOMGANGGGD_CHALBDJGKDB_OFFSET))(this, IPMMCGDMODG);
	}

	::System::Void HOALPNBHGMM(::MoleMole::TeamDataItem* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TeamDataItem*))((::PBYTE)hIl2Cpp + ANOMGANGGGD_HOALPNBHGMM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 DJICDGEHDDH(::System::Int32 KCNOHOOPNAH)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ANOMGANGGGD_DJICDGEHDDH_OFFSET))(this, KCNOHOOPNAH);
	}

	::System::Void NNFHLCFLMFM(::HDGPDMPBHEE* IPMMCGDMODG)
	{
		return ((::System::Void(*)(::PVOID, ::HDGPDMPBHEE*))((::PBYTE)hIl2Cpp + ANOMGANGGGD_NNFHLCFLMFM_OFFSET))(this, IPMMCGDMODG);
	}

	::MoleMole::InLevelAvatarDataItem* MJCBGIANADB(::MoleMole::AvatarInitData* NHEPEEIPENO)
	{
		return ((::MoleMole::InLevelAvatarDataItem*(*)(::PVOID, ::MoleMole::AvatarInitData*))((::PBYTE)hIl2Cpp + ANOMGANGGGD_MJCBGIANADB_OFFSET))(this, NHEPEEIPENO);
	}

	::HEJEPGBODPG* KDHHDFGMKDO()
	{
		return ((::HEJEPGBODPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOMGANGGGD_KDHHDFGMKDO_OFFSET))(this);
	}

	::System::Boolean JLMAPAJPEDP(::System::Int32 CFMMDHNJLAP, ::MoleMole::InLevelAvatarDataItem* CBHCJFDKGNP, ::System::Int32 DKOFFFNEFJC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::InLevelAvatarDataItem*, ::System::Int32))((::PBYTE)hIl2Cpp + ANOMGANGGGD_JLMAPAJPEDP_OFFSET))(this, CFMMDHNJLAP, CBHCJFDKGNP, DKOFFFNEFJC);
	}

	::System::Void KMJHMEJHNPI(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* IAAJHLOGHBI, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* EHHGHFLMAHD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + ANOMGANGGGD_KMJHMEJHNPI_OFFSET))(this, IAAJHLOGHBI, EHHGHFLMAHD);
	}

	::MoleMole::Config::WeatherType GPAAGHNMMNM()
	{
		return ((::MoleMole::Config::WeatherType(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOMGANGGGD_GPAAGHNMMNM_OFFSET))(this);
	}

	::System::Void DMANOOPPOJJ(::MoleMole::BattleGameWeatherAndTime EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::BattleGameWeatherAndTime))((::PBYTE)hIl2Cpp + ANOMGANGGGD_DMANOOPPOJJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean DAKHFAAEJOG(::System::String*& AGIHIFJOBCK, ::System::String*& PMNPCHJOFFB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + ANOMGANGGGD_DAKHFAAEJOG_OFFSET))(this, AGIHIFJOBCK, PMNPCHJOFFB);
	}

	::System::Void NFLLJJALFJB(::System::Int32 KCNOHOOPNAH, ::System::Int32 BIOGEIHKABE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ANOMGANGGGD_NFLLJJALFJB_OFFSET))(this, KCNOHOOPNAH, BIOGEIHKABE);
	}

	::JGPGCHAJKGA* EACAKAJOEGD()
	{
		return ((::JGPGCHAJKGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOMGANGGGD_EACAKAJOEGD_OFFSET))(this);
	}

	::System::Void JBHJMPEGCPB(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ANOMGANGGGD_JBHJMPEGCPB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* PDNCLDFKOID()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOMGANGGGD_PDNCLDFKOID_OFFSET))(this);
	}

	::System::Void COOHJECKCGP(::MoleMole::InLevelAvatarDataItem* CBHCJFDKGNP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelAvatarDataItem*))((::PBYTE)hIl2Cpp + ANOMGANGGGD_COOHJECKCGP_OFFSET))(this, CBHCJFDKGNP);
	}

	::System::Void OMJFOEADDDN(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*& OBPDAMEDECL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*&))((::PBYTE)hIl2Cpp + ANOMGANGGGD_OMJFOEADDDN_OFFSET))(this, OBPDAMEDECL);
	}

	::System::Void PEIAEIIPDOE(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* POGPBDGLJFJ, ::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>* IPCODHODDLE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*))((::PBYTE)hIl2Cpp + ANOMGANGGGD_PEIAEIIPDOE_OFFSET))(this, POGPBDGLJFJ, IPCODHODDLE);
	}

	::System::Void EOOPMKJEOPC(::System::Int32 KCNOHOOPNAH, ::System::Int32 DGCODINOOPC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ANOMGANGGGD_EOOPMKJEOPC_OFFSET))(this, KCNOHOOPNAH, DGCODINOOPC);
	}

	static ::System::Int32 BMPOOFICLHD()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + ANOMGANGGGD_BMPOOFICLHD_OFFSET))();
	}

	::System::Boolean DHGNACDMFHG(::System::String* AGIHIFJOBCK, ::System::String* PMNPCHJOFFB, ::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>& EPFNBELDLDP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>&))((::PBYTE)hIl2Cpp + ANOMGANGGGD_DHGNACDMFHG_OFFSET))(this, AGIHIFJOBCK, PMNPCHJOFFB, EPFNBELDLDP);
	}

	::System::Void FGBGGIHNAKF(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ANOMGANGGGD_FGBGGIHNAKF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void POAMLAMENKC(::System::String* MCOHLHMKLIP, ::System::String* EIFJPFICKFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ANOMGANGGGD_POAMLAMENKC_OFFSET))(this, MCOHLHMKLIP, EIFJPFICKFM);
	}

	::System::Void PGNPNIDINNN(::MoleMole::Config::TimePeriodType GFKIDBPICBL, ::MoleMole::Config::WeatherType FBNDABJFDPF, ::System::Boolean ACJNEHDOIEC, ::System::Boolean DCFANHOIMOB, ::System::Int32 DKOFFFNEFJC, ::System::String* KHGFAKJKDGG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + ANOMGANGGGD_PGNPNIDINNN_OFFSET))(this, GFKIDBPICBL, FBNDABJFDPF, ACJNEHDOIEC, DCFANHOIMOB, DKOFFFNEFJC, KHGFAKJKDGG);
	}

	::System::Int32 KBGIDFAEOEI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOMGANGGGD_KBGIDFAEOEI_OFFSET))(this);
	}

	::System::String* BNAJELKCNHP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOMGANGGGD_BNAJELKCNHP_OFFSET))(this);
	}

	::MoleMole::BattleGameWeatherAndTime MAPLJIICGEL()
	{
		return ((::MoleMole::BattleGameWeatherAndTime(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOMGANGGGD_MAPLJIICGEL_OFFSET))(this);
	}

	::System::String* JDCBLEGMJAP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOMGANGGGD_JDCBLEGMJAP_OFFSET))(this);
	}

	::System::Void KLLDDILJFJL(::MoleMole::InLevelAvatarDataItem* CBHCJFDKGNP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelAvatarDataItem*))((::PBYTE)hIl2Cpp + ANOMGANGGGD_KLLDDILJFJL_OFFSET))(this, CBHCJFDKGNP);
	}

	::System::Void LKBCNHMPONC(::MoleMole::InLevelAvatarDataItem* CBHCJFDKGNP, ::System::Int32 BIGDCODPFHK, ::System::Int32 KFCKIMAFLHB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelAvatarDataItem*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ANOMGANGGGD_LKBCNHMPONC_OFFSET))(this, CBHCJFDKGNP, BIGDCODPFHK, KFCKIMAFLHB);
	}

	::System::Void BFEGAFIAFIP(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ANOMGANGGGD_BFEGAFIAFIP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DJANNOLOPDI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOMGANGGGD_DJANNOLOPDI_OFFSET))(this);
	}

	::JDFAOFNFGLO* OABEIDBMIEM()
	{
		return ((::JDFAOFNFGLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOMGANGGGD_OABEIDBMIEM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* BLOGBDCPAGO()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOMGANGGGD_BLOGBDCPAGO_OFFSET))(this);
	}

	::System::Void IKGHDGAIPHN(::System::Collections::Generic::List_1<::System::Int32>* CHPJPFBJGLH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + ANOMGANGGGD_IKGHDGAIPHN_OFFSET))(this, CHPJPFBJGLH);
	}

	::System::Void MALJLPNEBDI(::MoleMole::Config::TimePeriodType EMFIDMPAGIG, ::System::Int32 DKOFFFNEFJC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::TimePeriodType, ::System::Int32))((::PBYTE)hIl2Cpp + ANOMGANGGGD_MALJLPNEBDI_OFFSET))(this, EMFIDMPAGIG, DKOFFFNEFJC);
	}

	::System::Void LEBCJFEGBMM(::System::String* MCOHLHMKLIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ANOMGANGGGD_LEBCJFEGBMM_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Boolean NCDBKFMPCHG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOMGANGGGD_NCDBKFMPCHG_OFFSET))(this);
	}

	::EHDAGHGEDJO* MIAFKJELNMO()
	{
		return ((::EHDAGHGEDJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOMGANGGGD_MIAFKJELNMO_OFFSET))(this);
	}

	::System::Int32 HCOJKIICFJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOMGANGGGD_HCOJKIICFJL_OFFSET))(this);
	}
};
