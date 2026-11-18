#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/FanCollisionWithHeightDetect_FanFollowAtkDirType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/FBHIKNMOHCG.h"
#include "unitysdk/LKGACDKKAIL.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GHLDLOHAOGM;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityAttackPattern; }
namespace MoleMole::Config { class TextureDetect; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define BGONKLMMLFE_AHNADMPCACL_OFFSET UNITYSDK_OFFSET(0x10DF5500)
#define BGONKLMMLFE_AOJFADPAMFO_OFFSET UNITYSDK_OFFSET(0x10DE8590)
#define BGONKLMMLFE_BALELNFKPIE_OFFSET UNITYSDK_OFFSET(0x10DE9F10)
#define BGONKLMMLFE_CDLCBPJHIGL_OFFSET UNITYSDK_OFFSET(0x10DDCFF0)
#define BGONKLMMLFE_CGBFLNCMLON_OFFSET UNITYSDK_OFFSET(0x10DDED80)
#define BGONKLMMLFE_CHFBPIOIKJE_OFFSET UNITYSDK_OFFSET(0x10DE4610)
#define BGONKLMMLFE_CIGACPJAGBJ_OFFSET UNITYSDK_OFFSET(0x10DE90F0)
#define BGONKLMMLFE_CNBFBPBCGDH_OFFSET UNITYSDK_OFFSET(0x10DE87A0)
#define BGONKLMMLFE_CNEMBPIBGIK_OFFSET UNITYSDK_OFFSET(0x10DDFBE0)
#define BGONKLMMLFE_DFCPCCOHABN_OFFSET UNITYSDK_OFFSET(0x10DE8000)
#define BGONKLMMLFE_DJMGILDPKOE_OFFSET UNITYSDK_OFFSET(0x10DF0B50)
#define BGONKLMMLFE_DPFIHALGACN_OFFSET UNITYSDK_OFFSET(0x10DEF5C0)
#define BGONKLMMLFE_DPLLNNEGLIN_OFFSET UNITYSDK_OFFSET(0x10DEBCA0)
#define BGONKLMMLFE_FFKHMKLHFEF_OFFSET UNITYSDK_OFFSET(0x10DDE270)
#define BGONKLMMLFE_FHAHGELHOIN_OFFSET UNITYSDK_OFFSET(0x10DE9C10)
#define BGONKLMMLFE_FKPLICPLOBK_OFFSET UNITYSDK_OFFSET(0x10DE7D50)
#define BGONKLMMLFE_GGDCJJNPBII_OFFSET UNITYSDK_OFFSET(0x10DDF520)
#define BGONKLMMLFE_GKACBFOMIKC_OFFSET UNITYSDK_OFFSET(0x10DDF1F0)
#define BGONKLMMLFE_HDOHBABGHJH_OFFSET UNITYSDK_OFFSET(0x10DF1680)
#define BGONKLMMLFE_HEBMBJHILAL_OFFSET UNITYSDK_OFFSET(0x10DE9C90)
#define BGONKLMMLFE_IBIMJIIGIJI_OFFSET UNITYSDK_OFFSET(0x10DE5A50)
#define BGONKLMMLFE_IJAFKCLLODA_OFFSET UNITYSDK_OFFSET(0x10DE9B00)
#define BGONKLMMLFE_JAHHLAAMFIN_OFFSET UNITYSDK_OFFSET(0x10DDE340)
#define BGONKLMMLFE_JECIFPGKMFJ_OFFSET UNITYSDK_OFFSET(0x10DF4440)
#define BGONKLMMLFE_JGHGBDGNPKB_OFFSET UNITYSDK_OFFSET(0x10DF3360)
#define BGONKLMMLFE_JHBFDELDIOJ_OFFSET UNITYSDK_OFFSET(0x10DF24F0)
#define BGONKLMMLFE_JJEAEEJNHBD_OFFSET UNITYSDK_OFFSET(0x10DE5D00)
#define BGONKLMMLFE_JJLENPDMMKP_OFFSET UNITYSDK_OFFSET(0x10DF31A0)
#define BGONKLMMLFE_KCKPLAPIMAD_OFFSET UNITYSDK_OFFSET(0x10DDB760)
#define BGONKLMMLFE_KJBNELLFAJA_OFFSET UNITYSDK_OFFSET(0x10DDA580)
#define BGONKLMMLFE_LCMNCMOFIFF_OFFSET UNITYSDK_OFFSET(0x10DEA0A0)
#define BGONKLMMLFE_LDEOOIAJAEJ_OFFSET UNITYSDK_OFFSET(0x10DDF0E0)
#define BGONKLMMLFE_LGKMPOMNFKN_OFFSET UNITYSDK_OFFSET(0x10DDE830)
#define BGONKLMMLFE_MBDGBBLHAHD_OFFSET UNITYSDK_OFFSET(0x10DF4B50)
#define BGONKLMMLFE_NFEBBOHIHGM_OFFSET UNITYSDK_OFFSET(0x10DDE2F0)
#define BGONKLMMLFE_NGNFBMPEMON_OFFSET UNITYSDK_OFFSET(0x10DE8C40)
#define BGONKLMMLFE_ONINMNHEKAB_OFFSET UNITYSDK_OFFSET(0x10DEE5C0)
#define BGONKLMMLFE_PEHDIDGLPOJ_OFFSET UNITYSDK_OFFSET(0x10DE7B40)
#define BGONKLMMLFE_PGMCEEDLDHC_OFFSET UNITYSDK_OFFSET(0x10DEE7B0)
#define BGONKLMMLFE_PIHJGNENOMG_OFFSET UNITYSDK_OFFSET(0x10DE8140)
#define BGONKLMMLFE_PJPJCKNGPKE_OFFSET UNITYSDK_OFFSET(0x10DE4590)
#define BGONKLMMLFE_POLOANICDMP_1_OFFSET UNITYSDK_OFFSET(0x10DE1560)
#define BGONKLMMLFE_POLOANICDMP_OFFSET UNITYSDK_OFFSET(0x10DEC210)
#define BGONKLMMLFE__CCTOR_OFFSET UNITYSDK_OFFSET(0x10DDA510)

inline static constexpr unsigned int BGONKLMMLFE_TypeDefinitionIndex = 60783;

class BGONKLMMLFE : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_KJLGLAIABIB()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(BGONKLMMLFE_TypeDefinitionIndex)->GetStaticField(0x4CBE0);
	}
	static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_KLINNCDIMEB()
	{
		return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(BGONKLMMLFE_TypeDefinitionIndex)->GetStaticField(0x4CBE8);
	}
	static ::UnityEngine::Bounds* StaticGet_EELIMONAHAC()
	{
		return (::UnityEngine::Bounds*)Il2CppClass::FromTypeDefinitionIndex(BGONKLMMLFE_TypeDefinitionIndex)->GetStaticField(0x11FA0);
	}
	static ::UnityEngine::Bounds* StaticGet_DPAAKAKCGBI()
	{
		return (::UnityEngine::Bounds*)Il2CppClass::FromTypeDefinitionIndex(BGONKLMMLFE_TypeDefinitionIndex)->GetStaticField(0x11FB8);
	}
	static ::UnityEngine::Bounds* StaticGet_NBKBIBBJFBP()
	{
		return (::UnityEngine::Bounds*)Il2CppClass::FromTypeDefinitionIndex(BGONKLMMLFE_TypeDefinitionIndex)->GetStaticField(0x11FD0);
	}
	static ::System::Boolean* StaticGet_FGAFCINEBIJ()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BGONKLMMLFE_TypeDefinitionIndex)->GetStaticField(0x11FE8);
	}
	// static const ::System::Int32 AAGJDCAKHFF = 0x40; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGONKLMMLFE__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* KJBNELLFAJA(::UnityEngine::Vector3 IDMNIAGNHJL, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* KMLDHNKIGEI, ::System::Single NCCDJLDKFGA, ::System::Single AICBKFLPPJF, ::MoleMole::Config::FanCollisionWithHeightDetect_FanFollowAtkDirType MFJAJPOIEMJ, ::System::Single KKAMDFNMMJH, ::UnityEngine::LayerMask LBPIPEAKPDG, ::MoleMole::Config::ConfigEntityAttackPattern* DBJJLPGHPOL, ::FBHIKNMOHCG MAJNEEALBKL, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* DGDEFOCBJAC, ::System::Boolean IFDGHHGEFDA, ::UnityEngine::Quaternion MDPOLFIGONG, ::LKGACDKKAIL OCKMDPLBKFH, ::System::Boolean DJGDNAMNNPL, ::System::Boolean NPAHEGNGNKE, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* NCMIDJDANKD)
	{
		return ((::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*(*)(::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Single, ::System::Single, ::MoleMole::Config::FanCollisionWithHeightDetect_FanFollowAtkDirType, ::System::Single, ::UnityEngine::LayerMask, ::MoleMole::Config::ConfigEntityAttackPattern*, ::FBHIKNMOHCG, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::System::Boolean, ::UnityEngine::Quaternion, ::LKGACDKKAIL, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*))((::PBYTE)hIl2Cpp + BGONKLMMLFE_KJBNELLFAJA_OFFSET))(IDMNIAGNHJL, MFMPICKHAMJ, KMLDHNKIGEI, NCCDJLDKFGA, AICBKFLPPJF, MFJAJPOIEMJ, KKAMDFNMMJH, LBPIPEAKPDG, DBJJLPGHPOL, MAJNEEALBKL, DGDEFOCBJAC, IFDGHHGEFDA, MDPOLFIGONG, OCKMDPLBKFH, DJGDNAMNNPL, NPAHEGNGNKE, NCMIDJDANKD);
	}

	static ::System::Boolean CGBFLNCMLON(::UnityEngine::Collider* BPJFFKOPCBA, ::UnityEngine::Collider* OCBEMFHMJOG, ::UnityEngine::Vector3& JFIBPDKLOAC)
	{
		return ((::System::Boolean(*)(::UnityEngine::Collider*, ::UnityEngine::Collider*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + BGONKLMMLFE_CGBFLNCMLON_OFFSET))(BPJFFKOPCBA, OCBEMFHMJOG, JFIBPDKLOAC);
	}

	static ::Il2CppArray<::System::Int32>* GKACBFOMIKC(::Il2CppArray<::System::Int32>*& NFJLLLFLGPF, ::System::Int32 JHFKDGBCOBA)
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::Il2CppArray<::System::Int32>*&, ::System::Int32))((::PBYTE)hIl2Cpp + BGONKLMMLFE_GKACBFOMIKC_OFFSET))(NFJLLLFLGPF, JHFKDGBCOBA);
	}

	static ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* GGDCJJNPBII(::UnityEngine::Vector3 IDMNIAGNHJL, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* KMLDHNKIGEI, ::System::Single NCCDJLDKFGA, ::System::Single AICBKFLPPJF, ::MoleMole::Config::FanCollisionWithHeightDetect_FanFollowAtkDirType MFJAJPOIEMJ, ::System::Single KKAMDFNMMJH, ::UnityEngine::LayerMask LBPIPEAKPDG, ::MoleMole::Config::ConfigEntityAttackPattern* DBJJLPGHPOL, ::FBHIKNMOHCG MAJNEEALBKL, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* DGDEFOCBJAC, ::System::Single BKNDEECPGLG, ::System::Boolean IFDGHHGEFDA, ::UnityEngine::Quaternion MDPOLFIGONG, ::LKGACDKKAIL OCKMDPLBKFH, ::System::Boolean DJGDNAMNNPL, ::System::Boolean NPAHEGNGNKE, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* NCMIDJDANKD)
	{
		return ((::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*(*)(::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Single, ::System::Single, ::MoleMole::Config::FanCollisionWithHeightDetect_FanFollowAtkDirType, ::System::Single, ::UnityEngine::LayerMask, ::MoleMole::Config::ConfigEntityAttackPattern*, ::FBHIKNMOHCG, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::System::Single, ::System::Boolean, ::UnityEngine::Quaternion, ::LKGACDKKAIL, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*))((::PBYTE)hIl2Cpp + BGONKLMMLFE_GGDCJJNPBII_OFFSET))(IDMNIAGNHJL, MFMPICKHAMJ, KMLDHNKIGEI, NCCDJLDKFGA, AICBKFLPPJF, MFJAJPOIEMJ, KKAMDFNMMJH, LBPIPEAKPDG, DBJJLPGHPOL, MAJNEEALBKL, DGDEFOCBJAC, BKNDEECPGLG, IFDGHHGEFDA, MDPOLFIGONG, OCKMDPLBKFH, DJGDNAMNNPL, NPAHEGNGNKE, NCMIDJDANKD);
	}

	static ::Il2CppArray<::UnityEngine::RaycastHit>* PJPJCKNGPKE()
	{
		return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)())((::PBYTE)hIl2Cpp + BGONKLMMLFE_PJPJCKNGPKE_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* CHFBPIOIKJE(::UnityEngine::Vector3 CFFLMBJFFKL, ::UnityEngine::Vector3 GIHHDBNOAFH, ::System::Single NCCDJLDKFGA, ::System::Single KKAMDFNMMJH, ::UnityEngine::LayerMask LBPIPEAKPDG, ::UnityEngine::Vector3 EGOMDJANCCP, ::UnityEngine::Vector3 PHAAGOBGIEA, ::FBHIKNMOHCG MAJNEEALBKL, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* ABLBFLBOEOG, ::LKGACDKKAIL OCKMDPLBKFH, ::System::Boolean PNGPOBLBOCE, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* NCMIDJDANKD)
	{
		return ((::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::LayerMask, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::FBHIKNMOHCG, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::LKGACDKKAIL, ::System::Boolean, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*))((::PBYTE)hIl2Cpp + BGONKLMMLFE_CHFBPIOIKJE_OFFSET))(CFFLMBJFFKL, GIHHDBNOAFH, NCCDJLDKFGA, KKAMDFNMMJH, LBPIPEAKPDG, EGOMDJANCCP, PHAAGOBGIEA, MAJNEEALBKL, ABLBFLBOEOG, OCKMDPLBKFH, PNGPOBLBOCE, NCMIDJDANKD);
	}

	static ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* JJEAEEJNHBD(::UnityEngine::Vector3 IDMNIAGNHJL, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::MoleMole::Battle::Entity* KMLDHNKIGEI, ::System::Single JBGLCAFPGHK, ::System::Single BDEDDEGJFKL, ::System::Single KKAMDFNMMJH, ::UnityEngine::LayerMask LBPIPEAKPDG, ::System::String* HCLEPPPPNKG, ::System::String* KOHGKCCLDAA, ::MoleMole::Config::ConfigEntityAttackPattern* DBJJLPGHPOL, ::FBHIKNMOHCG MAJNEEALBKL, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* DGDEFOCBJAC, ::System::Boolean IFDGHHGEFDA, ::UnityEngine::Quaternion MDPOLFIGONG, ::LKGACDKKAIL OCKMDPLBKFH, ::System::Boolean ONMEDKDHKJJ, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* NCMIDJDANKD)
	{
		return ((::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*(*)(::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::LayerMask, ::System::String*, ::System::String*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::FBHIKNMOHCG, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::System::Boolean, ::UnityEngine::Quaternion, ::LKGACDKKAIL, ::System::Boolean, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*))((::PBYTE)hIl2Cpp + BGONKLMMLFE_JJEAEEJNHBD_OFFSET))(IDMNIAGNHJL, NGODDCIOJDP, KMLDHNKIGEI, JBGLCAFPGHK, BDEDDEGJFKL, KKAMDFNMMJH, LBPIPEAKPDG, HCLEPPPPNKG, KOHGKCCLDAA, DBJJLPGHPOL, MAJNEEALBKL, DGDEFOCBJAC, IFDGHHGEFDA, MDPOLFIGONG, OCKMDPLBKFH, ONMEDKDHKJJ, NCMIDJDANKD);
	}

	static ::Il2CppArray<::System::Int32>* DFCPCCOHABN(::Il2CppArray<::System::Int32>*& NFJLLLFLGPF, ::System::Int32 JHFKDGBCOBA)
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::Il2CppArray<::System::Int32>*&, ::System::Int32))((::PBYTE)hIl2Cpp + BGONKLMMLFE_DFCPCCOHABN_OFFSET))(NFJLLLFLGPF, JHFKDGBCOBA);
	}

	static ::UnityEngine::Vector3 JAHHLAAMFIN(::UnityEngine::Collider* IIFMKAPNJNL, ::UnityEngine::Vector3 IDMNIAGNHJL, ::UnityEngine::Vector3 CFJFMMGPGKE, ::UnityEngine::Vector3& LKKJMPKFCIA)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + BGONKLMMLFE_JAHHLAAMFIN_OFFSET))(IIFMKAPNJNL, IDMNIAGNHJL, CFJFMMGPGKE, LKKJMPKFCIA);
	}

	static ::System::Void PIHJGNENOMG(::UnityEngine::Vector3 PIAFALGHEJJ, ::System::Single KKAMDFNMMJH, ::System::Single JBGLCAFPGHK, ::System::Single BDEDDEGJFKL, ::UnityEngine::Vector3 CFJFMMGPGKE, ::System::Int32 FBNGKPGLADH, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*& PILELGPBCLL)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*&))((::PBYTE)hIl2Cpp + BGONKLMMLFE_PIHJGNENOMG_OFFSET))(PIAFALGHEJJ, KKAMDFNMMJH, JBGLCAFPGHK, BDEDDEGJFKL, CFJFMMGPGKE, FBNGKPGLADH, PILELGPBCLL);
	}

	static ::UnityEngine::Vector3 AOJFADPAMFO(::UnityEngine::Vector3 CJGAFLKGLKL, ::MoleMole::Config::ConfigEntityAttackPattern* DBJJLPGHPOL)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::MoleMole::Config::ConfigEntityAttackPattern*))((::PBYTE)hIl2Cpp + BGONKLMMLFE_AOJFADPAMFO_OFFSET))(CJGAFLKGLKL, DBJJLPGHPOL);
	}

	static ::System::Void CNBFBPBCGDH(::UnityEngine::Vector3 CJGAFLKGLKL, ::MoleMole::Config::ConfigEntityAttackPattern* DBJJLPGHPOL, ::UnityEngine::Vector3& KKDOJJEMNME, ::UnityEngine::Vector3& JBIOENMOCGO)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + BGONKLMMLFE_CNBFBPBCGDH_OFFSET))(CJGAFLKGLKL, DBJJLPGHPOL, KKDOJJEMNME, JBIOENMOCGO);
	}

	static ::System::Void CIGACPJAGBJ(::UnityEngine::Vector3 PIAFALGHEJJ, ::UnityEngine::Quaternion BFBELMDIAHI, ::System::Single KKAMDFNMMJH, ::System::Single NCCDJLDKFGA, ::System::Int32 FBNGKPGLADH, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*& PILELGPBCLL)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*&))((::PBYTE)hIl2Cpp + BGONKLMMLFE_CIGACPJAGBJ_OFFSET))(PIAFALGHEJJ, BFBELMDIAHI, KKAMDFNMMJH, NCCDJLDKFGA, FBNGKPGLADH, PILELGPBCLL);
	}

	static ::System::Void NGNFBMPEMON(::MoleMole::Config::ConfigEntityAttackPattern* DBJJLPGHPOL, ::UnityEngine::Vector3 CFJFMMGPGKE, ::UnityEngine::Vector3 KILPCOMOCMD, ::UnityEngine::Vector3& KKDOJJEMNME, ::UnityEngine::Vector3& JBIOENMOCGO)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + BGONKLMMLFE_NGNFBMPEMON_OFFSET))(DBJJLPGHPOL, CFJFMMGPGKE, KILPCOMOCMD, KKDOJJEMNME, JBIOENMOCGO);
	}

	static ::Il2CppArray<::System::Int32>* IJAFKCLLODA(::Il2CppArray<::System::Int32>*& NFJLLLFLGPF, ::System::Int32 JHFKDGBCOBA)
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::Il2CppArray<::System::Int32>*&, ::System::Int32))((::PBYTE)hIl2Cpp + BGONKLMMLFE_IJAFKCLLODA_OFFSET))(NFJLLLFLGPF, JHFKDGBCOBA);
	}

	static ::System::Void KCKPLAPIMAD(::MoleMole::Battle::Entity* NGODDCIOJDP, ::MoleMole::Battle::Entity* DAJKIJEKNAF, ::MoleMole::Config::ConfigEntityAttackPattern* DBJJLPGHPOL, ::UnityEngine::Vector3& KKDOJJEMNME, ::UnityEngine::Vector3& JBIOENMOCGO, ::System::Boolean NEMOBCBELBL)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + BGONKLMMLFE_KCKPLAPIMAD_OFFSET))(NGODDCIOJDP, DAJKIJEKNAF, DBJJLPGHPOL, KKDOJJEMNME, JBIOENMOCGO, NEMOBCBELBL);
	}

	static ::Il2CppArray<::UnityEngine::Collider*>* FHAHGELHOIN()
	{
		return ((::Il2CppArray<::UnityEngine::Collider*>*(*)())((::PBYTE)hIl2Cpp + BGONKLMMLFE_FHAHGELHOIN_OFFSET))();
	}

	static ::System::Boolean HEBMBJHILAL(::UnityEngine::Vector3 PIAFALGHEJJ, ::System::Single NCCDJLDKFGA, ::UnityEngine::LayerMask LBPIPEAKPDG, ::UnityEngine::GameObject* DGENELFJNJF, ::System::Single& PAHOPADLEMA)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask, ::UnityEngine::GameObject*, ::System::Single&))((::PBYTE)hIl2Cpp + BGONKLMMLFE_HEBMBJHILAL_OFFSET))(PIAFALGHEJJ, NCCDJLDKFGA, LBPIPEAKPDG, DGENELFJNJF, PAHOPADLEMA);
	}

	static ::UnityEngine::Vector3 BALELNFKPIE(::UnityEngine::Vector3 DAAEHEHLLLD)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BGONKLMMLFE_BALELNFKPIE_OFFSET))(DAAEHEHLLLD);
	}

	static ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* LCMNCMOFIFF(::UnityEngine::Vector3 IDMNIAGNHJL, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::Single JBGLCAFPGHK, ::System::Single BDEDDEGJFKL, ::System::Single KKAMDFNMMJH, ::UnityEngine::LayerMask LBPIPEAKPDG, ::System::String* HCLEPPPPNKG, ::System::String* KOHGKCCLDAA, ::MoleMole::Config::ConfigEntityAttackPattern* DBJJLPGHPOL, ::FBHIKNMOHCG MAJNEEALBKL, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* DGDEFOCBJAC, ::LKGACDKKAIL OCKMDPLBKFH)
	{
		return ((::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*(*)(::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::LayerMask, ::System::String*, ::System::String*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::FBHIKNMOHCG, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::LKGACDKKAIL))((::PBYTE)hIl2Cpp + BGONKLMMLFE_LCMNCMOFIFF_OFFSET))(IDMNIAGNHJL, NGODDCIOJDP, JBGLCAFPGHK, BDEDDEGJFKL, KKAMDFNMMJH, LBPIPEAKPDG, HCLEPPPPNKG, KOHGKCCLDAA, DBJJLPGHPOL, MAJNEEALBKL, DGDEFOCBJAC, OCKMDPLBKFH);
	}

	static ::UnityEngine::Vector3 FKPLICPLOBK(::UnityEngine::Vector3 GIAEPMKCBIB, ::UnityEngine::Collider* CHIFPJGLFPK, ::UnityEngine::Vector3 ENMMAGPDPCK, ::UnityEngine::Vector3& LBKMCOKBJEA)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + BGONKLMMLFE_FKPLICPLOBK_OFFSET))(GIAEPMKCBIB, CHIFPJGLFPK, ENMMAGPDPCK, LBKMCOKBJEA);
	}

	static ::System::Boolean NFEBBOHIHGM(::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* PILELGPBCLL, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BGONKLMMLFE_NFEBBOHIHGM_OFFSET))(PILELGPBCLL, KECKGDFIALJ);
	}

	static ::System::Boolean CDLCBPJHIGL(::UnityEngine::Collider* EHHHMFKHNAI, ::UnityEngine::Vector3 LGPCAKNALGD, ::System::Single NCCDJLDKFGA, ::UnityEngine::Quaternion JICANHHFPGO)
	{
		return ((::System::Boolean(*)(::UnityEngine::Collider*, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + BGONKLMMLFE_CDLCBPJHIGL_OFFSET))(EHHHMFKHNAI, LGPCAKNALGD, NCCDJLDKFGA, JICANHHFPGO);
	}

	static ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* POLOANICDMP(::UnityEngine::Vector3 EIEBOGBEODA, ::System::Single NCCDJLDKFGA, ::UnityEngine::Vector3 JBCNPOHMGPE, ::System::Single AICBKFLPPJF, ::System::Single KKAMDFNMMJH, ::UnityEngine::LayerMask LBPIPEAKPDG, ::System::String* HCLEPPPPNKG, ::System::String* KOHGKCCLDAA, ::MoleMole::Config::ConfigEntityAttackPattern* DBJJLPGHPOL, ::FBHIKNMOHCG MAJNEEALBKL, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* PILELGPBCLL, ::LKGACDKKAIL OCKMDPLBKFH)
	{
		return ((::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::LayerMask, ::System::String*, ::System::String*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::FBHIKNMOHCG, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::LKGACDKKAIL))((::PBYTE)hIl2Cpp + BGONKLMMLFE_POLOANICDMP_OFFSET))(EIEBOGBEODA, NCCDJLDKFGA, JBCNPOHMGPE, AICBKFLPPJF, KKAMDFNMMJH, LBPIPEAKPDG, HCLEPPPPNKG, KOHGKCCLDAA, DBJJLPGHPOL, MAJNEEALBKL, PILELGPBCLL, OCKMDPLBKFH);
	}

	static ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* PGMCEEDLDHC(::UnityEngine::Vector3 IDMNIAGNHJL, ::System::Single NCCDJLDKFGA, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* KMLDHNKIGEI, ::System::Single AICBKFLPPJF, ::UnityEngine::LayerMask LBPIPEAKPDG, ::MoleMole::Config::ConfigEntityAttackPattern* DBJJLPGHPOL, ::FBHIKNMOHCG MAJNEEALBKL, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* DGDEFOCBJAC, ::LKGACDKKAIL OCKMDPLBKFH)
	{
		return ((::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*(*)(::UnityEngine::Vector3, ::System::Single, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Single, ::UnityEngine::LayerMask, ::MoleMole::Config::ConfigEntityAttackPattern*, ::FBHIKNMOHCG, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::LKGACDKKAIL))((::PBYTE)hIl2Cpp + BGONKLMMLFE_PGMCEEDLDHC_OFFSET))(IDMNIAGNHJL, NCCDJLDKFGA, MFMPICKHAMJ, KMLDHNKIGEI, AICBKFLPPJF, LBPIPEAKPDG, DBJJLPGHPOL, MAJNEEALBKL, DGDEFOCBJAC, OCKMDPLBKFH);
	}

	static ::UnityEngine::Vector3 LDEOOIAJAEJ(::UnityEngine::Bounds FFNDCHNJPKE, ::UnityEngine::Bounds OCDFNIBOJJE)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Bounds, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + BGONKLMMLFE_LDEOOIAJAEJ_OFFSET))(FFNDCHNJPKE, OCDFNIBOJJE);
	}

	static ::System::Boolean DPFIHALGACN(::MoleMole::Config::ConfigEntityAttackPattern* EKPLGBOHGMH, ::UnityEngine::Vector3 CGLGGNDOGDL, ::UnityEngine::Vector3 KEEOIIIMOLF, ::UnityEngine::Vector3 GNKCBIPLBAO, ::UnityEngine::Bounds& ECLJJJHGDFC, ::LKGACDKKAIL OCKMDPLBKFH)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Bounds&, ::LKGACDKKAIL))((::PBYTE)hIl2Cpp + BGONKLMMLFE_DPFIHALGACN_OFFSET))(EKPLGBOHGMH, CGLGGNDOGDL, KEEOIIIMOLF, GNKCBIPLBAO, ECLJJJHGDFC, OCKMDPLBKFH);
	}

	static ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* DJMGILDPKOE(::UnityEngine::Vector3 IDMNIAGNHJL, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::MoleMole::Battle::Entity* KMLDHNKIGEI, ::System::Single JBGLCAFPGHK, ::System::Single BDEDDEGJFKL, ::System::Single KKAMDFNMMJH, ::UnityEngine::LayerMask LBPIPEAKPDG, ::MoleMole::Config::ConfigEntityAttackPattern* DBJJLPGHPOL, ::FBHIKNMOHCG MAJNEEALBKL, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* DGDEFOCBJAC, ::System::Boolean IFDGHHGEFDA, ::UnityEngine::Quaternion MDPOLFIGONG, ::LKGACDKKAIL OCKMDPLBKFH)
	{
		return ((::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*(*)(::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::LayerMask, ::MoleMole::Config::ConfigEntityAttackPattern*, ::FBHIKNMOHCG, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::System::Boolean, ::UnityEngine::Quaternion, ::LKGACDKKAIL))((::PBYTE)hIl2Cpp + BGONKLMMLFE_DJMGILDPKOE_OFFSET))(IDMNIAGNHJL, NGODDCIOJDP, KMLDHNKIGEI, JBGLCAFPGHK, BDEDDEGJFKL, KKAMDFNMMJH, LBPIPEAKPDG, DBJJLPGHPOL, MAJNEEALBKL, DGDEFOCBJAC, IFDGHHGEFDA, MDPOLFIGONG, OCKMDPLBKFH);
	}

	static ::System::Void JHBFDELDIOJ(::UnityEngine::Bounds APDMNBMOGPL, ::UnityEngine::Vector3 IEKOKMJDIML, ::UnityEngine::Vector3 OOMBMLIHFIN, ::UnityEngine::Vector3 OFHMJPDBIEE, ::UnityEngine::Vector3 MKJKBPKKCAO, ::UnityEngine::Bounds& JLOMIPKCHPJ)
	{
		return ((::System::Void(*)(::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + BGONKLMMLFE_JHBFDELDIOJ_OFFSET))(APDMNBMOGPL, IEKOKMJDIML, OOMBMLIHFIN, OFHMJPDBIEE, MKJKBPKKCAO, JLOMIPKCHPJ);
	}

	static ::System::Boolean LGKMPOMNFKN(::MoleMole::Config::ConfigEntityAttackPattern* EKPLGBOHGMH, ::UnityEngine::Vector3 CGLGGNDOGDL, ::UnityEngine::Vector3 KEEOIIIMOLF, ::UnityEngine::Vector3 GNKCBIPLBAO, ::UnityEngine::Collider* OCBEMFHMJOG, ::UnityEngine::Vector3& JFIBPDKLOAC, ::LKGACDKKAIL OCKMDPLBKFH)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Collider*, ::UnityEngine::Vector3&, ::LKGACDKKAIL))((::PBYTE)hIl2Cpp + BGONKLMMLFE_LGKMPOMNFKN_OFFSET))(EKPLGBOHGMH, CGLGGNDOGDL, KEEOIIIMOLF, GNKCBIPLBAO, OCBEMFHMJOG, JFIBPDKLOAC, OCKMDPLBKFH);
	}

	static ::System::Boolean HDOHBABGHJH(::MoleMole::Config::TextureDetect* CJDALIAKEGC, ::UnityEngine::Collider* CHIFPJGLFPK, ::UnityEngine::Vector3 IDMNIAGNHJL, ::UnityEngine::Vector3 IEKOKMJDIML, ::UnityEngine::Vector3 OOMBMLIHFIN, ::UnityEngine::Vector3 OFHMJPDBIEE)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::TextureDetect*, ::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BGONKLMMLFE_HDOHBABGHJH_OFFSET))(CJDALIAKEGC, CHIFPJGLFPK, IDMNIAGNHJL, IEKOKMJDIML, OOMBMLIHFIN, OFHMJPDBIEE);
	}

	static ::UnityEngine::Vector3 ONINMNHEKAB(::UnityEngine::Vector3 FGHBGLFOAMJ, ::UnityEngine::Quaternion AHPGBKPOEPL, ::System::Int32 ABHBKFJKINO)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Int32))((::PBYTE)hIl2Cpp + BGONKLMMLFE_ONINMNHEKAB_OFFSET))(FGHBGLFOAMJ, AHPGBKPOEPL, ABHBKFJKINO);
	}

	static ::MoleMole::Battle::Entity* FFKHMKLHFEF(::UnityEngine::Collider* EHHHMFKHNAI)
	{
		return ((::MoleMole::Battle::Entity*(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + BGONKLMMLFE_FFKHMKLHFEF_OFFSET))(EHHHMFKHNAI);
	}

	static ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* JECIFPGKMFJ(::UnityEngine::Vector3 IDMNIAGNHJL, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::System::Single NCCDJLDKFGA, ::System::Single AICBKFLPPJF, ::System::Single GJLFKMJKFHC, ::System::Single OODBIJJLJFJ, ::MoleMole::Config::FanCollisionWithHeightDetect_FanFollowAtkDirType MFJAJPOIEMJ, ::UnityEngine::LayerMask LBPIPEAKPDG, ::MoleMole::Config::ConfigEntityAttackPattern* DBJJLPGHPOL, ::FBHIKNMOHCG MAJNEEALBKL, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* DGDEFOCBJAC, ::LKGACDKKAIL OCKMDPLBKFH)
	{
		return ((::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*(*)(::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::MoleMole::Config::FanCollisionWithHeightDetect_FanFollowAtkDirType, ::UnityEngine::LayerMask, ::MoleMole::Config::ConfigEntityAttackPattern*, ::FBHIKNMOHCG, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::LKGACDKKAIL))((::PBYTE)hIl2Cpp + BGONKLMMLFE_JECIFPGKMFJ_OFFSET))(IDMNIAGNHJL, MFMPICKHAMJ, NCCDJLDKFGA, AICBKFLPPJF, GJLFKMJKFHC, OODBIJJLJFJ, MFJAJPOIEMJ, LBPIPEAKPDG, DBJJLPGHPOL, MAJNEEALBKL, DGDEFOCBJAC, OCKMDPLBKFH);
	}

	static ::System::Boolean PEHDIDGLPOJ(::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* PILELGPBCLL, ::MoleMole::Battle::Entity* KECKGDFIALJ, ::UnityEngine::Collider* EHHHMFKHNAI, ::System::Int32 KBIECIBMCHM)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::MoleMole::Battle::Entity*, ::UnityEngine::Collider*, ::System::Int32))((::PBYTE)hIl2Cpp + BGONKLMMLFE_PEHDIDGLPOJ_OFFSET))(PILELGPBCLL, KECKGDFIALJ, EHHHMFKHNAI, KBIECIBMCHM);
	}

	static ::UnityEngine::Vector3 JJLENPDMMKP(::UnityEngine::Vector3 GJHJICKIOGO, ::UnityEngine::Vector3 IEKOKMJDIML, ::UnityEngine::Vector3 OOMBMLIHFIN, ::UnityEngine::Vector3 OFHMJPDBIEE, ::UnityEngine::Vector3 OPMPKFEHOBM)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BGONKLMMLFE_JJLENPDMMKP_OFFSET))(GJHJICKIOGO, IEKOKMJDIML, OOMBMLIHFIN, OFHMJPDBIEE, OPMPKFEHOBM);
	}

	static ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* CNEMBPIBGIK(::UnityEngine::Vector3 IDMNIAGNHJL, ::System::Single NCCDJLDKFGA, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* KMLDHNKIGEI, ::System::Single AICBKFLPPJF, ::MoleMole::Config::FanCollisionWithHeightDetect_FanFollowAtkDirType MFJAJPOIEMJ, ::System::Single KKAMDFNMMJH, ::UnityEngine::LayerMask LBPIPEAKPDG, ::MoleMole::Config::ConfigEntityAttackPattern* DBJJLPGHPOL, ::FBHIKNMOHCG MAJNEEALBKL, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* DGDEFOCBJAC, ::System::Boolean IFDGHHGEFDA, ::UnityEngine::Quaternion MDPOLFIGONG, ::LKGACDKKAIL OCKMDPLBKFH, ::System::Boolean DJGDNAMNNPL, ::System::Boolean NPAHEGNGNKE, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* NCMIDJDANKD)
	{
		return ((::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*(*)(::UnityEngine::Vector3, ::System::Single, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Single, ::MoleMole::Config::FanCollisionWithHeightDetect_FanFollowAtkDirType, ::System::Single, ::UnityEngine::LayerMask, ::MoleMole::Config::ConfigEntityAttackPattern*, ::FBHIKNMOHCG, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::System::Boolean, ::UnityEngine::Quaternion, ::LKGACDKKAIL, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*))((::PBYTE)hIl2Cpp + BGONKLMMLFE_CNEMBPIBGIK_OFFSET))(IDMNIAGNHJL, NCCDJLDKFGA, MFMPICKHAMJ, KMLDHNKIGEI, AICBKFLPPJF, MFJAJPOIEMJ, KKAMDFNMMJH, LBPIPEAKPDG, DBJJLPGHPOL, MAJNEEALBKL, DGDEFOCBJAC, IFDGHHGEFDA, MDPOLFIGONG, OCKMDPLBKFH, DJGDNAMNNPL, NPAHEGNGNKE, NCMIDJDANKD);
	}

	static ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* MBDGBBLHAHD(::UnityEngine::Vector3 ENPJGJBBIPH, ::System::Single NCCDJLDKFGA, ::UnityEngine::LayerMask LBPIPEAKPDG, ::UnityEngine::Vector3 GKPJNHBLPOI, ::UnityEngine::Vector3 NNLHDNJIPKH, ::FBHIKNMOHCG MAJNEEALBKL, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* ABLBFLBOEOG, ::LKGACDKKAIL OCKMDPLBKFH, ::System::Boolean PNGPOBLBOCE, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* NCMIDJDANKD)
	{
		return ((::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::FBHIKNMOHCG, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::LKGACDKKAIL, ::System::Boolean, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*))((::PBYTE)hIl2Cpp + BGONKLMMLFE_MBDGBBLHAHD_OFFSET))(ENPJGJBBIPH, NCCDJLDKFGA, LBPIPEAKPDG, GKPJNHBLPOI, NNLHDNJIPKH, MAJNEEALBKL, ABLBFLBOEOG, OCKMDPLBKFH, PNGPOBLBOCE, NCMIDJDANKD);
	}

	static ::System::Boolean DPLLNNEGLIN(::UnityEngine::Collider* EHHHMFKHNAI, ::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Int32 KBIECIBMCHM, ::UnityEngine::Vector3 NMPIIANPMBD, ::UnityEngine::Vector3 CFJFMMGPGKE, ::UnityEngine::Vector3 KBHFBLJPFJH, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* HIACLJOGNPH, ::UnityEngine::RaycastHit& OFLHPPDJLNL)
	{
		return ((::System::Boolean(*)(::UnityEngine::Collider*, ::MoleMole::Battle::Entity*, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + BGONKLMMLFE_DPLLNNEGLIN_OFFSET))(EHHHMFKHNAI, KECKGDFIALJ, KBIECIBMCHM, NMPIIANPMBD, CFJFMMGPGKE, KBHFBLJPFJH, HIACLJOGNPH, OFLHPPDJLNL);
	}

	static ::System::Boolean AHNADMPCACL(::UnityEngine::Vector3 PIAFALGHEJJ, ::System::Single NCCDJLDKFGA, ::UnityEngine::LayerMask LBPIPEAKPDG, ::System::Func_2<::UnityEngine::Collider*, ::System::Boolean>* PNPMMLNCDNK)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask, ::System::Func_2<::UnityEngine::Collider*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + BGONKLMMLFE_AHNADMPCACL_OFFSET))(PIAFALGHEJJ, NCCDJLDKFGA, LBPIPEAKPDG, PNPMMLNCDNK);
	}

	static ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* POLOANICDMP_1(::UnityEngine::Vector3 IDMNIAGNHJL, ::System::Single NCCDJLDKFGA, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* KMLDHNKIGEI, ::System::Single AICBKFLPPJF, ::System::Single KKAMDFNMMJH, ::UnityEngine::LayerMask LBPIPEAKPDG, ::MoleMole::Config::ConfigEntityAttackPattern* DBJJLPGHPOL, ::FBHIKNMOHCG MAJNEEALBKL, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* DGDEFOCBJAC, ::System::Single BKNDEECPGLG, ::System::Boolean IFDGHHGEFDA, ::UnityEngine::Quaternion MDPOLFIGONG, ::LKGACDKKAIL OCKMDPLBKFH, ::System::Boolean DJGDNAMNNPL, ::System::Boolean NPAHEGNGNKE, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* NCMIDJDANKD)
	{
		return ((::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*(*)(::UnityEngine::Vector3, ::System::Single, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Single, ::System::Single, ::UnityEngine::LayerMask, ::MoleMole::Config::ConfigEntityAttackPattern*, ::FBHIKNMOHCG, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::System::Single, ::System::Boolean, ::UnityEngine::Quaternion, ::LKGACDKKAIL, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*))((::PBYTE)hIl2Cpp + BGONKLMMLFE_POLOANICDMP_1_OFFSET))(IDMNIAGNHJL, NCCDJLDKFGA, MFMPICKHAMJ, KMLDHNKIGEI, AICBKFLPPJF, KKAMDFNMMJH, LBPIPEAKPDG, DBJJLPGHPOL, MAJNEEALBKL, DGDEFOCBJAC, BKNDEECPGLG, IFDGHHGEFDA, MDPOLFIGONG, OCKMDPLBKFH, DJGDNAMNNPL, NPAHEGNGNKE, NCMIDJDANKD);
	}

	static ::System::Boolean JGHGBDGNPKB(::MoleMole::Config::ConfigEntityAttackPattern* EKPLGBOHGMH, ::UnityEngine::Vector3 CGLGGNDOGDL, ::UnityEngine::Vector3 KEEOIIIMOLF, ::UnityEngine::Vector3 GNKCBIPLBAO, ::UnityEngine::Bounds& ECLJJJHGDFC, ::LKGACDKKAIL OCKMDPLBKFH)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ConfigEntityAttackPattern*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Bounds&, ::LKGACDKKAIL))((::PBYTE)hIl2Cpp + BGONKLMMLFE_JGHGBDGNPKB_OFFSET))(EKPLGBOHGMH, CGLGGNDOGDL, KEEOIIIMOLF, GNKCBIPLBAO, ECLJJJHGDFC, OCKMDPLBKFH);
	}

	static ::System::Boolean IBIMJIIGIJI(::UnityEngine::Vector3 EIIDOADGOIF, ::UnityEngine::Collider* EHHHMFKHNAI, ::UnityEngine::RaycastHit& JHLJJEPFNHC)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Collider*, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + BGONKLMMLFE_IBIMJIIGIJI_OFFSET))(EIIDOADGOIF, EHHHMFKHNAI, JHLJJEPFNHC);
	}
};
