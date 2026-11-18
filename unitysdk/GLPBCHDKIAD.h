#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BuddyBehaviourType.h"
#include "unitysdk/MoleMole/Config/BuddyTeamType.h"
#include "unitysdk/NMICPPGOBJH.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/UnityEngine/LayerMask.h"

class ENGKPGFGGLM;
class JPKHEMNFNLK;
namespace MoleMole::Battle { class AnimatorParamControl; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GLPBCHDKIAD_AGCGCJJIALI_OFFSET UNITYSDK_OFFSET(0x17AC9D20)
#define GLPBCHDKIAD_AOLNKFPEIHJ_OFFSET UNITYSDK_OFFSET(0x17AD0C70)
#define GLPBCHDKIAD_BCIOIOHOAGA_OFFSET UNITYSDK_OFFSET(0x17AD00F0)
#define GLPBCHDKIAD_BECPPHHBIPH_OFFSET UNITYSDK_OFFSET(0x17AD0900)
#define GLPBCHDKIAD_BGFDJNIBEFN_OFFSET UNITYSDK_OFFSET(0x17ACBE70)
#define GLPBCHDKIAD_BGJDCBLNNOP_OFFSET UNITYSDK_OFFSET(0x17ACF780)
#define GLPBCHDKIAD_BLPPNIMKIBJ_OFFSET UNITYSDK_OFFSET(0x17ACD6A0)
#define GLPBCHDKIAD_CKGNCNMAGMH_OFFSET UNITYSDK_OFFSET(0x17ACC1C0)
#define GLPBCHDKIAD_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x17AD1330)
#define GLPBCHDKIAD_COKLFNPDODD_OFFSET UNITYSDK_OFFSET(0x17AD13C0)
#define GLPBCHDKIAD_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x17AC7040)
#define GLPBCHDKIAD_DDHDFKKPBEI_OFFSET UNITYSDK_OFFSET(0x17AD1140)
#define GLPBCHDKIAD_DEFNOLNPDNC_OFFSET UNITYSDK_OFFSET(0x17ACC420)
#define GLPBCHDKIAD_EGPLDOALKPF_OFFSET UNITYSDK_OFFSET(0x17ACE730)
#define GLPBCHDKIAD_ELFCPCKPEME_OFFSET UNITYSDK_OFFSET(0x17AD0F80)
#define GLPBCHDKIAD_FBNKJFBLHDP_OFFSET UNITYSDK_OFFSET(0x17AC8820)
#define GLPBCHDKIAD_GJLFJHKKCHI_OFFSET UNITYSDK_OFFSET(0x17AC9BA0)
#define GLPBCHDKIAD_GPHHMHAHFPJ_OFFSET UNITYSDK_OFFSET(0x17AC8C20)
#define GLPBCHDKIAD_HAEJCPKCPPF_OFFSET UNITYSDK_OFFSET(0x17AC88D0)
#define GLPBCHDKIAD_HBMEMPFGANI_OFFSET UNITYSDK_OFFSET(0x17ACFAF0)
#define GLPBCHDKIAD_HMGAAEJCLDI_OFFSET UNITYSDK_OFFSET(0x17AC8D80)
#define GLPBCHDKIAD_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x17ACE140)
#define GLPBCHDKIAD_IDPPLNKKPAN_OFFSET UNITYSDK_OFFSET(0x17AC7F20)
#define GLPBCHDKIAD_IGHNPCJKMFH_OFFSET UNITYSDK_OFFSET(0x17AD1540)
#define GLPBCHDKIAD_IJMAHCPABLF_OFFSET UNITYSDK_OFFSET(0x17ACB910)
#define GLPBCHDKIAD_JDAAMBEKHLI_OFFSET UNITYSDK_OFFSET(0x17ACF480)
#define GLPBCHDKIAD_JHDEFNPIIBA_OFFSET UNITYSDK_OFFSET(0x17AC99B0)
#define GLPBCHDKIAD_JMJAGBNJCAM_OFFSET UNITYSDK_OFFSET(0x17AD0560)
#define GLPBCHDKIAD_KDFBFJCDGCH_OFFSET UNITYSDK_OFFSET(0x17AC8E10)
#define GLPBCHDKIAD_KFILAJBAHEG_OFFSET UNITYSDK_OFFSET(0x17ACEDF0)
#define GLPBCHDKIAD_KFLABKCGBBB_OFFSET UNITYSDK_OFFSET(0x17ACBAA0)
#define GLPBCHDKIAD_KLIODGHKJGA_OFFSET UNITYSDK_OFFSET(0x17AD0B70)
#define GLPBCHDKIAD_KOKAGKGOMLG_OFFSET UNITYSDK_OFFSET(0x17ACF990)
#define GLPBCHDKIAD_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x17AC7D90)
#define GLPBCHDKIAD_LCCOKGDAOHE_OFFSET UNITYSDK_OFFSET(0x17AC97A0)
#define GLPBCHDKIAD_LDKLMBKAMDD_OFFSET UNITYSDK_OFFSET(0x17AC9110)
#define GLPBCHDKIAD_LFLNMEPCLOK_OFFSET UNITYSDK_OFFSET(0x17ACE870)
#define GLPBCHDKIAD_LGLDBEJLHGP_OFFSET UNITYSDK_OFFSET(0x17ACDFD0)
#define GLPBCHDKIAD_LJKKAPIJHEA_OFFSET UNITYSDK_OFFSET(0x17ACC9D0)
#define GLPBCHDKIAD_LPIIPFCIDJD_OFFSET UNITYSDK_OFFSET(0x17AC8A20)
#define GLPBCHDKIAD_MAICIIPMPKK_OFFSET UNITYSDK_OFFSET(0x17AC9FA0)
#define GLPBCHDKIAD_MFKHFJLOBCI_1_OFFSET UNITYSDK_OFFSET(0x17ACF0A0)
#define GLPBCHDKIAD_MFKHFJLOBCI_OFFSET UNITYSDK_OFFSET(0x17ACCBA0)
#define GLPBCHDKIAD_MGACBGELHBP_OFFSET UNITYSDK_OFFSET(0x17AC9080)
#define GLPBCHDKIAD_MGBMABKBNAP_OFFSET UNITYSDK_OFFSET(0x17ACFE90)
#define GLPBCHDKIAD_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x17ACE0B0)
#define GLPBCHDKIAD_MNEJHDIKCGJ_OFFSET UNITYSDK_OFFSET(0x17AD12A0)
#define GLPBCHDKIAD_MOCFMJIACDD_OFFSET UNITYSDK_OFFSET(0x17AC7530)
#define GLPBCHDKIAD_MOGCCMPPOIB_OFFSET UNITYSDK_OFFSET(0x17ACB680)
#define GLPBCHDKIAD_MPBHHOMMKEN_OFFSET UNITYSDK_OFFSET(0x17ACEA10)
#define GLPBCHDKIAD_NFMOJBDGODC_OFFSET UNITYSDK_OFFSET(0x17AC95C0)
#define GLPBCHDKIAD_NNIGFNEFFFM_OFFSET UNITYSDK_OFFSET(0x17ACDA30)
#define GLPBCHDKIAD_OKEFLEKHLGD_OFFSET UNITYSDK_OFFSET(0x17AD0230)
#define GLPBCHDKIAD_PCACNCAHBGJ_OFFSET UNITYSDK_OFFSET(0x17AC8730)
#define GLPBCHDKIAD_PJHCEJGKPOL_OFFSET UNITYSDK_OFFSET(0x17ACBC80)
#define GLPBCHDKIAD_PLIAIMNHHOB_OFFSET UNITYSDK_OFFSET(0x17ACCE70)
#define GLPBCHDKIAD_UPDATE_OFFSET UNITYSDK_OFFSET(0x17AC74A0)
#define GLPBCHDKIAD__CCTOR_OFFSET UNITYSDK_OFFSET(0x17AC7EB0)
#define GLPBCHDKIAD__CTOR_OFFSET UNITYSDK_OFFSET(0x17AC7E60)

inline static constexpr unsigned int GLPBCHDKIAD_TypeDefinitionIndex = 91792;

class GLPBCHDKIAD : public ::OAOOLPCNHKA
{
public:
	static ::System::Action** StaticGet_LNFCICPDOLG()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GLPBCHDKIAD_TypeDefinitionIndex)->GetStaticField(0x51420);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_NAIDJOKGCMJ()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(GLPBCHDKIAD_TypeDefinitionIndex)->GetStaticField(0x51428);
	}
	::Nap::NapECS::EcsFilter* KMPGDIMFCPA; // 0x20
	::Nap::NapECS::EcsFilter* ELGBKBMOFNO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPBCHDKIAD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLPBCHDKIAD__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_UPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_LATEUPDATE_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 IDPPLNKKPAN(::MGHNAPKHBOG MBABJPIEAIA, ::UnityEngine::Vector3 AKAGDEFAGJA, ::System::Single NCCDJLDKFGA, ::UnityEngine::LayerMask FBNGKPGLADH)
	{
		return ((::UnityEngine::Vector3(*)(::MGHNAPKHBOG, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_IDPPLNKKPAN_OFFSET))(MBABJPIEAIA, AKAGDEFAGJA, NCCDJLDKFGA, FBNGKPGLADH);
	}

	static ::System::Boolean PCACNCAHBGJ(::JPKHEMNFNLK* OPFBJFIMPAD, ::NMICPPGOBJH DNNJCFLLECI)
	{
		return ((::System::Boolean(*)(::JPKHEMNFNLK*, ::NMICPPGOBJH))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_PCACNCAHBGJ_OFFSET))(OPFBJFIMPAD, DNNJCFLLECI);
	}

	static ::System::Boolean FBNKJFBLHDP(::MoleMole::Battle::Entity* CGELPKBKHOJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_FBNKJFBLHDP_OFFSET))(CGELPKBKHOJ);
	}

	static ::System::Boolean LPIIPFCIDJD(::UnityEngine::Vector3 CKPGOKHECCH, ::System::Single NNHBMHJDPMD)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_LPIIPFCIDJD_OFFSET))(CKPGOKHECCH, NNHBMHJDPMD);
	}

	static ::System::Boolean GPHHMHAHFPJ(::NMICPPGOBJH DNNJCFLLECI)
	{
		return ((::System::Boolean(*)(::NMICPPGOBJH))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_GPHHMHAHFPJ_OFFSET))(DNNJCFLLECI);
	}

	static ::System::Boolean MGACBGELHBP(::MoleMole::Battle::Entity* CGELPKBKHOJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_MGACBGELHBP_OFFSET))(CGELPKBKHOJ);
	}

	static ::System::Void LDKLMBKAMDD(::MoleMole::Battle::Entity* CGELPKBKHOJ, ::MoleMole::Battle::Entity* BDHOILPIGKB)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_LDKLMBKAMDD_OFFSET))(CGELPKBKHOJ, BDHOILPIGKB);
	}

	static ::System::Boolean HMGAAEJCLDI(::NMICPPGOBJH DNNJCFLLECI)
	{
		return ((::System::Boolean(*)(::NMICPPGOBJH))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_HMGAAEJCLDI_OFFSET))(DNNJCFLLECI);
	}

	static ::System::Void LCCOKGDAOHE(::JPKHEMNFNLK* OHHJLMFHFGF, ::Nap::NapECS::EcsEntity* CJMEFPOIJJA)
	{
		return ((::System::Void(*)(::JPKHEMNFNLK*, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_LCCOKGDAOHE_OFFSET))(OHHJLMFHFGF, CJMEFPOIJJA);
	}

	static ::System::Void JHDEFNPIIBA(::System::Boolean DODJMIJIKPK)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_JHDEFNPIIBA_OFFSET))(DODJMIJIKPK);
	}

	static ::System::Boolean AGCGCJJIALI(::JPKHEMNFNLK* OPFBJFIMPAD, ::NMICPPGOBJH IEFBNDFLGGD, ::System::Boolean DEBGKPLOPCG)
	{
		return ((::System::Boolean(*)(::JPKHEMNFNLK*, ::NMICPPGOBJH, ::System::Boolean))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_AGCGCJJIALI_OFFSET))(OPFBJFIMPAD, IEFBNDFLGGD, DEBGKPLOPCG);
	}

	static ::System::Void MAICIIPMPKK(::MoleMole::Config::ConfigPosRot* KFOFHPDNMCA, ::MoleMole::Battle::Entity* CGELPKBKHOJ, ::System::Boolean& JPDIHAKOHOA, ::UnityEngine::Vector3& AENOEFFHHEM, ::System::Single& FKODDFFMLPI, ::System::Boolean DGBNMPIMLIK, ::System::Boolean EMLOHJGFDFF)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigPosRot*, ::MoleMole::Battle::Entity*, ::System::Boolean&, ::UnityEngine::Vector3&, ::System::Single&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_MAICIIPMPKK_OFFSET))(KFOFHPDNMCA, CGELPKBKHOJ, JPDIHAKOHOA, AENOEFFHHEM, FKODDFFMLPI, DGBNMPIMLIK, EMLOHJGFDFF);
	}

	static ::System::Void MOGCCMPPOIB(::MoleMole::Battle::Entity* BDHOILPIGKB)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_MOGCCMPPOIB_OFFSET))(BDHOILPIGKB);
	}

	static ::System::Void MOCFMJIACDD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLPBCHDKIAD_MOCFMJIACDD_OFFSET))();
	}

	static ::MoleMole::Config::BuddyBehaviourType NFMOJBDGODC(::NMICPPGOBJH DNNJCFLLECI)
	{
		return ((::MoleMole::Config::BuddyBehaviourType(*)(::NMICPPGOBJH))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_NFMOJBDGODC_OFFSET))(DNNJCFLLECI);
	}

	static ::MoleMole::Battle::Entity* IJMAHCPABLF()
	{
		return ((::MoleMole::Battle::Entity*(*)())((::PBYTE)hIl2Cpp + GLPBCHDKIAD_IJMAHCPABLF_OFFSET))();
	}

	static ::System::Void PJHCEJGKPOL(::MoleMole::Battle::Entity* HIEILMHOMMJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_PJHCEJGKPOL_OFFSET))(HIEILMHOMMJ);
	}

	static ::MoleMole::Config::ConfigPosRot* BGFDJNIBEFN(::JPKHEMNFNLK* CLLINCIHFPN, ::MoleMole::Battle::Entity* CGELPKBKHOJ)
	{
		return ((::MoleMole::Config::ConfigPosRot*(*)(::JPKHEMNFNLK*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_BGFDJNIBEFN_OFFSET))(CLLINCIHFPN, CGELPKBKHOJ);
	}

	static ::MoleMole::Config::BuddyBehaviourType CKGNCNMAGMH(::NMICPPGOBJH DNNJCFLLECI, ::MoleMole::Config::BuddyBehaviourType JDBLLEMNHLK)
	{
		return ((::MoleMole::Config::BuddyBehaviourType(*)(::NMICPPGOBJH, ::MoleMole::Config::BuddyBehaviourType))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_CKGNCNMAGMH_OFFSET))(DNNJCFLLECI, JDBLLEMNHLK);
	}

	static ::System::Void LJKKAPIJHEA(::MoleMole::Battle::Entity* CGELPKBKHOJ, ::MoleMole::Battle::Entity* MNBFHEJELDO, ::MoleMole::Config::ConfigPosRot* HKEDGLBKIPL, ::MGHNAPKHBOG EOONAEHNGLF, ::System::Boolean HBECJAPHONI)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Config::ConfigPosRot*, ::MGHNAPKHBOG, ::System::Boolean))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_LJKKAPIJHEA_OFFSET))(CGELPKBKHOJ, MNBFHEJELDO, HKEDGLBKIPL, EOONAEHNGLF, HBECJAPHONI);
	}

	static ::System::Void DEFNOLNPDNC(::NMICPPGOBJH DNNJCFLLECI, ::System::Boolean GPCHIMBGNJO)
	{
		return ((::System::Void(*)(::NMICPPGOBJH, ::System::Boolean))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_DEFNOLNPDNC_OFFSET))(DNNJCFLLECI, GPCHIMBGNJO);
	}

	static ::System::Void MFKHFJLOBCI(::MoleMole::Battle::Entity* HIEILMHOMMJ, ::System::Boolean JLNKJDLGFKD, ::System::Boolean DCFANHOIMOB)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_MFKHFJLOBCI_OFFSET))(HIEILMHOMMJ, JLNKJDLGFKD, DCFANHOIMOB);
	}

	static ::System::Void BLPPNIMKIBJ(::MoleMole::Config::BuddyTeamType LAHNKKDHCCB, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::MoleMole::Config::BuddyTeamType, ::System::String*))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_BLPPNIMKIBJ_OFFSET))(LAHNKKDHCCB, AELLPLBJELA);
	}

	static ::System::Boolean NNIGFNEFFFM(::JPKHEMNFNLK* OPFBJFIMPAD, ::NMICPPGOBJH IEFBNDFLGGD, ::System::Boolean DEBGKPLOPCG)
	{
		return ((::System::Boolean(*)(::JPKHEMNFNLK*, ::NMICPPGOBJH, ::System::Boolean))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_NNIGFNEFFFM_OFFSET))(OPFBJFIMPAD, IEFBNDFLGGD, DEBGKPLOPCG);
	}

	static ::System::Void LGLDBEJLHGP(::JPKHEMNFNLK* OPFBJFIMPAD, ::MoleMole::Battle::Entity* HIEILMHOMMJ)
	{
		return ((::System::Void(*)(::JPKHEMNFNLK*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_LGLDBEJLHGP_OFFSET))(OPFBJFIMPAD, HIEILMHOMMJ);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_HMLGKBFFNHI_OFFSET))(BKLGNCBNEGM);
	}

	static ::System::Void LFLNMEPCLOK(::Nap::NapECS::EcsEntity* DBIOAKNMBDM)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_LFLNMEPCLOK_OFFSET))(DBIOAKNMBDM);
	}

	static ::System::Void MPBHHOMMKEN(::MoleMole::Config::BuddyTeamType LAHNKKDHCCB)
	{
		return ((::System::Void(*)(::MoleMole::Config::BuddyTeamType))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_MPBHHOMMKEN_OFFSET))(LAHNKKDHCCB);
	}

	static ::System::Void PLIAIMNHHOB(::JPKHEMNFNLK* CLLINCIHFPN, ::Nap::NapECS::EcsEntity* CJMEFPOIJJA, ::Nap::NapECS::EcsEntity* BKJGELMLBND)
	{
		return ((::System::Void(*)(::JPKHEMNFNLK*, ::Nap::NapECS::EcsEntity*, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_PLIAIMNHHOB_OFFSET))(CLLINCIHFPN, CJMEFPOIJJA, BKJGELMLBND);
	}

	static ::System::Void KFILAJBAHEG()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLPBCHDKIAD_KFILAJBAHEG_OFFSET))();
	}

	static ::System::Void MFKHFJLOBCI_1(::NMICPPGOBJH IEFBNDFLGGD, ::System::Boolean JLNKJDLGFKD, ::System::Boolean DCFANHOIMOB)
	{
		return ((::System::Void(*)(::NMICPPGOBJH, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_MFKHFJLOBCI_1_OFFSET))(IEFBNDFLGGD, JLNKJDLGFKD, DCFANHOIMOB);
	}

	static ::System::Void JDAAMBEKHLI(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_JDAAMBEKHLI_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void KOKAGKGOMLG()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLPBCHDKIAD_KOKAGKGOMLG_OFFSET))();
	}

	static ::System::Boolean KDFBFJCDGCH(::NMICPPGOBJH DNNJCFLLECI)
	{
		return ((::System::Boolean(*)(::NMICPPGOBJH))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_KDFBFJCDGCH_OFFSET))(DNNJCFLLECI);
	}

	static ::System::Void HBMEMPFGANI(::MoleMole::Config::BuddyTeamType LAHNKKDHCCB, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::MoleMole::Config::BuddyTeamType, ::System::String*))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_HBMEMPFGANI_OFFSET))(LAHNKKDHCCB, AELLPLBJELA);
	}

	static ::System::Void MGBMABKBNAP(::MoleMole::Battle::Entity* BDHOILPIGKB)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_MGBMABKBNAP_OFFSET))(BDHOILPIGKB);
	}

	static ::UnityEngine::Vector3 BCIOIOHOAGA(::UnityEngine::Vector3 KLILFBFAELK)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_BCIOIOHOAGA_OFFSET))(KLILFBFAELK);
	}

	static ::System::Void EGPLDOALKPF(::JPKHEMNFNLK* OPFBJFIMPAD, ::MoleMole::Battle::Entity* CJMEFPOIJJA, ::MoleMole::Battle::Entity* HIEILMHOMMJ, ::System::Boolean LFJBDPLIDGI)
	{
		return ((::System::Void(*)(::JPKHEMNFNLK*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_EGPLDOALKPF_OFFSET))(OPFBJFIMPAD, CJMEFPOIJJA, HIEILMHOMMJ, LFJBDPLIDGI);
	}

	static ::System::Void OKEFLEKHLGD(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_OKEFLEKHLGD_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::MoleMole::Config::BuddyBehaviourType BGJDCBLNNOP(::NMICPPGOBJH DNNJCFLLECI, ::MoleMole::Config::BuddyBehaviourType JDBLLEMNHLK)
	{
		return ((::MoleMole::Config::BuddyBehaviourType(*)(::NMICPPGOBJH, ::MoleMole::Config::BuddyBehaviourType))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_BGJDCBLNNOP_OFFSET))(DNNJCFLLECI, JDBLLEMNHLK);
	}

	static ::System::Void KLIODGHKJGA(::MoleMole::Battle::Entity* CGELPKBKHOJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_KLIODGHKJGA_OFFSET))(CGELPKBKHOJ);
	}

	static ::System::Boolean KFLABKCGBBB(::NMICPPGOBJH DNNJCFLLECI)
	{
		return ((::System::Boolean(*)(::NMICPPGOBJH))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_KFLABKCGBBB_OFFSET))(DNNJCFLLECI);
	}

	static ::System::Void AOLNKFPEIHJ(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_AOLNKFPEIHJ_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void ELFCPCKPEME(::MoleMole::Battle::Entity* CGELPKBKHOJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_ELFCPCKPEME_OFFSET))(CGELPKBKHOJ);
	}

	static ::System::Void DDHDFKKPBEI(::MoleMole::Battle::AnimatorParamControl* HNOPAJLDCFB)
	{
		return ((::System::Void(*)(::MoleMole::Battle::AnimatorParamControl*))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_DDHDFKKPBEI_OFFSET))(HNOPAJLDCFB);
	}

	static ::System::Void BECPPHHBIPH()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLPBCHDKIAD_BECPPHHBIPH_OFFSET))();
	}

	::System::Void MNEJHDIKCGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_MNEJHDIKCGJ_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* HAEJCPKCPPF()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)())((::PBYTE)hIl2Cpp + GLPBCHDKIAD_HAEJCPKCPPF_OFFSET))();
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_CMFOMGGDPPA_OFFSET))(this);
	}

	static ::System::Void COKLFNPDODD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLPBCHDKIAD_COKLFNPDODD_OFFSET))();
	}

	static ::System::Void JMJAGBNJCAM()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLPBCHDKIAD_JMJAGBNJCAM_OFFSET))();
	}

	static ::System::Boolean GJLFJHKKCHI(::NMICPPGOBJH IEFBNDFLGGD, ::System::Boolean DEBGKPLOPCG, ::System::Boolean DCFANHOIMOB)
	{
		return ((::System::Boolean(*)(::NMICPPGOBJH, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_GJLFJHKKCHI_OFFSET))(IEFBNDFLGGD, DEBGKPLOPCG, DCFANHOIMOB);
	}

	static ::System::Void IGHNPCJKMFH(::MoleMole::Battle::AnimatorParamControl* HNOPAJLDCFB)
	{
		return ((::System::Void(*)(::MoleMole::Battle::AnimatorParamControl*))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_IGHNPCJKMFH_OFFSET))(HNOPAJLDCFB);
	}
};
