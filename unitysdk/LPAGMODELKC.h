#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/LPAGMODELKC_FEBKHIMALCE.h"
#include "unitysdk/LPAGMODELKC_GDFGDCHPIFL.h"
#include "unitysdk/LPAGMODELKC_OFGLDHNGMCJ.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/MoleMole/Cameras/CameraFollowCalcData.h"
#include "unitysdk/MoleMole/Cameras/CameraInfo.h"
#include "unitysdk/NOHGGLFKBEH.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Rect.h"

class DFGPHIKFPPI;
class GEENAHGBJBM;
class ICKFBKHECCA;
class JAMIPCGCADK;
class MACLIPNNIOC;
namespace MoleMole { class CameraDelayData; }
namespace MoleMole { class CameraDelayDatas; }
namespace MoleMole { class CameraModuleAvatarDataConfigExt; }
namespace MoleMole { class CameraModuleDirectionData; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
template <typename T> class GKIEDIJAMJJ_1;

#define LPAGMODELKC_ABNDANBAILG_OFFSET UNITYSDK_OFFSET(0x14D45010)
#define LPAGMODELKC_AHGECFGJGEJ_OFFSET UNITYSDK_OFFSET(0x14D41800)
#define LPAGMODELKC_AMBIFALNHLG_OFFSET UNITYSDK_OFFSET(0x14D46080)
#define LPAGMODELKC_BFLILBCOOLC_OFFSET UNITYSDK_OFFSET(0x14D46220)
#define LPAGMODELKC_BIACBBPKDDO_OFFSET UNITYSDK_OFFSET(0x14D44290)
#define LPAGMODELKC_BNFPONAKPAH_OFFSET UNITYSDK_OFFSET(0x14D4DD40)
#define LPAGMODELKC_BNJHEKFGHLD_OFFSET UNITYSDK_OFFSET(0x14D44C50)
#define LPAGMODELKC_CEAAGHMGHMC_OFFSET UNITYSDK_OFFSET(0x14D4ED60)
#define LPAGMODELKC_CEBPNFECAHI_OFFSET UNITYSDK_OFFSET(0x14D44E80)
#define LPAGMODELKC_CFHMOGOBLON_OFFSET UNITYSDK_OFFSET(0x14D422E0)
#define LPAGMODELKC_CJIGGMLNPPD_OFFSET UNITYSDK_OFFSET(0x14D4A760)
#define LPAGMODELKC_CNOAPEEPFHK_OFFSET UNITYSDK_OFFSET(0x14D4A040)
#define LPAGMODELKC_COKLGGGJPCC_1_OFFSET UNITYSDK_OFFSET(0x14D49CB0)
#define LPAGMODELKC_COKLGGGJPCC_OFFSET UNITYSDK_OFFSET(0x14D49BF0)
#define LPAGMODELKC_CPDBAPAKLMO_OFFSET UNITYSDK_OFFSET(0x14D491D0)
#define LPAGMODELKC_DCCHEEAHLGL_OFFSET UNITYSDK_OFFSET(0x14D40C50)
#define LPAGMODELKC_DDPAPIGFCPN_OFFSET UNITYSDK_OFFSET(0x14D43640)
#define LPAGMODELKC_DEJBLPBCMNA_OFFSET UNITYSDK_OFFSET(0x14D4A3C0)
#define LPAGMODELKC_DJPBDFPNNNK_OFFSET UNITYSDK_OFFSET(0x14D42710)
#define LPAGMODELKC_DKKIAKLNGCM_OFFSET UNITYSDK_OFFSET(0x14D41980)
#define LPAGMODELKC_EBHCAOONEEC_OFFSET UNITYSDK_OFFSET(0x14D49A10)
#define LPAGMODELKC_ECHLLIBLBCC_OFFSET UNITYSDK_OFFSET(0x14D42C80)
#define LPAGMODELKC_EGNLCKEHIEG_OFFSET UNITYSDK_OFFSET(0x14D4AC30)
#define LPAGMODELKC_EGOKJBDHFII_OFFSET UNITYSDK_OFFSET(0x14D41C50)
#define LPAGMODELKC_ELCAFHHEIED_OFFSET UNITYSDK_OFFSET(0x14D416F0)
#define LPAGMODELKC_FCDOHNDOCMJ_OFFSET UNITYSDK_OFFSET(0x14D4DE50)
#define LPAGMODELKC_FIHDFDNHJED_OFFSET UNITYSDK_OFFSET(0x14D4ACA0)
#define LPAGMODELKC_GACPDCEMJOA_OFFSET UNITYSDK_OFFSET(0x14D42BC0)
#define LPAGMODELKC_GBNLCCIEFMI_OFFSET UNITYSDK_OFFSET(0x14D49E60)
#define LPAGMODELKC_GEBDGBKFGLN_OFFSET UNITYSDK_OFFSET(0x14D4EB70)
#define LPAGMODELKC_GGPPPPJOJNP_OFFSET UNITYSDK_OFFSET(0x14D41FB0)
#define LPAGMODELKC_GKDMLLOKPKJ_OFFSET UNITYSDK_OFFSET(0x14D47240)
#define LPAGMODELKC_HEMOHDFDKEG_OFFSET UNITYSDK_OFFSET(0x14D4ED40)
#define LPAGMODELKC_HIALFBMNIGM_OFFSET UNITYSDK_OFFSET(0x14D44490)
#define LPAGMODELKC_HIIKEONFCBF_OFFSET UNITYSDK_OFFSET(0x14D43FC0)
#define LPAGMODELKC_HKAKHNAODAO_OFFSET UNITYSDK_OFFSET(0x14D44F60)
#define LPAGMODELKC_HMGAKEKMBLI_OFFSET UNITYSDK_OFFSET(0x14D41B80)
#define LPAGMODELKC_IEBFOBFNIMH_OFFSET UNITYSDK_OFFSET(0x14D44C60)
#define LPAGMODELKC_IEPEDHEJIPK_OFFSET UNITYSDK_OFFSET(0x14D4B6B0)
#define LPAGMODELKC_IIFHGPPGIAD_OFFSET UNITYSDK_OFFSET(0x14D43560)
#define LPAGMODELKC_IONJALBCIEP_OFFSET UNITYSDK_OFFSET(0x14D49710)
#define LPAGMODELKC_IPGLFGNIJIE_OFFSET UNITYSDK_OFFSET(0x14D422F0)
#define LPAGMODELKC_JCEHMPBINMG_OFFSET UNITYSDK_OFFSET(0x14D434F0)
#define LPAGMODELKC_JGAGFFDFAEB_OFFSET UNITYSDK_OFFSET(0x14D4E950)
#define LPAGMODELKC_JKEDFKHLAHJ_OFFSET UNITYSDK_OFFSET(0x14D4C9D0)
#define LPAGMODELKC_JKEJMLPLJPI_OFFSET UNITYSDK_OFFSET(0x14D4EC80)
#define LPAGMODELKC_KOMGGGEEIJI_OFFSET UNITYSDK_OFFSET(0x14D4EA00)
#define LPAGMODELKC_LBJHDLBLCFO_OFFSET UNITYSDK_OFFSET(0x14D4DC20)
#define LPAGMODELKC_LCCDGGBKPKF_OFFSET UNITYSDK_OFFSET(0x14D45960)
#define LPAGMODELKC_LFABHOFHJGG_OFFSET UNITYSDK_OFFSET(0x14D42980)
#define LPAGMODELKC_LJCFICHJPHD_OFFSET UNITYSDK_OFFSET(0x14D42F40)
#define LPAGMODELKC_MDDFBJIINJB_OFFSET UNITYSDK_OFFSET(0x14D49E50)
#define LPAGMODELKC_MFNODBCBCNB_1_OFFSET UNITYSDK_OFFSET(0x14D44340)
#define LPAGMODELKC_MFNODBCBCNB_OFFSET UNITYSDK_OFFSET(0x14D40D60)
#define LPAGMODELKC_MGNKHEGGMFO_OFFSET UNITYSDK_OFFSET(0x14D4E8D0)
#define LPAGMODELKC_MHGGALAGADP_OFFSET UNITYSDK_OFFSET(0x14D4E820)
#define LPAGMODELKC_MHNBGMPGEKO_OFFSET UNITYSDK_OFFSET(0x14D42340)
#define LPAGMODELKC_MJGCNGFMJAI_OFFSET UNITYSDK_OFFSET(0x14D41A00)
#define LPAGMODELKC_MNFAHDAOLMK_OFFSET UNITYSDK_OFFSET(0x14D4DED0)
#define LPAGMODELKC_NAIMCLKOEKN_OFFSET UNITYSDK_OFFSET(0x14D44030)
#define LPAGMODELKC_NAKFMJIPEEG_OFFSET UNITYSDK_OFFSET(0x14D49780)
#define LPAGMODELKC_NMEFJECBAPF_OFFSET UNITYSDK_OFFSET(0x14D4D310)
#define LPAGMODELKC_NMOEHHLOEBL_OFFSET UNITYSDK_OFFSET(0x14D49BE0)
#define LPAGMODELKC_NNPIHEMIDJN_OFFSET UNITYSDK_OFFSET(0x14D4EAF0)
#define LPAGMODELKC_OBGJJMFFGKN_OFFSET UNITYSDK_OFFSET(0x14D425C0)
#define LPAGMODELKC_OBMBAKGEBMN_OFFSET UNITYSDK_OFFSET(0x14D43ED0)
#define LPAGMODELKC_OGNEALICCIP_OFFSET UNITYSDK_OFFSET(0x14D442A0)
#define LPAGMODELKC_OJHMCICECLO_OFFSET UNITYSDK_OFFSET(0x14D418F0)
#define LPAGMODELKC_OJIDJMDGFOF_OFFSET UNITYSDK_OFFSET(0x14D41AD0)
#define LPAGMODELKC_OLFNDFPHHCO_OFFSET UNITYSDK_OFFSET(0x14D48D30)
#define LPAGMODELKC_PIIDMCBMCOC_OFFSET UNITYSDK_OFFSET(0x14D41990)
#define LPAGMODELKC_PLHBPFOPMGM_OFFSET UNITYSDK_OFFSET(0x14D4AD20)
#define LPAGMODELKC__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D40C40)
#define LPAGMODELKC__CTOR_OFFSET UNITYSDK_OFFSET(0x14D405D0)

inline static constexpr unsigned int LPAGMODELKC_TypeDefinitionIndex = 58277;

class LPAGMODELKC : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_DFHHGKDDPHH()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LPAGMODELKC_TypeDefinitionIndex)->GetStaticField(0x12780);
	}
	// static const ::System::Single JNJPGCJFEPP; // 0x0
	// static const ::System::Single MILMGPONFKE; // 0x0
	// static const ::System::Single NIJBEIOGCOK; // 0x0
	// static const ::System::Single IBKBEPGENNL; // 0x0
	// static const ::System::Single ODBHOMNDMJM; // 0x0
	// static const ::System::Single KPAEPCNPHKC; // 0x0
	// static const ::System::Single APAPAOOEJBO; // 0x0
	// static const ::System::Single LBEDMNGDKIK; // 0x0
	// static const ::System::Single LHJIPCMCHHA; // 0x0
	// static const ::System::Single MLCNOGPFMKO; // 0x0
	// static const ::System::Single CDPACGAKLPA; // 0x0
	// static const ::System::Int32 OOOJKGKOOBF = 0x2; // 0x0
	// static const ::System::Single AJPCAHMALKC; // 0x0
	::GKIEDIJAMJJ_1<::System::Single>* PIALHPGFEOE; // 0x10
	::JAMIPCGCADK* OCFFBGMEILG; // 0x18
	::Il2CppArray<::UnityEngine::Vector4>* DCJIHHDEAEE; // 0x20
	::MACLIPNNIOC* _FMLALDLNHMA_k__BackingField; // 0x28
	::GKIEDIJAMJJ_1<::System::Single>* NOMDFDLLCEI; // 0x30
	::MoleMole::Cameras::CameraDataAccessor* LJBPECKCCEA; // 0x38
	::GEENAHGBJBM* CAKCJMFHLKO; // 0x40
	::ICKFBKHECCA* JCDMLFFHFLF; // 0x48
	::Cinemachine::CameraState JBDIJLLGBKA; // 0x50
	::MoleMole::CameraModuleDirectionData* EJOLIIPBOEN; // 0x138
	::Il2CppArray<::UnityEngine::Vector4>* NHLCMECFPPJ; // 0x140
	::GEENAHGBJBM* PHMFKNNAGGG; // 0x148
	::DFGPHIKFPPI* KKKDBINMNEM; // 0x150
	::GEENAHGBJBM* BHBKBGCKNCB; // 0x158
	::JAMIPCGCADK* IGGDPOKJBPF; // 0x160
	::MoleMole::CameraDelayData* GLEKGHIHEDD; // 0x168
	::Il2CppArray<::UnityEngine::Vector4>* CDBBOKCCJJG; // 0x170
	::Il2CppArray<::UnityEngine::Vector4>* OELKDIBDHAK; // 0x178
	::UnityEngine::Vector3 OCCCOMOBBDO; // 0x180
	::UnityEngine::Vector3 GCJHNCCEIAJ; // 0x18C
	::System::Single NAKOLOGDDHA; // 0x198
	::LPAGMODELKC_OFGLDHNGMCJ JOPHIIJJCOE; // 0x19C
	::UnityEngine::Vector3 POGEINLOJHI; // 0x1EC
	::System::Single HHCNIILDELB; // 0x1F8
	::UnityEngine::Vector3 FPILBFEGMNF; // 0x1FC
	::UnityEngine::Vector3 PLGNHLOGFBN; // 0x208
	::UnityEngine::Vector3 PIGKNMENGBA; // 0x214
	::System::Single AGHEJDJGLLD; // 0x220
	::UnityEngine::Vector3 DGHPILHCFMM; // 0x224
	::UnityEngine::Vector3 BPEGPIOJIPP; // 0x230
	::LPAGMODELKC_GDFGDCHPIFL FKDFMCCHOJN; // 0x23C
	::System::Single OFDNOHFFKOG; // 0x264
	::UnityEngine::Vector3 AOECLFCHDCL; // 0x268
	::System::Boolean ELCNJALJMJA; // 0x274
	::System::Boolean PHOLBDLINIE; // 0x275
	::System::Byte IJBAKNIKJAN; // 0x276
	::System::Boolean NAGLOONJKHO; // 0x277
	::LPAGMODELKC_OFGLDHNGMCJ FIMAENGJICD; // 0x278
	::UnityEngine::Vector2 GJEGFHDOBEM; // 0x2C8
	::UnityEngine::Vector3 GLCCEJEIHGF; // 0x2D0
	::UnityEngine::Quaternion HOGFBGODFPL; // 0x2DC
	::UnityEngine::Vector3 JPHPHEBMJKG; // 0x2EC
	::System::Single JCEPCMDECLB; // 0x2F8
	::System::Single PGJOHNEEHCN; // 0x2FC
	::System::UInt32 NIAFEFLIBPF; // 0x300
	::System::Single NACHKHJJPCK; // 0x304
	::UnityEngine::Vector3 DECOCFMLADG; // 0x308
	::UnityEngine::Vector2 BHAJGNOHPIP; // 0x314
	::UnityEngine::Vector3 OAPFPNGJCPJ; // 0x31C

	::System::Void _ctor(::DFGPHIKFPPI* AMNIHACKELI, ::MoleMole::CameraModuleAvatarDataConfigExt* DFMKILICPFB, ::MoleMole::Cameras::CameraDataAccessor* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::DFGPHIKFPPI*, ::MoleMole::CameraModuleAvatarDataConfigExt*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + LPAGMODELKC__CTOR_OFFSET))(this, AMNIHACKELI, DFMKILICPFB, LJBPECKCCEA);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPAGMODELKC__CCTOR_OFFSET))();
	}

	::System::Void DCCHEEAHLGL(::System::String* MCOHLHMKLIP, ::System::Single EGEGIMGMJHN, ::System::UInt32 DKOFFFNEFJC, ::System::Single MDPPNMIPDMP, ::System::Func_1<::System::Single>* CAOPDAMCNCN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::UInt32, ::System::Single, ::System::Func_1<::System::Single>*))((::PBYTE)hIl2Cpp + LPAGMODELKC_DCCHEEAHLGL_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, DKOFFFNEFJC, MDPPNMIPDMP, CAOPDAMCNCN);
	}

	static ::System::Single MFNODBCBCNB(::Cinemachine::CameraState& ANOHIDIPEMN, ::MoleMole::Cameras::CameraDataAccessor* LJBPECKCCEA, ::UnityEngine::Rect FCMKLEFEAJE, ::System::Single PMNLNNGEIFM, ::System::Single& OMHPABBIBOC)
	{
		return ((::System::Single(*)(::Cinemachine::CameraState&, ::MoleMole::Cameras::CameraDataAccessor*, ::UnityEngine::Rect, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + LPAGMODELKC_MFNODBCBCNB_OFFSET))(ANOHIDIPEMN, LJBPECKCCEA, FCMKLEFEAJE, PMNLNNGEIFM, OMHPABBIBOC);
	}

	::UnityEngine::Vector3 OJHMCICECLO()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAGMODELKC_OJHMCICECLO_OFFSET))(this);
	}

	::ICKFBKHECCA* DKKIAKLNGCM()
	{
		return ((::ICKFBKHECCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAGMODELKC_DKKIAKLNGCM_OFFSET))(this);
	}

	::System::Single PIIDMCBMCOC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAGMODELKC_PIIDMCBMCOC_OFFSET))(this);
	}

	::UnityEngine::Rect MJGCNGFMJAI()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAGMODELKC_MJGCNGFMJAI_OFFSET))(this);
	}

	::System::Void HMGAKEKMBLI(::Cinemachine::CameraState JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + LPAGMODELKC_HMGAKEKMBLI_OFFSET))(this, JKBLDFBGBPK);
	}

	static ::System::String* GGPPPPJOJNP(::UnityEngine::Rect EGEGIMGMJHN)
	{
		return ((::System::String*(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + LPAGMODELKC_GGPPPPJOJNP_OFFSET))(EGEGIMGMJHN);
	}

	::System::Void CFHMOGOBLON(::UnityEngine::Rect EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + LPAGMODELKC_CFHMOGOBLON_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void IPGLFGNIJIE(::MoleMole::CameraModuleAvatarDataConfigExt* OLMACFDNMEC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*))((::PBYTE)hIl2Cpp + LPAGMODELKC_IPGLFGNIJIE_OFFSET))(this, OLMACFDNMEC);
	}

	::UnityEngine::Vector3 MHNBGMPGEKO(::System::Single PMNLNNGEIFM)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LPAGMODELKC_MHNBGMPGEKO_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void LFABHOFHJGG(::Cinemachine::CameraState& ANOHIDIPEMN, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + LPAGMODELKC_LFABHOFHJGG_OFFSET))(this, ANOHIDIPEMN, PMNLNNGEIFM);
	}

	::System::Single ECHLLIBLBCC(::Cinemachine::CameraState& ANOHIDIPEMN, ::System::Single PMNLNNGEIFM, ::UnityEngine::Vector3 KBHFBLJPFJH)
	{
		return ((::System::Single(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LPAGMODELKC_ECHLLIBLBCC_OFFSET))(this, ANOHIDIPEMN, PMNLNNGEIFM, KBHFBLJPFJH);
	}

	::System::Single LJCFICHJPHD(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LPAGMODELKC_LJCFICHJPHD_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Single JCEHMPBINMG()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAGMODELKC_JCEHMPBINMG_OFFSET))(this);
	}

	::UnityEngine::Quaternion IIFHGPPGIAD(::Cinemachine::CameraState& ANOHIDIPEMN, ::System::Single PMNLNNGEIFM)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + LPAGMODELKC_IIFHGPPGIAD_OFFSET))(this, ANOHIDIPEMN, PMNLNNGEIFM);
	}

	::System::Void DDPAPIGFCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAGMODELKC_DDPAPIGFCPN_OFFSET))(this);
	}

	::System::Single OJIDJMDGFOF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAGMODELKC_OJIDJMDGFOF_OFFSET))(this);
	}

	::System::Void HIIKEONFCBF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAGMODELKC_HIIKEONFCBF_OFFSET))(this);
	}

	::System::Boolean NAIMCLKOEKN(::UnityEngine::Rect& DLJPLHKELCO, ::UnityEngine::Vector3 DAAEHEHLLLD, ::UnityEngine::Vector3 KBHFBLJPFJH, ::System::Single ECMOEENIHME)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + LPAGMODELKC_NAIMCLKOEKN_OFFSET))(this, DLJPLHKELCO, DAAEHEHLLLD, KBHFBLJPFJH, ECMOEENIHME);
	}

	::MACLIPNNIOC* BIACBBPKDDO()
	{
		return ((::MACLIPNNIOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAGMODELKC_BIACBBPKDDO_OFFSET))(this);
	}

	static ::System::String* OGNEALICCIP(::UnityEngine::Vector2 EGEGIMGMJHN)
	{
		return ((::System::String*(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + LPAGMODELKC_OGNEALICCIP_OFFSET))(EGEGIMGMJHN);
	}

	::System::Void MFNODBCBCNB_1(::Cinemachine::CameraState& ANOHIDIPEMN, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + LPAGMODELKC_MFNODBCBCNB_1_OFFSET))(this, ANOHIDIPEMN, PMNLNNGEIFM);
	}

	::UnityEngine::Rect HIALFBMNIGM(::UnityEngine::Rect EFJIJAKONMI, ::System::Single ECMOEENIHME, ::System::Single BKGFICGJCGF, ::System::Single KHPPKNBOGIB)
	{
		return ((::UnityEngine::Rect(*)(::PVOID, ::UnityEngine::Rect, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LPAGMODELKC_HIALFBMNIGM_OFFSET))(this, EFJIJAKONMI, ECMOEENIHME, BKGFICGJCGF, KHPPKNBOGIB);
	}

	::System::Void BNJHEKFGHLD(::Cinemachine::CameraState EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + LPAGMODELKC_BNJHEKFGHLD_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Vector4 OBMBAKGEBMN(::UnityEngine::Vector4 IEFBHIDIPPL, ::System::Single HAAEBCOBKFF, ::System::Single BFMMEICFNCD, ::System::Single GNHOCNHLCCA, ::System::Single ALPANKAJAGK)
	{
		return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LPAGMODELKC_OBMBAKGEBMN_OFFSET))(this, IEFBHIDIPPL, HAAEBCOBKFF, BFMMEICFNCD, GNHOCNHLCCA, ALPANKAJAGK);
	}

	::System::Void IEBFOBFNIMH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LPAGMODELKC_IEBFOBFNIMH_OFFSET))(this, PMNLNNGEIFM);
	}

	::UnityEngine::Vector2 CEBPNFECAHI(::UnityEngine::Vector2 MDELFGFOPHJ)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + LPAGMODELKC_CEBPNFECAHI_OFFSET))(this, MDELFGFOPHJ);
	}

	::System::Void HKAKHNAODAO(::MoleMole::Cameras::CameraInfo& HODAIDNDKHD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraInfo&))((::PBYTE)hIl2Cpp + LPAGMODELKC_HKAKHNAODAO_OFFSET))(this, HODAIDNDKHD);
	}

	::Cinemachine::CameraState ABNDANBAILG(::UnityEngine::Vector3 NFLNBCPPJGL, ::NOHGGLFKBEH& BLLBLFJKMFA, ::System::Single PMNLNNGEIFM)
	{
		return ((::Cinemachine::CameraState(*)(::PVOID, ::UnityEngine::Vector3, ::NOHGGLFKBEH&, ::System::Single))((::PBYTE)hIl2Cpp + LPAGMODELKC_ABNDANBAILG_OFFSET))(this, NFLNBCPPJGL, BLLBLFJKMFA, PMNLNNGEIFM);
	}

	::UnityEngine::Quaternion CPDBAPAKLMO(::UnityEngine::Vector3 NFLNBCPPJGL)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LPAGMODELKC_CPDBAPAKLMO_OFFSET))(this, NFLNBCPPJGL);
	}

	::UnityEngine::Vector3 OBGJJMFFGKN()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAGMODELKC_OBGJJMFFGKN_OFFSET))(this);
	}

	::System::Single IONJALBCIEP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAGMODELKC_IONJALBCIEP_OFFSET))(this);
	}

	::MoleMole::CameraDelayData* NAKFMJIPEEG(::MoleMole::CameraDelayDatas* LDHANCOIDNB, ::System::Single IMLLDOHDCNC)
	{
		return ((::MoleMole::CameraDelayData*(*)(::PVOID, ::MoleMole::CameraDelayDatas*, ::System::Single))((::PBYTE)hIl2Cpp + LPAGMODELKC_NAKFMJIPEEG_OFFSET))(this, LDHANCOIDNB, IMLLDOHDCNC);
	}

	::UnityEngine::Quaternion EBHCAOONEEC(::UnityEngine::Vector3 NFLNBCPPJGL)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LPAGMODELKC_EBHCAOONEEC_OFFSET))(this, NFLNBCPPJGL);
	}

	::System::Void NMOEHHLOEBL(::UnityEngine::Rect EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + LPAGMODELKC_NMOEHHLOEBL_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::System::Single COKLGGGJPCC(::System::Single LMIEHGCLLNK, ::System::Single GEHCLOCGALP, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LPAGMODELKC_COKLGGGJPCC_OFFSET))(LMIEHGCLLNK, GEHCLOCGALP, PMNLNNGEIFM);
	}

	static ::UnityEngine::Rect ELCAFHHEIED(::UnityEngine::Rect EFJIJAKONMI, ::System::Single LIMONMIDKFB, ::System::Single KHPPKNBOGIB)
	{
		return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LPAGMODELKC_ELCAFHHEIED_OFFSET))(EFJIJAKONMI, LIMONMIDKFB, KHPPKNBOGIB);
	}

	static ::UnityEngine::Vector3 COKLGGGJPCC_1(::UnityEngine::Vector3& LMIEHGCLLNK, ::UnityEngine::Vector3& GEHCLOCGALP, ::System::Single PMNLNNGEIFM)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + LPAGMODELKC_COKLGGGJPCC_1_OFFSET))(LMIEHGCLLNK, GEHCLOCGALP, PMNLNNGEIFM);
	}

	::DFGPHIKFPPI* MDDFBJIINJB()
	{
		return ((::DFGPHIKFPPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAGMODELKC_MDDFBJIINJB_OFFSET))(this);
	}

	::LPAGMODELKC_FEBKHIMALCE GBNLCCIEFMI(::System::Single PMNLNNGEIFM)
	{
		return ((::LPAGMODELKC_FEBKHIMALCE(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LPAGMODELKC_GBNLCCIEFMI_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void OLFNDFPHHCO(::Cinemachine::CameraState& JKBLDFBGBPK, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + LPAGMODELKC_OLFNDFPHHCO_OFFSET))(this, JKBLDFBGBPK, PMNLNNGEIFM);
	}

	::System::Void CNOAPEEPFHK(::MoleMole::Cameras::CameraInfo& HODAIDNDKHD, ::MoleMole::Cameras::CameraFollowCalcData& AEIFLCGEFDN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraInfo&, ::MoleMole::Cameras::CameraFollowCalcData&))((::PBYTE)hIl2Cpp + LPAGMODELKC_CNOAPEEPFHK_OFFSET))(this, HODAIDNDKHD, AEIFLCGEFDN);
	}

	::Cinemachine::CameraState DEJBLPBCMNA(::UnityEngine::Vector3 NFLNBCPPJGL)
	{
		return ((::Cinemachine::CameraState(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LPAGMODELKC_DEJBLPBCMNA_OFFSET))(this, NFLNBCPPJGL);
	}

	::UnityEngine::Vector3 CJIGGMLNPPD(::UnityEngine::Vector3 KKFFEKHFEKJ, ::UnityEngine::Vector3 FKKEIKOHOAL, ::UnityEngine::Vector3 POOLLGAJCJF, ::UnityEngine::Vector3 KBHFBLJPFJH, ::UnityEngine::Vector3 ADJCINEJGBP, ::System::Single EJAOAGGJHHA)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + LPAGMODELKC_CJIGGMLNPPD_OFFSET))(this, KKFFEKHFEKJ, FKKEIKOHOAL, POOLLGAJCJF, KBHFBLJPFJH, ADJCINEJGBP, EJAOAGGJHHA);
	}

	::Cinemachine::CameraState LCCDGGBKPKF(::UnityEngine::Vector3 NFLNBCPPJGL)
	{
		return ((::Cinemachine::CameraState(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LPAGMODELKC_LCCDGGBKPKF_OFFSET))(this, NFLNBCPPJGL);
	}

	::System::Void EGNLCKEHIEG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAGMODELKC_EGNLCKEHIEG_OFFSET))(this);
	}

	::System::Void BFLILBCOOLC(::Cinemachine::CameraState& ANOHIDIPEMN, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + LPAGMODELKC_BFLILBCOOLC_OFFSET))(this, ANOHIDIPEMN, PMNLNNGEIFM);
	}

	::UnityEngine::Vector3 JKEDFKHLAHJ(::UnityEngine::Vector3 PMMHPDOBJAC, ::UnityEngine::Vector3 NFLNBCPPJGL, ::UnityEngine::Vector3 DFPFNIHLDEG, ::UnityEngine::Rect FCMKLEFEAJE, ::UnityEngine::Rect GJGCEGNKBID)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + LPAGMODELKC_JKEDFKHLAHJ_OFFSET))(this, PMMHPDOBJAC, NFLNBCPPJGL, DFPFNIHLDEG, FCMKLEFEAJE, GJGCEGNKBID);
	}

	::UnityEngine::Vector3 DJPBDFPNNNK(::System::Single IMLLDOHDCNC)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LPAGMODELKC_DJPBDFPNNNK_OFFSET))(this, IMLLDOHDCNC);
	}

	::UnityEngine::Vector3 FIHDFDNHJED()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAGMODELKC_FIHDFDNHJED_OFFSET))(this);
	}

	::System::Void LBJHDLBLCFO(::System::Single PBBPLNHPHNH, ::System::Boolean& DFGFFNFADKM, ::System::Single& BDNIIDACPBO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean&, ::System::Single&))((::PBYTE)hIl2Cpp + LPAGMODELKC_LBJHDLBLCFO_OFFSET))(this, PBBPLNHPHNH, DFGFFNFADKM, BDNIIDACPBO);
	}

	::System::Void EGOKJBDHFII(::UnityEngine::Vector3 CKPGOKHECCH, ::UnityEngine::Quaternion GJNLCLDFFIN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + LPAGMODELKC_EGOKJBDHFII_OFFSET))(this, CKPGOKHECCH, GJNLCLDFFIN);
	}

	static ::UnityEngine::Vector3 AHGECFGJGEJ(::UnityEngine::Vector3 HJFMMCLBMHH, ::UnityEngine::Rect HCKPEJGPCFA)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + LPAGMODELKC_AHGECFGJGEJ_OFFSET))(HJFMMCLBMHH, HCKPEJGPCFA);
	}

	::System::Void BNFPONAKPAH(::System::String* MCOHLHMKLIP, ::System::Single EGEGIMGMJHN, ::System::UInt32 DKOFFFNEFJC, ::System::Single MDPPNMIPDMP, ::System::Func_1<::System::Single>* CAOPDAMCNCN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::UInt32, ::System::Single, ::System::Func_1<::System::Single>*))((::PBYTE)hIl2Cpp + LPAGMODELKC_BNFPONAKPAH_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, DKOFFFNEFJC, MDPPNMIPDMP, CAOPDAMCNCN);
	}

	::System::Void FCDOHNDOCMJ(::System::String* MCOHLHMKLIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LPAGMODELKC_FCDOHNDOCMJ_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Void AMBIFALNHLG(::Cinemachine::CameraState& ANOHIDIPEMN, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + LPAGMODELKC_AMBIFALNHLG_OFFSET))(this, ANOHIDIPEMN, PMNLNNGEIFM);
	}

	::System::Single MNFAHDAOLMK(::System::Single PMNLNNGEIFM, ::System::Single HINCBJIMONO, ::System::Single CGMLNDAOOFJ)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LPAGMODELKC_MNFAHDAOLMK_OFFSET))(this, PMNLNNGEIFM, HINCBJIMONO, CGMLNDAOOFJ);
	}

	::System::Void GKDMLLOKPKJ(::Cinemachine::CameraState& ANOHIDIPEMN, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + LPAGMODELKC_GKDMLLOKPKJ_OFFSET))(this, ANOHIDIPEMN, PMNLNNGEIFM);
	}

	static ::System::Single MGNKHEGGMFO(::System::Single GEHCLOCGALP, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LPAGMODELKC_MGNKHEGGMFO_OFFSET))(GEHCLOCGALP, PMNLNNGEIFM);
	}

	::System::Void NNPIHEMIDJN(::System::String* MCOHLHMKLIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LPAGMODELKC_NNPIHEMIDJN_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Void NMEFJECBAPF(::Cinemachine::CameraState& JKBLDFBGBPK, ::UnityEngine::Rect HCKPEJGPCFA, ::UnityEngine::Vector3 DFPFNIHLDEG, ::UnityEngine::Quaternion& HAMMPOGBAPF, ::System::Single ECMOEENIHME, ::System::Single BKGFICGJCGF, ::System::Single PMNLNNGEIFM, ::System::Boolean PPGLBDELEBF)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::UnityEngine::Rect, ::UnityEngine::Vector3, ::UnityEngine::Quaternion&, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + LPAGMODELKC_NMEFJECBAPF_OFFSET))(this, JKBLDFBGBPK, HCKPEJGPCFA, DFPFNIHLDEG, HAMMPOGBAPF, ECMOEENIHME, BKGFICGJCGF, PMNLNNGEIFM, PPGLBDELEBF);
	}

	::MoleMole::CameraModuleAvatarDataConfigExt* GACPDCEMJOA()
	{
		return ((::MoleMole::CameraModuleAvatarDataConfigExt*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAGMODELKC_GACPDCEMJOA_OFFSET))(this);
	}

	::System::Void GEBDGBKFGLN(::UnityEngine::Vector3 NFLNBCPPJGL, ::NOHGGLFKBEH& BLLBLFJKMFA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::NOHGGLFKBEH&, ::System::Single))((::PBYTE)hIl2Cpp + LPAGMODELKC_GEBDGBKFGLN_OFFSET))(this, NFLNBCPPJGL, BLLBLFJKMFA, PMNLNNGEIFM);
	}

	static ::System::Single JGAGFFDFAEB(::System::Single HLHGPHBJCJA)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + LPAGMODELKC_JGAGFFDFAEB_OFFSET))(HLHGPHBJCJA);
	}

	::UnityEngine::Vector3 JKEJMLPLJPI()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAGMODELKC_JKEJMLPLJPI_OFFSET))(this);
	}

	::Cinemachine::CameraState HEMOHDFDKEG()
	{
		return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAGMODELKC_HEMOHDFDKEG_OFFSET))(this);
	}

	::UnityEngine::Rect KOMGGGEEIJI()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAGMODELKC_KOMGGGEEIJI_OFFSET))(this);
	}

	static ::System::Void IEPEDHEJIPK(::LPAGMODELKC*& OMPHGGCEIBD, ::System::Single PMNLNNGEIFM, ::UnityEngine::Vector3 KBHFBLJPFJH, ::UnityEngine::Vector3 EFLMAGCFBNE, ::UnityEngine::Vector3& DFJILFBFFMB, ::UnityEngine::Quaternion& EOFOHNNAIFL, ::System::ValueTuple_2<::UnityEngine::Quaternion, ::UnityEngine::Vector3>& OFCEIMLPNOC)
	{
		return ((::System::Void(*)(::LPAGMODELKC*&, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::System::ValueTuple_2<::UnityEngine::Quaternion, ::UnityEngine::Vector3>&))((::PBYTE)hIl2Cpp + LPAGMODELKC_IEPEDHEJIPK_OFFSET))(OMPHGGCEIBD, PMNLNNGEIFM, KBHFBLJPFJH, EFLMAGCFBNE, DFJILFBFFMB, EOFOHNNAIFL, OFCEIMLPNOC);
	}

	::System::Void PLHBPFOPMGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAGMODELKC_PLHBPFOPMGM_OFFSET))(this);
	}

	::UnityEngine::Quaternion CEAAGHMGHMC(::UnityEngine::Vector3 NFLNBCPPJGL)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LPAGMODELKC_CEAAGHMGHMC_OFFSET))(this, NFLNBCPPJGL);
	}

	::System::Void MHGGALAGADP(::System::Int32 FAKHCNLCBCE, ::System::Single MEHNMDDMAEN, ::System::Single CAOPDAMCNCN, ::System::Single MHFEOFBGNDJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LPAGMODELKC_MHGGALAGADP_OFFSET))(this, FAKHCNLCBCE, MEHNMDDMAEN, CAOPDAMCNCN, MHFEOFBGNDJ);
	}
};
