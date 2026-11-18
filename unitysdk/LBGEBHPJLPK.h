#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Interaction/AxisSign.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DCBBMOHJDOJ.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/GOGALMLABHE.h"
#include "unitysdk/IKOBMGNNNNK.h"
#include "unitysdk/MENGACGOHOG.h"
#include "unitysdk/NHKLBKEABJB.h"
#include "unitysdk/NKGKDNFNPIN.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class Transform; }

#define LBGEBHPJLPK_AAMDPMGIKHK_1_OFFSET UNITYSDK_OFFSET(0x15239AA0)
#define LBGEBHPJLPK_AAMDPMGIKHK_OFFSET UNITYSDK_OFFSET(0x152394B0)
#define LBGEBHPJLPK_ADBDICIIMJF_OFFSET UNITYSDK_OFFSET(0x1523AE20)
#define LBGEBHPJLPK_AJMJJGGDDPE_1_OFFSET UNITYSDK_OFFSET(0x1523B460)
#define LBGEBHPJLPK_AJMJJGGDDPE_OFFSET UNITYSDK_OFFSET(0x152369E0)
#define LBGEBHPJLPK_AKDCGNJJGCI_1_OFFSET UNITYSDK_OFFSET(0x1523AF00)
#define LBGEBHPJLPK_AKDCGNJJGCI_OFFSET UNITYSDK_OFFSET(0x15239830)
#define LBGEBHPJLPK_BCKFKGGPFPK_OFFSET UNITYSDK_OFFSET(0x15239390)
#define LBGEBHPJLPK_CANACBPHNAM_1_OFFSET UNITYSDK_OFFSET(0x152390F0)
#define LBGEBHPJLPK_CANACBPHNAM_OFFSET UNITYSDK_OFFSET(0x15236FE0)
#define LBGEBHPJLPK_CGMNBICLFEI_1_OFFSET UNITYSDK_OFFSET(0x15235E90)
#define LBGEBHPJLPK_CGMNBICLFEI_OFFSET UNITYSDK_OFFSET(0x15235940)
#define LBGEBHPJLPK_CMKPCILIFGB_OFFSET UNITYSDK_OFFSET(0x15239FA0)
#define LBGEBHPJLPK_CNPIAGDJEMK_1_OFFSET UNITYSDK_OFFSET(0x1523AFE0)
#define LBGEBHPJLPK_CNPIAGDJEMK_OFFSET UNITYSDK_OFFSET(0x15238CA0)
#define LBGEBHPJLPK_COHDMPBBMPO_1_OFFSET UNITYSDK_OFFSET(0x152391C0)
#define LBGEBHPJLPK_COHDMPBBMPO_OFFSET UNITYSDK_OFFSET(0x15237050)
#define LBGEBHPJLPK_DBDHCCBOMCM_OFFSET UNITYSDK_OFFSET(0x15236870)
#define LBGEBHPJLPK_DCNKIKNPGPK_OFFSET UNITYSDK_OFFSET(0x15237550)
#define LBGEBHPJLPK_EGAAEEMMMGC_OFFSET UNITYSDK_OFFSET(0x152365C0)
#define LBGEBHPJLPK_ELBDIBOIELA_1_OFFSET UNITYSDK_OFFSET(0x1523B8C0)
#define LBGEBHPJLPK_ELBDIBOIELA_OFFSET UNITYSDK_OFFSET(0x15237260)
#define LBGEBHPJLPK_FAPCPFEDEIF_OFFSET UNITYSDK_OFFSET(0x15236240)
#define LBGEBHPJLPK_FFCPIEDHBDP_1_OFFSET UNITYSDK_OFFSET(0x15238840)
#define LBGEBHPJLPK_FFCPIEDHBDP_2_OFFSET UNITYSDK_OFFSET(0x15238A00)
#define LBGEBHPJLPK_FFCPIEDHBDP_3_OFFSET UNITYSDK_OFFSET(0x15238B60)
#define LBGEBHPJLPK_FFCPIEDHBDP_4_OFFSET UNITYSDK_OFFSET(0x1523B720)
#define LBGEBHPJLPK_FFCPIEDHBDP_5_OFFSET UNITYSDK_OFFSET(0x15237FD0)
#define LBGEBHPJLPK_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x15238330)
#define LBGEBHPJLPK_GEEHIMPMPEP_OFFSET UNITYSDK_OFFSET(0x1523AA70)
#define LBGEBHPJLPK_GJMBMOAAJPI_OFFSET UNITYSDK_OFFSET(0x15239C00)
#define LBGEBHPJLPK_GPFIKOIHAKA_1_OFFSET UNITYSDK_OFFSET(0x15236D00)
#define LBGEBHPJLPK_GPFIKOIHAKA_2_OFFSET UNITYSDK_OFFSET(0x15238E70)
#define LBGEBHPJLPK_GPFIKOIHAKA_3_OFFSET UNITYSDK_OFFSET(0x15239730)
#define LBGEBHPJLPK_GPFIKOIHAKA_4_OFFSET UNITYSDK_OFFSET(0x1523B630)
#define LBGEBHPJLPK_GPFIKOIHAKA_5_OFFSET UNITYSDK_OFFSET(0x1523BBD0)
#define LBGEBHPJLPK_GPFIKOIHAKA_OFFSET UNITYSDK_OFFSET(0x15235D50)
#define LBGEBHPJLPK_GPMJGDENHHI_1_OFFSET UNITYSDK_OFFSET(0x1523AB10)
#define LBGEBHPJLPK_GPMJGDENHHI_OFFSET UNITYSDK_OFFSET(0x15236080)
#define LBGEBHPJLPK_HANIOHPPFGO_OFFSET UNITYSDK_OFFSET(0x1523C060)
#define LBGEBHPJLPK_HBCLCOFAHOH_OFFSET UNITYSDK_OFFSET(0x15236B00)
#define LBGEBHPJLPK_HGKMIPKDMNL_OFFSET UNITYSDK_OFFSET(0x15236680)
#define LBGEBHPJLPK_HHENHJOHGAL_OFFSET UNITYSDK_OFFSET(0x15238720)
#define LBGEBHPJLPK_HHLGCCGCLJE_OFFSET UNITYSDK_OFFSET(0x1523B330)
#define LBGEBHPJLPK_IEKHJCPMONK_1_OFFSET UNITYSDK_OFFSET(0x15237AD0)
#define LBGEBHPJLPK_IEKHJCPMONK_OFFSET UNITYSDK_OFFSET(0x15237330)
#define LBGEBHPJLPK_ILNLMBENMEG_OFFSET UNITYSDK_OFFSET(0x1523B0F0)
#define LBGEBHPJLPK_IPPALNDNEHK_OFFSET UNITYSDK_OFFSET(0x152385A0)
#define LBGEBHPJLPK_JIGBCBKOMJG_OFFSET UNITYSDK_OFFSET(0x15236140)
#define LBGEBHPJLPK_KBDHMPGOGIH_OFFSET UNITYSDK_OFFSET(0x1523ABE0)
#define LBGEBHPJLPK_LAIBCBAOEGG_OFFSET UNITYSDK_OFFSET(0x15237DF0)
#define LBGEBHPJLPK_LIPODCEPEGB_OFFSET UNITYSDK_OFFSET(0x1523A940)
#define LBGEBHPJLPK_LMABFCKJDPN_OFFSET UNITYSDK_OFFSET(0x15239D50)
#define LBGEBHPJLPK_MCBIGJAJDAL_OFFSET UNITYSDK_OFFSET(0x15238DB0)
#define LBGEBHPJLPK_MJNHCDIBEND_OFFSET UNITYSDK_OFFSET(0x15239240)
#define LBGEBHPJLPK_MMMEFMADOKA_1_OFFSET UNITYSDK_OFFSET(0x152363F0)
#define LBGEBHPJLPK_MMMEFMADOKA_OFFSET UNITYSDK_OFFSET(0x15236300)
#define LBGEBHPJLPK_NNEICNNABKA_1_OFFSET UNITYSDK_OFFSET(0x15237860)
#define LBGEBHPJLPK_NNEICNNABKA_2_OFFSET UNITYSDK_OFFSET(0x1523A5C0)
#define LBGEBHPJLPK_NNEICNNABKA_3_OFFSET UNITYSDK_OFFSET(0x1523A640)
#define LBGEBHPJLPK_NNEICNNABKA_OFFSET UNITYSDK_OFFSET(0x15237710)
#define LBGEBHPJLPK_NNLLPKEECKP_OFFSET UNITYSDK_OFFSET(0x15237480)
#define LBGEBHPJLPK_PGMPHJAFPGO_OFFSET UNITYSDK_OFFSET(0x152379C0)
#define LBGEBHPJLPK_PMEIJGACGHK_OFFSET UNITYSDK_OFFSET(0x152367C0)

inline static constexpr unsigned int LBGEBHPJLPK_TypeDefinitionIndex = 48042;

class LBGEBHPJLPK : public ::System::Object
{
public:
	static ::Foundation::Unreal::FTransform CGMNBICLFEI(::NHKLBKEABJB NEEBLLCIGDA, ::NHKLBKEABJB LIKMMPKAHHN)
	{
		return ((::Foundation::Unreal::FTransform(*)(::NHKLBKEABJB, ::NHKLBKEABJB))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_CGMNBICLFEI_OFFSET))(NEEBLLCIGDA, LIKMMPKAHHN);
	}

	static ::System::Boolean GPMJGDENHHI(::UnityEngine::Vector3 EJCBEJMGFAJ, ::UnityEngine::Vector3 EBFCACIEKBC, ::System::Single NLNNOFJHMFB)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_GPMJGDENHHI_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC, NLNNOFJHMFB);
	}

	static ::UnityEngine::Vector3 JIGBCBKOMJG(::MoleMole::Interaction::AxisSign BHFAGMPDIGJ)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Interaction::AxisSign))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_JIGBCBKOMJG_OFFSET))(BHFAGMPDIGJ);
	}

	static ::System::Boolean FAPCPFEDEIF(::UnityEngine::Quaternion EEDDICPIOCN)
	{
		return ((::System::Boolean(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_FAPCPFEDEIF_OFFSET))(EEDDICPIOCN);
	}

	static ::UnityEngine::Vector3 MMMEFMADOKA(::UnityEngine::Vector3 OPMPKFEHOBM, ::Foundation::Unreal::FTransform& GKBJOPJKCLB)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::Foundation::Unreal::FTransform&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_MMMEFMADOKA_OFFSET))(OPMPKFEHOBM, GKBJOPJKCLB);
	}

	static ::System::Boolean EGAAEEMMMGC(::UnityEngine::Vector2& OPMPKFEHOBM, ::UnityEngine::Vector2& MPLDDNMCECG, ::UnityEngine::Vector2& IENDGPBFHGL, ::System::Single& KJBOHDMDDDA)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Single&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_EGAAEEMMMGC_OFFSET))(OPMPKFEHOBM, MPLDDNMCECG, IENDGPBFHGL, KJBOHDMDDDA);
	}

	static ::System::Boolean HGKMIPKDMNL(::UnityEngine::Vector3 DAAEHEHLLLD, ::System::Single NKLACMBEPCO)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_HGKMIPKDMNL_OFFSET))(DAAEHEHLLLD, NKLACMBEPCO);
	}

	static ::UnityEngine::Vector3 MMMEFMADOKA_1(::UnityEngine::Vector3 OPMPKFEHOBM, ::UnityEngine::Vector3& KONFNPMDAAF, ::UnityEngine::Quaternion& BFBELMDIAHI, ::System::Single& CLMNLPKFBFA)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::System::Single&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_MMMEFMADOKA_1_OFFSET))(OPMPKFEHOBM, KONFNPMDAAF, BFBELMDIAHI, CLMNLPKFBFA);
	}

	static ::System::Boolean DBDHCCBOMCM(::UnityEngine::Vector3& EJCBEJMGFAJ, ::UnityEngine::Vector3& EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_DBDHCCBOMCM_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}

	static ::Foundation::Unreal::FTransform GPFIKOIHAKA(::NHKLBKEABJB NEEBLLCIGDA)
	{
		return ((::Foundation::Unreal::FTransform(*)(::NHKLBKEABJB))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_GPFIKOIHAKA_OFFSET))(NEEBLLCIGDA);
	}

	static ::IKOBMGNNNNK AJMJJGGDDPE(::IKOBMGNNNNK MDLENCJJGKK, ::NHKLBKEABJB& NEEBLLCIGDA)
	{
		return ((::IKOBMGNNNNK(*)(::IKOBMGNNNNK, ::NHKLBKEABJB&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_AJMJJGGDDPE_OFFSET))(MDLENCJJGKK, NEEBLLCIGDA);
	}

	static ::System::Boolean CANACBPHNAM(::UnityEngine::Vector2& OPMPKFEHOBM, ::MENGACGOHOG& MDLENCJJGKK)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::MENGACGOHOG&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_CANACBPHNAM_OFFSET))(OPMPKFEHOBM, MDLENCJJGKK);
	}

	static ::DCBBMOHJDOJ ELBDIBOIELA(::DCBBMOHJDOJ& OAJIPAJOCEI, ::UnityEngine::Plane& JPDANPIPEMC)
	{
		return ((::DCBBMOHJDOJ(*)(::DCBBMOHJDOJ&, ::UnityEngine::Plane&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_ELBDIBOIELA_OFFSET))(OAJIPAJOCEI, JPDANPIPEMC);
	}

	static ::NKGKDNFNPIN IEKHJCPMONK(::DCBBMOHJDOJ ABJOBELOMEE, ::UnityEngine::Vector3& EIIDOADGOIF, ::UnityEngine::Vector3& OIDHGPBMIPH, ::UnityEngine::Vector3& EMJEGLAOHEE)
	{
		return ((::NKGKDNFNPIN(*)(::DCBBMOHJDOJ, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_IEKHJCPMONK_OFFSET))(ABJOBELOMEE, EIIDOADGOIF, OIDHGPBMIPH, EMJEGLAOHEE);
	}

	static ::UnityEngine::Vector3 DCNKIKNPGPK(::UnityEngine::Vector3 IEFBHIDIPPL, ::UnityEngine::Vector3& KONFNPMDAAF, ::UnityEngine::Quaternion& BFBELMDIAHI, ::System::Single& CLMNLPKFBFA)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::System::Single&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_DCNKIKNPGPK_OFFSET))(IEFBHIDIPPL, KONFNPMDAAF, BFBELMDIAHI, CLMNLPKFBFA);
	}

	static ::System::Boolean NNEICNNABKA(::DCBBMOHJDOJ& GIKIDNEAAJJ, ::DCBBMOHJDOJ& EKGHFDODHHK)
	{
		return ((::System::Boolean(*)(::DCBBMOHJDOJ&, ::DCBBMOHJDOJ&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_NNEICNNABKA_OFFSET))(GIKIDNEAAJJ, EKGHFDODHHK);
	}

	static ::System::Boolean NNEICNNABKA_1(::UnityEngine::Vector2& KKLKJNPFNNP, ::UnityEngine::Vector2& FEFMMPHIDED, ::NKGKDNFNPIN& IAIIJPGGAEN)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::NKGKDNFNPIN&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_NNEICNNABKA_1_OFFSET))(KKLKJNPFNNP, FEFMMPHIDED, IAIIJPGGAEN);
	}

	static ::MENGACGOHOG IEKHJCPMONK_1(::IKOBMGNNNNK MLELDFLPAOB, ::UnityEngine::Vector3& EIIDOADGOIF, ::UnityEngine::Vector3& OIDHGPBMIPH, ::UnityEngine::Vector3& EMJEGLAOHEE)
	{
		return ((::MENGACGOHOG(*)(::IKOBMGNNNNK, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_IEKHJCPMONK_1_OFFSET))(MLELDFLPAOB, EIIDOADGOIF, OIDHGPBMIPH, EMJEGLAOHEE);
	}

	static ::GOGALMLABHE LAIBCBAOEGG(::GOGALMLABHE KIJGEEDPBJD, ::System::Single& IAKDDECACPD)
	{
		return ((::GOGALMLABHE(*)(::GOGALMLABHE, ::System::Single&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_LAIBCBAOEGG_OFFSET))(KIJGEEDPBJD, IAKDDECACPD);
	}

	static ::System::Boolean FFCPIEDHBDP(::Foundation::Unreal::FTransform3D GKBJOPJKCLB)
	{
		return ((::System::Boolean(*)(::Foundation::Unreal::FTransform3D))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_FFCPIEDHBDP_OFFSET))(GKBJOPJKCLB);
	}

	static ::UnityEngine::Quaternion IPPALNDNEHK(::UnityEngine::Quaternion KDEHMPGOCEP, ::UnityEngine::Quaternion PADJNMGMGHO)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_IPPALNDNEHK_OFFSET))(KDEHMPGOCEP, PADJNMGMGHO);
	}

	static ::UnityEngine::Plane HHENHJOHGAL(::NHKLBKEABJB NEEBLLCIGDA)
	{
		return ((::UnityEngine::Plane(*)(::NHKLBKEABJB))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_HHENHJOHGAL_OFFSET))(NEEBLLCIGDA);
	}

	static ::UnityEngine::Matrix4x4 HBCLCOFAHOH(::NHKLBKEABJB NEEBLLCIGDA)
	{
		return ((::UnityEngine::Matrix4x4(*)(::NHKLBKEABJB))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_HBCLCOFAHOH_OFFSET))(NEEBLLCIGDA);
	}

	static ::System::Boolean FFCPIEDHBDP_1(::Foundation::Unreal::FTransform GKBJOPJKCLB)
	{
		return ((::System::Boolean(*)(::Foundation::Unreal::FTransform))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_FFCPIEDHBDP_1_OFFSET))(GKBJOPJKCLB);
	}

	static ::System::Boolean FFCPIEDHBDP_2(::Il2CppArray<::UnityEngine::Vector3>*& GMHJGPODKLM)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_FFCPIEDHBDP_2_OFFSET))(GMHJGPODKLM);
	}

	static ::IKOBMGNNNNK GPFIKOIHAKA_1(::IKOBMGNNNNK MDLENCJJGKK, ::UnityEngine::Matrix4x4& NOMCLDGPNAF)
	{
		return ((::IKOBMGNNNNK(*)(::IKOBMGNNNNK, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_GPFIKOIHAKA_1_OFFSET))(MDLENCJJGKK, NOMCLDGPNAF);
	}

	static ::System::Boolean FFCPIEDHBDP_3(::UnityEngine::Bounds EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_FFCPIEDHBDP_3_OFFSET))(EBFCACIEKBC);
	}

	static ::System::Boolean CNPIAGDJEMK(::UnityEngine::Vector2& GAGJKCPBGCA, ::UnityEngine::Vector2& EJDEOOOJHHF, ::System::Single& CCNLJHKAMNH, ::UnityEngine::Vector2& AHPCBMBAOFN)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Single&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_CNPIAGDJEMK_OFFSET))(GAGJKCPBGCA, EJDEOOOJHHF, CCNLJHKAMNH, AHPCBMBAOFN);
	}

	static ::Foundation::Unreal::FTransform CGMNBICLFEI_1(::Foundation::Unreal::FTransform& APCGBDLKIMG, ::Foundation::Unreal::FTransform& CMJFJBNMCLB)
	{
		return ((::Foundation::Unreal::FTransform(*)(::Foundation::Unreal::FTransform&, ::Foundation::Unreal::FTransform&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_CGMNBICLFEI_1_OFFSET))(APCGBDLKIMG, CMJFJBNMCLB);
	}

	static ::IKOBMGNNNNK GPFIKOIHAKA_2(::IKOBMGNNNNK MDLENCJJGKK, ::UnityEngine::Quaternion& BFBELMDIAHI, ::UnityEngine::Vector3& KONFNPMDAAF)
	{
		return ((::IKOBMGNNNNK(*)(::IKOBMGNNNNK, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_GPFIKOIHAKA_2_OFFSET))(MDLENCJJGKK, BFBELMDIAHI, KONFNPMDAAF);
	}

	static ::System::Boolean PMEIJGACGHK(::UnityEngine::Vector3 IDDEAAMJMFN)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_PMEIJGACGHK_OFFSET))(IDDEAAMJMFN);
	}

	static ::System::Boolean CANACBPHNAM_1(::UnityEngine::Vector2& OPMPKFEHOBM, ::NKGKDNFNPIN& IAIIJPGGAEN)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::NKGKDNFNPIN&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_CANACBPHNAM_1_OFFSET))(OPMPKFEHOBM, IAIIJPGGAEN);
	}

	static ::Foundation::Unreal::FTransform MJNHCDIBEND(::UnityEngine::Transform* GKBJOPJKCLB)
	{
		return ((::Foundation::Unreal::FTransform(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_MJNHCDIBEND_OFFSET))(GKBJOPJKCLB);
	}

	static ::UnityEngine::Plane BCKFKGGPFPK(::NHKLBKEABJB NEEBLLCIGDA)
	{
		return ((::UnityEngine::Plane(*)(::NHKLBKEABJB))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_BCKFKGGPFPK_OFFSET))(NEEBLLCIGDA);
	}

	static ::DCBBMOHJDOJ AAMDPMGIKHK(::DCBBMOHJDOJ ABJOBELOMEE, ::UnityEngine::Matrix4x4& NOMCLDGPNAF)
	{
		return ((::DCBBMOHJDOJ(*)(::DCBBMOHJDOJ, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_AAMDPMGIKHK_OFFSET))(ABJOBELOMEE, NOMCLDGPNAF);
	}

	static ::IKOBMGNNNNK AKDCGNJJGCI(::IKOBMGNNNNK MDLENCJJGKK, ::NHKLBKEABJB& NEEBLLCIGDA)
	{
		return ((::IKOBMGNNNNK(*)(::IKOBMGNNNNK, ::NHKLBKEABJB&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_AKDCGNJJGCI_OFFSET))(MDLENCJJGKK, NEEBLLCIGDA);
	}

	static ::DCBBMOHJDOJ GPFIKOIHAKA_3(::DCBBMOHJDOJ ABJOBELOMEE, ::UnityEngine::Matrix4x4& NOMCLDGPNAF)
	{
		return ((::DCBBMOHJDOJ(*)(::DCBBMOHJDOJ, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_GPFIKOIHAKA_3_OFFSET))(ABJOBELOMEE, NOMCLDGPNAF);
	}

	static ::System::Boolean GJMBMOAAJPI(::Foundation::Unreal::FTransform GKBJOPJKCLB)
	{
		return ((::System::Boolean(*)(::Foundation::Unreal::FTransform))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_GJMBMOAAJPI_OFFSET))(GKBJOPJKCLB);
	}

	static ::Il2CppArray<::UnityEngine::Vector3>* LMABFCKJDPN(::UnityEngine::Bounds GOFCNJELMHH)
	{
		return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_LMABFCKJDPN_OFFSET))(GOFCNJELMHH);
	}

	static ::System::Boolean CMKPCILIFGB(::UnityEngine::Vector3& KJNLGKKCLLI, ::UnityEngine::Vector3& DHJAKPNMBKG, ::UnityEngine::Vector3& INCNHECIFIH, ::UnityEngine::Vector3& HHIPNHAEEOC, ::UnityEngine::Vector3& MLMPNOLLBGC)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_CMKPCILIFGB_OFFSET))(KJNLGKKCLLI, DHJAKPNMBKG, INCNHECIFIH, HHIPNHAEEOC, MLMPNOLLBGC);
	}

	static ::System::Boolean NNEICNNABKA_2(::System::Single& IPGDLCGLHIE, ::UnityEngine::Vector2& AJNHJDOIFHF, ::System::Single& OFMCOFKJBLH, ::UnityEngine::Vector2& CJGLDEFPOAA)
	{
		return ((::System::Boolean(*)(::System::Single&, ::UnityEngine::Vector2&, ::System::Single&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_NNEICNNABKA_2_OFFSET))(IPGDLCGLHIE, AJNHJDOIFHF, OFMCOFKJBLH, CJGLDEFPOAA);
	}

	static ::System::Boolean NNEICNNABKA_3(::MENGACGOHOG& MDLENCJJGKK, ::NKGKDNFNPIN& IAIIJPGGAEN)
	{
		return ((::System::Boolean(*)(::MENGACGOHOG&, ::NKGKDNFNPIN&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_NNEICNNABKA_3_OFFSET))(MDLENCJJGKK, IAIIJPGGAEN);
	}

	static ::UnityEngine::Plane LIPODCEPEGB(::NHKLBKEABJB NEEBLLCIGDA)
	{
		return ((::UnityEngine::Plane(*)(::NHKLBKEABJB))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_LIPODCEPEGB_OFFSET))(NEEBLLCIGDA);
	}

	static ::System::Boolean COHDMPBBMPO(::MENGACGOHOG MDLENCJJGKK, ::UnityEngine::Vector2& OPMPKFEHOBM)
	{
		return ((::System::Boolean(*)(::MENGACGOHOG, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_COHDMPBBMPO_OFFSET))(MDLENCJJGKK, OPMPKFEHOBM);
	}

	static ::System::Boolean GEEHIMPMPEP(::UnityEngine::Vector2& OPMPKFEHOBM, ::UnityEngine::Vector2& MPLDDNMCECG, ::System::Single& FJDMDOONDFG, ::System::Single& CGDOFPGLLLF)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_GEEHIMPMPEP_OFFSET))(OPMPKFEHOBM, MPLDDNMCECG, FJDMDOONDFG, CGDOFPGLLLF);
	}

	static ::System::Boolean GPMJGDENHHI_1(::UnityEngine::Quaternion EJCBEJMGFAJ, ::UnityEngine::Quaternion EBFCACIEKBC, ::System::Single KHECIIFEMBN)
	{
		return ((::System::Boolean(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_GPMJGDENHHI_1_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC, KHECIIFEMBN);
	}

	static ::System::Single MCBIGJAJDAL(::UnityEngine::Vector2& GAGJKCPBGCA, ::UnityEngine::Vector2& EJDEOOOJHHF, ::UnityEngine::Vector2& OPMPKFEHOBM)
	{
		return ((::System::Single(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_MCBIGJAJDAL_OFFSET))(GAGJKCPBGCA, EJDEOOOJHHF, OPMPKFEHOBM);
	}

	static ::UnityEngine::Vector3 KBDHMPGOGIH(::UnityEngine::Vector3 FMJGOHNLJNA, ::UnityEngine::Vector3& LPMBDILHPPA)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_KBDHMPGOGIH_OFFSET))(FMJGOHNLJNA, LPMBDILHPPA);
	}

	static ::System::Int32 ADBDICIIMJF(::UnityEngine::Vector2& GAGJKCPBGCA, ::UnityEngine::Vector2& EJDEOOOJHHF, ::UnityEngine::Vector2& OPMPKFEHOBM)
	{
		return ((::System::Int32(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_ADBDICIIMJF_OFFSET))(GAGJKCPBGCA, EJDEOOOJHHF, OPMPKFEHOBM);
	}

	static ::DCBBMOHJDOJ AKDCGNJJGCI_1(::DCBBMOHJDOJ ABJOBELOMEE, ::NHKLBKEABJB& NEEBLLCIGDA)
	{
		return ((::DCBBMOHJDOJ(*)(::DCBBMOHJDOJ, ::NHKLBKEABJB&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_AKDCGNJJGCI_1_OFFSET))(ABJOBELOMEE, NEEBLLCIGDA);
	}

	static ::System::Single PGMPHJAFPGO(::UnityEngine::Vector2& KKLKJNPFNNP, ::UnityEngine::Vector2& FEFMMPHIDED, ::UnityEngine::Vector2& OPMPKFEHOBM)
	{
		return ((::System::Single(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_PGMPHJAFPGO_OFFSET))(KKLKJNPFNNP, FEFMMPHIDED, OPMPKFEHOBM);
	}

	static ::System::Boolean CNPIAGDJEMK_1(::UnityEngine::Vector2& GAGJKCPBGCA, ::UnityEngine::Vector2& EJDEOOOJHHF, ::UnityEngine::Vector2& AHPCBMBAOFN)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_CNPIAGDJEMK_1_OFFSET))(GAGJKCPBGCA, EJDEOOOJHHF, AHPCBMBAOFN);
	}

	static ::System::Single ILNLMBENMEG(::MoleMole::Interaction::AxisSign FHMBJOBMGOJ, ::UnityEngine::BoxCollider*& HFEKLDFFOOP)
	{
		return ((::System::Single(*)(::MoleMole::Interaction::AxisSign, ::UnityEngine::BoxCollider*&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_ILNLMBENMEG_OFFSET))(FHMBJOBMGOJ, HFEKLDFFOOP);
	}

	static ::System::Boolean HHLGCCGCLJE(::Foundation::Unreal::FTransform EJCBEJMGFAJ, ::Foundation::Unreal::FTransform& EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::Foundation::Unreal::FTransform, ::Foundation::Unreal::FTransform&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_HHLGCCGCLJE_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}

	static ::System::Boolean COHDMPBBMPO_1(::NKGKDNFNPIN CBLGCIFLMKL, ::UnityEngine::Vector2& OPMPKFEHOBM)
	{
		return ((::System::Boolean(*)(::NKGKDNFNPIN, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_COHDMPBBMPO_1_OFFSET))(CBLGCIFLMKL, OPMPKFEHOBM);
	}

	static ::IKOBMGNNNNK AAMDPMGIKHK_1(::IKOBMGNNNNK MDLENCJJGKK, ::UnityEngine::Matrix4x4& NOMCLDGPNAF)
	{
		return ((::IKOBMGNNNNK(*)(::IKOBMGNNNNK, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_AAMDPMGIKHK_1_OFFSET))(MDLENCJJGKK, NOMCLDGPNAF);
	}

	static ::DCBBMOHJDOJ AJMJJGGDDPE_1(::DCBBMOHJDOJ ABJOBELOMEE, ::NHKLBKEABJB& NEEBLLCIGDA)
	{
		return ((::DCBBMOHJDOJ(*)(::DCBBMOHJDOJ, ::NHKLBKEABJB&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_AJMJJGGDDPE_1_OFFSET))(ABJOBELOMEE, NEEBLLCIGDA);
	}

	static ::DCBBMOHJDOJ GPFIKOIHAKA_4(::DCBBMOHJDOJ ABJOBELOMEE, ::UnityEngine::Quaternion& BFBELMDIAHI, ::UnityEngine::Vector3& KONFNPMDAAF)
	{
		return ((::DCBBMOHJDOJ(*)(::DCBBMOHJDOJ, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_GPFIKOIHAKA_4_OFFSET))(ABJOBELOMEE, BFBELMDIAHI, KONFNPMDAAF);
	}

	static ::System::Boolean FFCPIEDHBDP_4(::UnityEngine::Plane KIJGEEDPBJD)
	{
		return ((::System::Boolean(*)(::UnityEngine::Plane))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_FFCPIEDHBDP_4_OFFSET))(KIJGEEDPBJD);
	}

	static ::IKOBMGNNNNK ELBDIBOIELA_1(::IKOBMGNNNNK& MLELDFLPAOB, ::UnityEngine::Plane& JPDANPIPEMC)
	{
		return ((::IKOBMGNNNNK(*)(::IKOBMGNNNNK&, ::UnityEngine::Plane&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_ELBDIBOIELA_1_OFFSET))(MLELDFLPAOB, JPDANPIPEMC);
	}

	static ::UnityEngine::Bounds GPFIKOIHAKA_5(::UnityEngine::Bounds GLGPPONOOOG, ::UnityEngine::Matrix4x4& NHKIHGLELGE)
	{
		return ((::UnityEngine::Bounds(*)(::UnityEngine::Bounds, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_GPFIKOIHAKA_5_OFFSET))(GLGPPONOOOG, NHKIHGLELGE);
	}

	static ::UnityEngine::Vector2 NNLLPKEECKP(::UnityEngine::Vector3 JNDDJMAHNAI, ::UnityEngine::Vector3& EIIDOADGOIF, ::UnityEngine::Vector3& OIDHGPBMIPH, ::UnityEngine::Vector3& EMJEGLAOHEE)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_NNLLPKEECKP_OFFSET))(JNDDJMAHNAI, EIIDOADGOIF, OIDHGPBMIPH, EMJEGLAOHEE);
	}

	static ::System::Boolean FFCPIEDHBDP_5(::GOGALMLABHE PPIKGNJHCKH)
	{
		return ((::System::Boolean(*)(::GOGALMLABHE))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_FFCPIEDHBDP_5_OFFSET))(PPIKGNJHCKH);
	}

	static ::System::Boolean HANIOHPPFGO(::NHKLBKEABJB NEEBLLCIGDA)
	{
		return ((::System::Boolean(*)(::NHKLBKEABJB))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_HANIOHPPFGO_OFFSET))(NEEBLLCIGDA);
	}
};
