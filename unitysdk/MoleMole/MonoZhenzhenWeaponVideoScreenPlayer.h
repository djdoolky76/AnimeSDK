#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ZhenzhenWeaponVideoSceneTag.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class ZhenzhenWeaponVideoConfig; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOZHENZHENWEAPONVIDEOSCREENPLAYER_AWAKE_OFFSET UNITYSDK_OFFSET(0x162EBBD0)
#define MOLEMOLE_MONOZHENZHENWEAPONVIDEOSCREENPLAYER_LAADIJONDNL_OFFSET UNITYSDK_OFFSET(0x162EB1E0)
#define MOLEMOLE_MONOZHENZHENWEAPONVIDEOSCREENPLAYER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x162EC1B0)
#define MOLEMOLE_MONOZHENZHENWEAPONVIDEOSCREENPLAYER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x162EBC20)
#define MOLEMOLE_MONOZHENZHENWEAPONVIDEOSCREENPLAYER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x162EC020)
#define MOLEMOLE_MONOZHENZHENWEAPONVIDEOSCREENPLAYER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x162EBE90)
#define MOLEMOLE_MONOZHENZHENWEAPONVIDEOSCREENPLAYER_SETACTIVESCENETAG_OFFSET UNITYSDK_OFFSET(0x162EB760)
#define MOLEMOLE_MONOZHENZHENWEAPONVIDEOSCREENPLAYER_SETLOOKATCAMERATRANSFORM_OFFSET UNITYSDK_OFFSET(0x162EB180)
#define MOLEMOLE_MONOZHENZHENWEAPONVIDEOSCREENPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x162EC200)

namespace MoleMole
{
	inline static constexpr unsigned int MonoZhenzhenWeaponVideoScreenPlayer_TypeDefinitionIndex = 40687;

	class MonoZhenzhenWeaponVideoScreenPlayer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::ZhenzhenWeaponVideoConfig*>* _configs; // 0x18
		::System::Single updateInterval; // 0x20
		::System::Single GPDCBHEPDGL; // 0x24
		::MoleMole::ZhenzhenWeaponVideoSceneTag GMLINAKHGEI; // 0x28
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::MoleMole::ZhenzhenWeaponVideoConfig*>* BEBDDMCHABH; // 0x30
		::System::Collections::Generic::List_1<::System::Object*>* IAGPGBLLFFJ; // 0x38
		::System::Boolean KIMAIHBLKOB; // 0x40
		::System::Byte _padding1[0x7];
		::UnityEngine::Transform* JBMDNNCIHFD; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOZHENZHENWEAPONVIDEOSCREENPLAYER__CTOR_OFFSET))(this);
		}

		::System::Void SetLookAtCameraTransform(::UnityEngine::Transform* PBELONKCAHN, ::System::Boolean OHDKNFMDDKA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOZHENZHENWEAPONVIDEOSCREENPLAYER_SETLOOKATCAMERATRANSFORM_OFFSET))(this, PBELONKCAHN, OHDKNFMDDKA);
		}

		::System::Void SetActiveSceneTag(::MoleMole::ZhenzhenWeaponVideoSceneTag EBMCJCGEEBM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ZhenzhenWeaponVideoSceneTag))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOZHENZHENWEAPONVIDEOSCREENPLAYER_SETACTIVESCENETAG_OFFSET))(this, EBMCJCGEEBM);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOZHENZHENWEAPONVIDEOSCREENPLAYER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOZHENZHENWEAPONVIDEOSCREENPLAYER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOZHENZHENWEAPONVIDEOSCREENPLAYER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOZHENZHENWEAPONVIDEOSCREENPLAYER_ONDISABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOZHENZHENWEAPONVIDEOSCREENPLAYER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void LAADIJONDNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOZHENZHENWEAPONVIDEOSCREENPLAYER_LAADIJONDNL_OFFSET))(this);
		}
	};
}
