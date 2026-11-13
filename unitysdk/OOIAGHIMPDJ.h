#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGJEMEHMBNL.h"
#include "unitysdk/OOIAGHIMPDJ_ClimbMoveResult.h"
#include "unitysdk/OOIAGHIMPDJ_ClimbSegmentPassType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
class NAOKFLDEDBJ;
namespace RPG::GameCore { class ClimbableLinearWithDetectProjectileData; }
namespace UnityEngine { class Collider; }

#define OOIAGHIMPDJ_BMNCKHEEANA_OFFSET UNITYSDK_OFFSET(0x196A6980)
#define OOIAGHIMPDJ_BNHPLFAGCBD_OFFSET UNITYSDK_OFFSET(0x196A5700)
#define OOIAGHIMPDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x196A4420)
#define OOIAGHIMPDJ_EHIAMFDBILH_OFFSET UNITYSDK_OFFSET(0x196A5F80)
#define OOIAGHIMPDJ_EIPJMMHJLPG_OFFSET UNITYSDK_OFFSET(0x196A58C0)
#define OOIAGHIMPDJ_ELACJIPGBHP_OFFSET UNITYSDK_OFFSET(0x196A5DE0)
#define OOIAGHIMPDJ_FIOGIHDLLEN_OFFSET UNITYSDK_OFFSET(0x196A6790)
#define OOIAGHIMPDJ_FJJMDBLCNJO_OFFSET UNITYSDK_OFFSET(0x196A53A0)
#define OOIAGHIMPDJ_GET_FIRSTFRAMEOCCLUSION_OFFSET UNITYSDK_OFFSET(0x196A6A80)
#define OOIAGHIMPDJ_GOLCDGNLEKL_OFFSET UNITYSDK_OFFSET(0x196A48F0)
#define OOIAGHIMPDJ_HKKJFIOAOND_OFFSET UNITYSDK_OFFSET(0x196A68C0)
#define OOIAGHIMPDJ_INFNEGOPONA_OFFSET UNITYSDK_OFFSET(0x196A54E0)
#define OOIAGHIMPDJ_KCABGFGCFAB_OFFSET UNITYSDK_OFFSET(0x196A51D0)
#define OOIAGHIMPDJ_KFLNENIGDIN_OFFSET UNITYSDK_OFFSET(0x196A46E0)
#define OOIAGHIMPDJ_MCPIMGOKFDH_OFFSET UNITYSDK_OFFSET(0x196A5D30)
#define OOIAGHIMPDJ_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x196A4480)
#define OOIAGHIMPDJ_MMFCAFELCCD_OFFSET UNITYSDK_OFFSET(0x196A4E90)
#define OOIAGHIMPDJ_NBBPPODOOOC_OFFSET UNITYSDK_OFFSET(0x196A69E0)
#define OOIAGHIMPDJ_NJMCKHHNAND_OFFSET UNITYSDK_OFFSET(0x196A6860)
#define OOIAGHIMPDJ_OAJCCIHGIPG_OFFSET UNITYSDK_OFFSET(0x196A6550)
#define OOIAGHIMPDJ_PAGKGLHOCMN_OFFSET UNITYSDK_OFFSET(0x196A5240)
#define OOIAGHIMPDJ_PGKPGNJJMMB_OFFSET UNITYSDK_OFFSET(0x196A4800)
#define OOIAGHIMPDJ_SET_FIRSTFRAMEOCCLUSION_OFFSET UNITYSDK_OFFSET(0x196A6A90)

inline static constexpr unsigned int OOIAGHIMPDJ_TypeDefinitionIndex = 55906;

	class OOIAGHIMPDJ : public ::GGJEMEHMBNL
	{
	public:
		::RPG::GameCore::ClimbableLinearWithDetectProjectileData* FPGPHIEOMFL; // 0x48
		::UnityEngine::Collider* NDAFFIDEPKJ; // 0x50
		::System::Single GNIPNKGBDNO; // 0x58
		::System::Single DHKMOEJJJGJ; // 0x5C
		::System::Single LMCBEIHGLDF; // 0x60
		::UnityEngine::Vector3 LOLDFFJAKEB; // 0x64
		::UnityEngine::Vector3 DNPILOMHEFL; // 0x70
		::System::Single NOPMHDHPOOH; // 0x7C
		::UnityEngine::Vector3 JCACOMLOPAB; // 0x80
		::System::Boolean FOHBHIHFLMD; // 0x8C
		::System::Boolean JENGAMCDOPC; // 0x8D
		::System::Boolean _FirstFrameOcclusion_k__BackingField; // 0x8E
		::System::Boolean OGNJMLNMEMH; // 0x8F
		// static const ::System::Object CDDEJJJPJMK; // 0x0
		// static const ::System::Object OGCGNELOMGM; // 0x0
		// static const ::System::Object OKDALACEEMK; // 0x0
		// static const ::System::Object FFANMOCKNNG; // 0x0
		// static const ::System::Object FOGOLBMLLJN; // 0x0
		// static const ::System::Object MLPPPACHEAL; // 0x0
		// static const ::System::Object KDIMMLNHOFH; // 0x0
		// static const ::System::Object DBPAACNIKIJ; // 0x0
		// static const ::System::Object IFJOIDKIPGD; // 0x0
		// static const ::System::Object AGHGNAOIAHD; // 0x0
		// static const ::System::Object NKGFHFIOOPH; // 0x0
		// static const ::System::Object LKGOOKAFGJP; // 0x0
		// static const ::System::Object AEHNGHBDLDK; // 0x0
		// static const ::System::Object IKJOMJLFKEF; // 0x0
		// static const ::System::Object OBENKPKNOLP; // 0x0
		// static const ::System::Object JLMIKICFILL; // 0x0
		// static const ::System::Object PKNOOHGAEOG; // 0x0
		::System::Void _ctor(::NAOKFLDEDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAOKFLDEDBJ*))((::PBYTE)hIl2Cpp + OOIAGHIMPDJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIAGHIMPDJ_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void KFLNENIGDIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIAGHIMPDJ_KFLNENIGDIN_OFFSET))(this);
		}

		::System::Void PGKPGNJJMMB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OOIAGHIMPDJ_PGKPGNJJMMB_OFFSET))(this, a1);
		}

		::System::Void GOLCDGNLEKL(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + OOIAGHIMPDJ_GOLCDGNLEKL_OFFSET))(this, a1, a2);
		}

		::OOIAGHIMPDJ_ClimbMoveResult MMFCAFELCCD(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit a3, ::System::Boolean a4, ::System::Single a5)
		{
			return ((::OOIAGHIMPDJ_ClimbMoveResult(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + OOIAGHIMPDJ_MMFCAFELCCD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean PAGKGLHOCMN(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + OOIAGHIMPDJ_PAGKGLHOCMN_OFFSET))(this, a1, a2);
		}

		::System::Boolean FJJMDBLCNJO(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OOIAGHIMPDJ_FJJMDBLCNJO_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void ELACJIPGBHP(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OOIAGHIMPDJ_ELACJIPGBHP_OFFSET))(this, a1, a2);
		}

		::System::Boolean MCPIMGOKFDH(::UnityEngine::Vector3 a1, ::UnityEngine::RaycastHit a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + OOIAGHIMPDJ_MCPIMGOKFDH_OFFSET))(this, a1, a2);
		}

		::System::Boolean EHIAMFDBILH(::UnityEngine::Vector3 a1, ::UnityEngine::RaycastHit a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + OOIAGHIMPDJ_EHIAMFDBILH_OFFSET))(this, a1, a2);
		}

		::OOIAGHIMPDJ_ClimbSegmentPassType EIPJMMHJLPG(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::RaycastHit a4)
		{
			return ((::OOIAGHIMPDJ_ClimbSegmentPassType(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + OOIAGHIMPDJ_EIPJMMHJLPG_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 INFNEGOPONA(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OOIAGHIMPDJ_INFNEGOPONA_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 BNHPLFAGCBD(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + OOIAGHIMPDJ_BNHPLFAGCBD_OFFSET))(this, a1, a2);
		}

		::System::Boolean FIOGIHDLLEN(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + OOIAGHIMPDJ_FIOGIHDLLEN_OFFSET))(this, a1);
		}

		::System::Boolean NJMCKHHNAND(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + OOIAGHIMPDJ_NJMCKHHNAND_OFFSET))(this, a1);
		}

		::System::Void KCABGFGCFAB(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + OOIAGHIMPDJ_KCABGFGCFAB_OFFSET))(this, a1);
		}

		static ::System::Boolean HKKJFIOAOND(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + OOIAGHIMPDJ_HKKJFIOAOND_OFFSET))(a1);
		}

		::System::Boolean OAJCCIHGIPG(::UnityEngine::RaycastHit a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + OOIAGHIMPDJ_OAJCCIHGIPG_OFFSET))(this, a1);
		}

		static ::System::Boolean BMNCKHEEANA(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + OOIAGHIMPDJ_BMNCKHEEANA_OFFSET))(a1);
		}

		static ::System::Single NBBPPODOOOC(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OOIAGHIMPDJ_NBBPPODOOOC_OFFSET))(a1);
		}

		::System::Boolean get_FirstFrameOcclusion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIAGHIMPDJ_GET_FIRSTFRAMEOCCLUSION_OFFSET))(this);
		}

		::System::Void set_FirstFrameOcclusion(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OOIAGHIMPDJ_SET_FIRSTFRAMEOCCLUSION_OFFSET))(this, a1);
		}

	};
