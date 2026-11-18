#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CharacterDamageDecalType.h"
#include "unitysdk/MoleMole/Config/RayByAxis.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/MoleMole/Battle/DebugColor.h"
#include "unitysdk/MoleMole/Config/DamageDecalData.h"
#include "unitysdk/MoleMole/Config/Vector3Range.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AEMCAOEICDG;
class IDPGPICONFN;
namespace MoleMole { class MonoEffectPluginHitWall; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class HitWallCameraShakeConfig; }
namespace MoleMole::Config { class RaycastHitWallEffectConfig; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define LIADPOMIFJK_AMCGGDEIJCK_OFFSET UNITYSDK_OFFSET(0x16C58760)
#define LIADPOMIFJK_ANIMIKPOSTUPDATE_OFFSET UNITYSDK_OFFSET(0x16C54D00)
#define LIADPOMIFJK_BPEKOICPPLM_OFFSET UNITYSDK_OFFSET(0x16C55120)
#define LIADPOMIFJK_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x16C54910)
#define LIADPOMIFJK_EEEMDMHDMCJ_OFFSET UNITYSDK_OFFSET(0x16C572A0)
#define LIADPOMIFJK_GKGLANPBFLA_OFFSET UNITYSDK_OFFSET(0x16C57F20)
#define LIADPOMIFJK_HACNOPKMIAP_OFFSET UNITYSDK_OFFSET(0x16C586D0)
#define LIADPOMIFJK_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x16C58E50)
#define LIADPOMIFJK_JGDMEECGKEE_OFFSET UNITYSDK_OFFSET(0x16C587B0)
#define LIADPOMIFJK_JHOCEBENOHJ_OFFSET UNITYSDK_OFFSET(0x16C58B20)
#define LIADPOMIFJK_JPOLBPCHLHK_OFFSET UNITYSDK_OFFSET(0x16C57390)
#define LIADPOMIFJK_KFBICKLKMPD_OFFSET UNITYSDK_OFFSET(0x16C55070)
#define LIADPOMIFJK_KJDGOBFODKH_OFFSET UNITYSDK_OFFSET(0x16C56F10)
#define LIADPOMIFJK_KMBIHCKLIHK_OFFSET UNITYSDK_OFFSET(0x16C58C30)
#define LIADPOMIFJK_LCOKLBBNLDB_OFFSET UNITYSDK_OFFSET(0x16C57300)
#define LIADPOMIFJK_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x16C573E0)
#define LIADPOMIFJK_OIANHLAPCDC_OFFSET UNITYSDK_OFFSET(0x16C58550)
#define LIADPOMIFJK_PDIBDEPKMEB_OFFSET UNITYSDK_OFFSET(0x16C57470)
#define LIADPOMIFJK_PIJGCIGPEFL_OFFSET UNITYSDK_OFFSET(0x16C551A0)
#define LIADPOMIFJK_PKONFEHDEKH_OFFSET UNITYSDK_OFFSET(0x16C56790)
#define LIADPOMIFJK__CTOR_OFFSET UNITYSDK_OFFSET(0x16C55020)

inline static constexpr unsigned int LIADPOMIFJK_TypeDefinitionIndex = 75095;

class LIADPOMIFJK : public ::OAOOLPCNHKA
{
public:
	static ::Nap::NapECS::EcsFilter** StaticGet_LEOJEJONODA()
	{
		return (::Nap::NapECS::EcsFilter**)Il2CppClass::FromTypeDefinitionIndex(LIADPOMIFJK_TypeDefinitionIndex)->GetStaticField(0x3BB20);
	}
	::Nap::NapECS::EcsFilter* KANNLBJLNNF; // 0x20
	::Nap::NapECS::EcsFilter* PLDKFEINCPH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIADPOMIFJK__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + LIADPOMIFJK_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void AnimIKPostUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIADPOMIFJK_ANIMIKPOSTUPDATE_OFFSET))(this);
	}

	static ::System::Boolean KFBICKLKMPD(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LIADPOMIFJK_KFBICKLKMPD_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean BPEKOICPPLM(::MoleMole::Battle::Entity* KECKGDFIALJ, ::UnityEngine::Vector3 ICBBABPNLOC, ::MoleMole::Config::RaycastHitWallEffectConfig* OAIDHFOBKKO, ::System::Action_1<::MoleMole::Battle::Entity*>* KMEINEAGEOD, ::UnityEngine::RaycastHit& FEFNENBAMKL)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::MoleMole::Config::RaycastHitWallEffectConfig*, ::System::Action_1<::MoleMole::Battle::Entity*>*, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + LIADPOMIFJK_BPEKOICPPLM_OFFSET))(KECKGDFIALJ, ICBBABPNLOC, OAIDHFOBKKO, KMEINEAGEOD, FEFNENBAMKL);
	}

	static ::System::Void PIJGCIGPEFL(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MoleMole::Config::HitWallCameraShakeConfig* OFFLFONPCLJ, ::MoleMole::Config::RaycastHitWallEffectConfig* OAIDHFOBKKO, ::System::Action_1<::MoleMole::Battle::Entity*>* KMEINEAGEOD, ::MoleMole::Battle::Entity* FGGJKOMANIO, ::System::Boolean JFELEBNEBBE, ::MoleMole::Battle::DebugColor NLNMGLGMIIA, ::MoleMole::Config::DamageDecalData KGOFPBCAJJJ, ::Il2CppArray<::UnityEngine::RaycastHit>* OFPMHAEEHFA)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::HitWallCameraShakeConfig*, ::MoleMole::Config::RaycastHitWallEffectConfig*, ::System::Action_1<::MoleMole::Battle::Entity*>*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::MoleMole::Battle::DebugColor, ::MoleMole::Config::DamageDecalData, ::Il2CppArray<::UnityEngine::RaycastHit>*))((::PBYTE)hIl2Cpp + LIADPOMIFJK_PIJGCIGPEFL_OFFSET))(KECKGDFIALJ, OFFLFONPCLJ, OAIDHFOBKKO, KMEINEAGEOD, FGGJKOMANIO, JFELEBNEBBE, NLNMGLGMIIA, KGOFPBCAJJJ, OFPMHAEEHFA);
	}

	static ::System::Boolean EEEMDMHDMCJ(::MoleMole::MonoEffectPluginHitWall* CPDCAEONMLI)
	{
		return ((::System::Boolean(*)(::MoleMole::MonoEffectPluginHitWall*))((::PBYTE)hIl2Cpp + LIADPOMIFJK_EEEMDMHDMCJ_OFFSET))(CPDCAEONMLI);
	}

	static ::System::Void LCOKLBBNLDB(::UnityEngine::Vector3 GIAEPMKCBIB, ::UnityEngine::Vector3 DOBFFIICAII, ::UnityEngine::Color CBLGCIFLMKL, ::System::Single MKBCMHIAMHF)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + LIADPOMIFJK_LCOKLBBNLDB_OFFSET))(GIAEPMKCBIB, DOBFFIICAII, CBLGCIFLMKL, MKBCMHIAMHF);
	}

	static ::System::Void JPOLBPCHLHK()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIADPOMIFJK_JPOLBPCHLHK_OFFSET))();
	}

	static ::System::Void KJDGOBFODKH(::System::String* ALPCMBPFLJG, ::MoleMole::Config::HitWallCameraShakeConfig* HOOCHMFHPPO, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::System::String* FLEIJJGMHBB)
	{
		return ((::System::Void(*)(::System::String*, ::MoleMole::Config::HitWallCameraShakeConfig*, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + LIADPOMIFJK_KJDGOBFODKH_OFFSET))(ALPCMBPFLJG, HOOCHMFHPPO, NGODDCIOJDP, FLEIJJGMHBB);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + LIADPOMIFJK_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Boolean PDIBDEPKMEB(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MoleMole::Config::RaycastHitWallEffectConfig* OAIDHFOBKKO, ::UnityEngine::Transform*& JDIDMIDLHKJ, ::UnityEngine::Transform*& JKJJHACLPOM)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::RaycastHitWallEffectConfig*, ::UnityEngine::Transform*&, ::UnityEngine::Transform*&))((::PBYTE)hIl2Cpp + LIADPOMIFJK_PDIBDEPKMEB_OFFSET))(KECKGDFIALJ, OAIDHFOBKKO, JDIDMIDLHKJ, JKJJHACLPOM);
	}

	static ::System::Void GKGLANPBFLA(::IDPGPICONFN* LILDOJLPMHK, ::AEMCAOEICDG* JPHJGLCFFLH)
	{
		return ((::System::Void(*)(::IDPGPICONFN*, ::AEMCAOEICDG*))((::PBYTE)hIl2Cpp + LIADPOMIFJK_GKGLANPBFLA_OFFSET))(LILDOJLPMHK, JPHJGLCFFLH);
	}

	::System::Void HACNOPKMIAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIADPOMIFJK_HACNOPKMIAP_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 AMCGGDEIJCK(::MoleMole::Config::RayByAxis KANJDCAECLM)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::RayByAxis))((::PBYTE)hIl2Cpp + LIADPOMIFJK_AMCGGDEIJCK_OFFSET))(KANJDCAECLM);
	}

	static ::System::Boolean PKONFEHDEKH(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MoleMole::Config::HitWallCameraShakeConfig* OFFLFONPCLJ, ::MoleMole::Config::RaycastHitWallEffectConfig* OAIDHFOBKKO, ::UnityEngine::RaycastHit& FEFNENBAMKL, ::UnityEngine::Vector3& NHIDFMDCDOH, ::UnityEngine::Vector3& JMDBOOGALDB, ::MoleMole::Battle::DebugColor NLNMGLGMIIA, ::MoleMole::Config::CharacterDamageDecalType BDNDMEMMOFO, ::Il2CppArray<::UnityEngine::RaycastHit>* OFPMHAEEHFA)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::HitWallCameraShakeConfig*, ::MoleMole::Config::RaycastHitWallEffectConfig*, ::UnityEngine::RaycastHit&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::MoleMole::Battle::DebugColor, ::MoleMole::Config::CharacterDamageDecalType, ::Il2CppArray<::UnityEngine::RaycastHit>*))((::PBYTE)hIl2Cpp + LIADPOMIFJK_PKONFEHDEKH_OFFSET))(KECKGDFIALJ, OFFLFONPCLJ, OAIDHFOBKKO, FEFNENBAMKL, NHIDFMDCDOH, JMDBOOGALDB, NLNMGLGMIIA, BDNDMEMMOFO, OFPMHAEEHFA);
	}

	static ::System::Void OIANHLAPCDC(::MoleMole::MonoEffectPluginHitWall* CPDCAEONMLI, ::UnityEngine::RaycastHit GIAEPMKCBIB, ::UnityEngine::RaycastHit GCLICJIGHFF, ::UnityEngine::Vector3 LBKMCOKBJEA, ::MoleMole::Config::Vector3Range BDIJCBJPENE)
	{
		return ((::System::Void(*)(::MoleMole::MonoEffectPluginHitWall*, ::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit, ::UnityEngine::Vector3, ::MoleMole::Config::Vector3Range))((::PBYTE)hIl2Cpp + LIADPOMIFJK_OIANHLAPCDC_OFFSET))(CPDCAEONMLI, GIAEPMKCBIB, GCLICJIGHFF, LBKMCOKBJEA, BDIJCBJPENE);
	}

	static ::System::Void JHOCEBENOHJ(::System::Action_2<::System::UInt32, ::System::Single>* JIEAEEEGBHC)
	{
		return ((::System::Void(*)(::System::Action_2<::System::UInt32, ::System::Single>*))((::PBYTE)hIl2Cpp + LIADPOMIFJK_JHOCEBENOHJ_OFFSET))(JIEAEEEGBHC);
	}

	static ::System::Void KMBIHCKLIHK(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + LIADPOMIFJK_KMBIHCKLIHK_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean JGDMEECGKEE(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MoleMole::Config::RaycastHitWallEffectConfig* FDGDGPIMHGD, ::UnityEngine::Vector3& GIAEPMKCBIB, ::UnityEngine::Vector3& DOBFFIICAII)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::RaycastHitWallEffectConfig*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + LIADPOMIFJK_JGDMEECGKEE_OFFSET))(KECKGDFIALJ, FDGDGPIMHGD, GIAEPMKCBIB, DOBFFIICAII);
	}

	static ::System::Void HMLGKBFFNHI(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LIADPOMIFJK_HMLGKBFFNHI_OFFSET))(NJNCGJLHLKC);
	}
};
