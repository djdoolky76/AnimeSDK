#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;
class OAMAMDGEJKH;
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class RectTransform; }

#define LBKDMJMCDHM_BAJFDAIOIAG_OFFSET UNITYSDK_OFFSET(0x15BB2080)
#define LBKDMJMCDHM_CGBDHFCJFJC_OFFSET UNITYSDK_OFFSET(0x15BB2390)
#define LBKDMJMCDHM_DFMNKECIAJA_1_OFFSET UNITYSDK_OFFSET(0x15BB4AE0)
#define LBKDMJMCDHM_DFMNKECIAJA_OFFSET UNITYSDK_OFFSET(0x15BB3560)
#define LBKDMJMCDHM_EIIPIADPILI_OFFSET UNITYSDK_OFFSET(0x15BB1CE0)
#define LBKDMJMCDHM_EPFEKCIAGHA_OFFSET UNITYSDK_OFFSET(0x15BB5450)
#define LBKDMJMCDHM_FFDLJDIGKHI_OFFSET UNITYSDK_OFFSET(0x15BB3E60)
#define LBKDMJMCDHM_FOJDEFLMNBF_OFFSET UNITYSDK_OFFSET(0x15BB3780)
#define LBKDMJMCDHM_ILMINLKNNGJ_OFFSET UNITYSDK_OFFSET(0x15BB2F00)
#define LBKDMJMCDHM_JEALNOKFDJL_OFFSET UNITYSDK_OFFSET(0x15BB5A50)
#define LBKDMJMCDHM_JINNBEJCDAC_OFFSET UNITYSDK_OFFSET(0x15BB3370)
#define LBKDMJMCDHM_JIOLBHIDFKJ_1_OFFSET UNITYSDK_OFFSET(0x15BB4740)
#define LBKDMJMCDHM_JIOLBHIDFKJ_2_OFFSET UNITYSDK_OFFSET(0x15BB5890)
#define LBKDMJMCDHM_JIOLBHIDFKJ_3_OFFSET UNITYSDK_OFFSET(0x15BB3180)
#define LBKDMJMCDHM_JIOLBHIDFKJ_OFFSET UNITYSDK_OFFSET(0x15BB2FC0)
#define LBKDMJMCDHM_LMKAJFEJFAK_OFFSET UNITYSDK_OFFSET(0x15BB2D70)
#define LBKDMJMCDHM_MDMMIGELPLA_OFFSET UNITYSDK_OFFSET(0x15BB5290)
#define LBKDMJMCDHM_MEDNACCECDG_OFFSET UNITYSDK_OFFSET(0x15BB3990)
#define LBKDMJMCDHM_NHNCDCONIHO_OFFSET UNITYSDK_OFFSET(0x15BB3B10)
#define LBKDMJMCDHM_NKDHGHIHLJE_OFFSET UNITYSDK_OFFSET(0x15BB2B80)
#define LBKDMJMCDHM_NNOLNMHDKAE_OFFSET UNITYSDK_OFFSET(0x15BB3810)
#define LBKDMJMCDHM_PCFEKBNJPIG_OFFSET UNITYSDK_OFFSET(0x15BB4CB0)
#define LBKDMJMCDHM_PJBGOGMIHAD_OFFSET UNITYSDK_OFFSET(0x15BB2780)
#define LBKDMJMCDHM__CCTOR_OFFSET UNITYSDK_OFFSET(0x15BB1C70)

inline static constexpr unsigned int LBKDMJMCDHM_TypeDefinitionIndex = 43644;

class LBKDMJMCDHM : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::Plane>** StaticGet_FBDFKEMDGGD()
	{
		return (::Il2CppArray<::UnityEngine::Plane>**)Il2CppClass::FromTypeDefinitionIndex(LBKDMJMCDHM_TypeDefinitionIndex)->GetStaticField(0x3E570);
	}
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_OFAGOFIHDEL()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(LBKDMJMCDHM_TypeDefinitionIndex)->GetStaticField(0x3E578);
	}
	// static const ::System::Single KBIPEBFNFKH; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBKDMJMCDHM__CCTOR_OFFSET))();
	}

	static ::Il2CppArray<::UnityEngine::Plane>* EIIPIADPILI(::UnityEngine::Camera* KONLMDBCDCK)
	{
		return ((::Il2CppArray<::UnityEngine::Plane>*(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + LBKDMJMCDHM_EIIPIADPILI_OFFSET))(KONLMDBCDCK);
	}

	static ::System::Boolean BAJFDAIOIAG(::UnityEngine::Vector3 BAECLPHLLHO, ::System::Single JNOMOFOMFEK, ::System::Single FINIAEFOGIK, ::System::Single BGPJHNJKHIN, ::System::Single PMEHNJABPAN)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LBKDMJMCDHM_BAJFDAIOIAG_OFFSET))(BAECLPHLLHO, JNOMOFOMFEK, FINIAEFOGIK, BGPJHNJKHIN, PMEHNJABPAN);
	}

	static ::System::Boolean CGBDHFCJFJC(::GEIHCPAOKKK* OHPJHPEOFLD, ::System::Single JNOMOFOMFEK, ::System::Single FINIAEFOGIK, ::System::Single BGPJHNJKHIN, ::System::Single PMEHNJABPAN, ::System::Boolean BGDOEAIEEEA, ::System::Single LFHBFCDKMCL, ::System::Boolean HKHGODBEJON)
	{
		return ((::System::Boolean(*)(::GEIHCPAOKKK*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + LBKDMJMCDHM_CGBDHFCJFJC_OFFSET))(OHPJHPEOFLD, JNOMOFOMFEK, FINIAEFOGIK, BGPJHNJKHIN, PMEHNJABPAN, BGDOEAIEEEA, LFHBFCDKMCL, HKHGODBEJON);
	}

	static ::System::Boolean ILMINLKNNGJ(::UnityEngine::Bounds GOFCNJELMHH)
	{
		return ((::System::Boolean(*)(::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + LBKDMJMCDHM_ILMINLKNNGJ_OFFSET))(GOFCNJELMHH);
	}

	static ::System::Boolean NKDHGHIHLJE(::UnityEngine::Vector3 BAECLPHLLHO, ::UnityEngine::Bounds GOFCNJELMHH, ::System::Single JNOMOFOMFEK, ::System::Single FINIAEFOGIK, ::System::Single BGPJHNJKHIN, ::System::Single PMEHNJABPAN)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Bounds, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LBKDMJMCDHM_NKDHGHIHLJE_OFFSET))(BAECLPHLLHO, GOFCNJELMHH, JNOMOFOMFEK, FINIAEFOGIK, BGPJHNJKHIN, PMEHNJABPAN);
	}

	static ::System::Boolean JIOLBHIDFKJ(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Single CKIMKCEGHKD)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + LBKDMJMCDHM_JIOLBHIDFKJ_OFFSET))(KECKGDFIALJ, CKIMKCEGHKD);
	}

	static ::System::Boolean JINNBEJCDAC(::UnityEngine::Vector3 BAECLPHLLHO, ::UnityEngine::Bounds GOFCNJELMHH, ::System::Single JNOMOFOMFEK, ::System::Single FINIAEFOGIK, ::System::Single BGPJHNJKHIN, ::System::Single PMEHNJABPAN)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Bounds, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LBKDMJMCDHM_JINNBEJCDAC_OFFSET))(BAECLPHLLHO, GOFCNJELMHH, JNOMOFOMFEK, FINIAEFOGIK, BGPJHNJKHIN, PMEHNJABPAN);
	}

	static ::System::Boolean DFMNKECIAJA(::System::Single NBEIBIKEAGG, ::System::Single CPACMADNEGH, ::System::Single KELKJBGEOFH, ::System::Single FEJFGJAAPII, ::System::Single EPNOHCDHFLC, ::System::Single LELFLFAIOOE, ::System::Single GBDNIBEOGDB, ::System::Single APEDCAHDBKH, ::System::Single& JFHKOCCBIFF, ::System::Single& KPBHONHPMBC)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + LBKDMJMCDHM_DFMNKECIAJA_OFFSET))(NBEIBIKEAGG, CPACMADNEGH, KELKJBGEOFH, FEJFGJAAPII, EPNOHCDHFLC, LELFLFAIOOE, GBDNIBEOGDB, APEDCAHDBKH, JFHKOCCBIFF, KPBHONHPMBC);
	}

	static ::UnityEngine::Vector3 PJBGOGMIHAD(::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::UnityEngine::Vector3(*)(::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + LBKDMJMCDHM_PJBGOGMIHAD_OFFSET))(OHPJHPEOFLD);
	}

	static ::System::Boolean FOJDEFLMNBF(::System::Single EJCBEJMGFAJ, ::System::Single EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LBKDMJMCDHM_FOJDEFLMNBF_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}

	static ::System::Boolean LMKAJFEJFAK(::UnityEngine::Vector3 BAECLPHLLHO, ::System::Single LFHBFCDKMCL, ::System::Single JNOMOFOMFEK, ::System::Single FINIAEFOGIK, ::System::Single BGPJHNJKHIN, ::System::Single PMEHNJABPAN)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LBKDMJMCDHM_LMKAJFEJFAK_OFFSET))(BAECLPHLLHO, LFHBFCDKMCL, JNOMOFOMFEK, FINIAEFOGIK, BGPJHNJKHIN, PMEHNJABPAN);
	}

	static ::System::Boolean MEDNACCECDG(::UnityEngine::Vector3 OPMPKFEHOBM, ::UnityEngine::Camera* KONLMDBCDCK)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + LBKDMJMCDHM_MEDNACCECDG_OFFSET))(OPMPKFEHOBM, KONLMDBCDCK);
	}

	static ::System::Boolean NHNCDCONIHO(::OAMAMDGEJKH* FDFGNNAJLDN, ::GEIHCPAOKKK* OHPJHPEOFLD, ::System::Single JNOMOFOMFEK, ::System::Single FINIAEFOGIK, ::System::Single BGPJHNJKHIN, ::System::Single PMEHNJABPAN, ::System::Boolean BGDOEAIEEEA, ::System::Single LFHBFCDKMCL)
	{
		return ((::System::Boolean(*)(::OAMAMDGEJKH*, ::GEIHCPAOKKK*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + LBKDMJMCDHM_NHNCDCONIHO_OFFSET))(FDFGNNAJLDN, OHPJHPEOFLD, JNOMOFOMFEK, FINIAEFOGIK, BGPJHNJKHIN, PMEHNJABPAN, BGDOEAIEEEA, LFHBFCDKMCL);
	}

	static ::System::Boolean FFDLJDIGKHI(::UnityEngine::Vector3 IACKHFCLPJI, ::System::Single FGCHIHJKGLG, ::System::Single LDLJIKKIPGH, ::System::Single BFBNJCOPIKL, ::UnityEngine::Collider* GEMPLGPALMJ)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + LBKDMJMCDHM_FFDLJDIGKHI_OFFSET))(IACKHFCLPJI, FGCHIHJKGLG, LDLJIKKIPGH, BFBNJCOPIKL, GEMPLGPALMJ);
	}

	static ::System::Boolean JIOLBHIDFKJ_1(::UnityEngine::Vector3 BAECLPHLLHO)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LBKDMJMCDHM_JIOLBHIDFKJ_1_OFFSET))(BAECLPHLLHO);
	}

	static ::System::Boolean DFMNKECIAJA_1(::UnityEngine::Vector2 BGCJNJABNAB, ::UnityEngine::Vector2 MKEOBDGHOBH, ::UnityEngine::Vector2 OMLFJFPIEMO, ::UnityEngine::Vector2 GGJIJAFDGFM, ::UnityEngine::Vector2& KNKFJFCFCLI)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + LBKDMJMCDHM_DFMNKECIAJA_1_OFFSET))(BGCJNJABNAB, MKEOBDGHOBH, OMLFJFPIEMO, GGJIJAFDGFM, KNKFJFCFCLI);
	}

	static ::UnityEngine::Vector2 PCFEKBNJPIG(::UnityEngine::RectTransform* JNLBPMKIFNK, ::UnityEngine::Vector3 BAECLPHLLHO, ::System::Boolean BAIGFAGIDMH, ::System::Single GCOKLLCEGHC, ::System::Single NIBJDMHMIGA, ::System::Single JCIAENKPEPI, ::System::Single PPDBMMMNNAL, ::UnityEngine::Camera* OMGJBKEILGG)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + LBKDMJMCDHM_PCFEKBNJPIG_OFFSET))(JNLBPMKIFNK, BAECLPHLLHO, BAIGFAGIDMH, GCOKLLCEGHC, NIBJDMHMIGA, JCIAENKPEPI, PPDBMMMNNAL, OMGJBKEILGG);
	}

	static ::System::Boolean EPFEKCIAGHA(::UnityEngine::Vector3 BAECLPHLLHO, ::System::Int32 EJFGMAHJMHK)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + LBKDMJMCDHM_EPFEKCIAGHA_OFFSET))(BAECLPHLLHO, EJFGMAHJMHK);
	}

	static ::UnityEngine::Vector3 NNOLNMHDKAE(::UnityEngine::Vector3 GKOEEJHILPG, ::System::Single LFHBFCDKMCL)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + LBKDMJMCDHM_NNOLNMHDKAE_OFFSET))(GKOEEJHILPG, LFHBFCDKMCL);
	}

	static ::System::Boolean JIOLBHIDFKJ_2(::UnityEngine::Vector3 BAECLPHLLHO, ::UnityEngine::Vector2& ILOHHLNGEHM)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + LBKDMJMCDHM_JIOLBHIDFKJ_2_OFFSET))(BAECLPHLLHO, ILOHHLNGEHM);
	}

	static ::System::Boolean JIOLBHIDFKJ_3(::GEIHCPAOKKK* OHPJHPEOFLD, ::System::Single CKIMKCEGHKD)
	{
		return ((::System::Boolean(*)(::GEIHCPAOKKK*, ::System::Single))((::PBYTE)hIl2Cpp + LBKDMJMCDHM_JIOLBHIDFKJ_3_OFFSET))(OHPJHPEOFLD, CKIMKCEGHKD);
	}

	static ::System::Boolean MDMMIGELPLA(::UnityEngine::Vector3 BAECLPHLLHO)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LBKDMJMCDHM_MDMMIGELPLA_OFFSET))(BAECLPHLLHO);
	}

	static ::System::Boolean JEALNOKFDJL(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LBKDMJMCDHM_JEALNOKFDJL_OFFSET))(KECKGDFIALJ);
	}
};
