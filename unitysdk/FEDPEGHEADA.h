#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EIJCHJAFBNO;
class FKNEEIEBIMF;
namespace MoleMole { class MonoEffectPluginHitWallBullet; }
namespace MoleMole { class MonoEffectPluginHitWallScratch; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define FEDPEGHEADA_AJOACHCIKDB_OFFSET UNITYSDK_OFFSET(0x14199EA0)
#define FEDPEGHEADA_ENCKBBGPLIA_OFFSET UNITYSDK_OFFSET(0x141995B0)
#define FEDPEGHEADA_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x14199400)
#define FEDPEGHEADA_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x14199850)
#define FEDPEGHEADA_LCOKLBBNLDB_OFFSET UNITYSDK_OFFSET(0x141999B0)
#define FEDPEGHEADA_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x141997C0)
#define FEDPEGHEADA_NAIGKDCICGE_OFFSET UNITYSDK_OFFSET(0x14199C70)
#define FEDPEGHEADA_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x14199130)
#define FEDPEGHEADA_PEIFNEPPHDP_OFFSET UNITYSDK_OFFSET(0x14199A40)
#define FEDPEGHEADA__CCTOR_OFFSET UNITYSDK_OFFSET(0x14199450)
#define FEDPEGHEADA__CTOR_OFFSET UNITYSDK_OFFSET(0x141994D0)

inline static constexpr unsigned int FEDPEGHEADA_TypeDefinitionIndex = 53047;

class FEDPEGHEADA : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x6F; // 0x0
	::MoleMole::MonoEffectPluginHitWallScratch* LEMAAICLAJE; // 0x48
	::System::Collections::Generic::List_1<::EIJCHJAFBNO*>* DCLALHNBJNF; // 0x50
	::MoleMole::MonoEffectPluginHitWallBullet* JGGLAPGEACA; // 0x58
	::System::Collections::Generic::List_1<::FKNEEIEBIMF*>* FMNPICJKMEF; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEDPEGHEADA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDPEGHEADA__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDPEGHEADA_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDPEGHEADA_GETCLASSID_OFFSET))(this);
	}

	::System::Void ENCKBBGPLIA(::MoleMole::MonoEffectPluginHitWallBullet* LDNCGMNHANO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginHitWallBullet*))((::PBYTE)hIl2Cpp + FEDPEGHEADA_ENCKBBGPLIA_OFFSET))(this, LDNCGMNHANO);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDPEGHEADA_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::FEDPEGHEADA* JFDOOELFAOA()
	{
		return ((::FEDPEGHEADA*(*)())((::PBYTE)hIl2Cpp + FEDPEGHEADA_JFDOOELFAOA_OFFSET))();
	}

	static ::System::Void LCOKLBBNLDB(::UnityEngine::Vector3 GIAEPMKCBIB, ::UnityEngine::Vector3 DOBFFIICAII, ::UnityEngine::Color CBLGCIFLMKL, ::System::Single MKBCMHIAMHF)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + FEDPEGHEADA_LCOKLBBNLDB_OFFSET))(GIAEPMKCBIB, DOBFFIICAII, CBLGCIFLMKL, MKBCMHIAMHF);
	}

	::System::Void PEIFNEPPHDP(::MoleMole::Battle::Entity* BFDPPMDEOFF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FEDPEGHEADA_PEIFNEPPHDP_OFFSET))(this, BFDPPMDEOFF);
	}

	::System::Void NAIGKDCICGE(::MoleMole::MonoEffectPluginHitWallScratch* LDNCGMNHANO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginHitWallScratch*))((::PBYTE)hIl2Cpp + FEDPEGHEADA_NAIGKDCICGE_OFFSET))(this, LDNCGMNHANO);
	}

	static ::System::Void AJOACHCIKDB(::UnityEngine::Vector3 CKPGOKHECCH, ::UnityEngine::Vector3 CFJFMMGPGKE, ::UnityEngine::Vector3 IPPHHNPKAFP, ::UnityEngine::GameObject* LOINAJINDBL)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FEDPEGHEADA_AJOACHCIKDB_OFFSET))(CKPGOKHECCH, CFJFMMGPGKE, IPPHHNPKAFP, LOINAJINDBL);
	}
};
