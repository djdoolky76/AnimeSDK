#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/MiniGame/MiniGameManifest.h"
#include "unitysdk/JGLIFHIAIEH.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class DLIIKLOIMCJ;
class GFFNAMMLGEJ;
class KBDGKAJPALP;
class OPCHEGBNGMC;
class PDBNCMDLOGP;
namespace Foundation { class IRenderElement; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class SpriteRenderer; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class Volume; }

#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_ADJHPELCBLH_OFFSET UNITYSDK_OFFSET(0x1ED8EA80)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1ED8D520)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_CONVERTLOGICPOSTOLAYOUTPOS_OFFSET UNITYSDK_OFFSET(0x1ED8F030)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_CONVERTSCREENPOSTOLOGICPOS_OFFSET UNITYSDK_OFFSET(0x1ED8F0F0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_DESTROYTEMPLATEOBJECT_OFFSET UNITYSDK_OFFSET(0x1ED900C0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_DMMFDLGEANC_OFFSET UNITYSDK_OFFSET(0x1ED8E520)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1ED8D510)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_HBNLFNHMBHB_OFFSET UNITYSDK_OFFSET(0x1ED90670)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_HIHCNKOPOOG_OFFSET UNITYSDK_OFFSET(0x1ED8D930)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_INSTANTIATETEMPLATE_OFFSET UNITYSDK_OFFSET(0x1ED8F8F0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_KGOCIFPLBAI_OFFSET UNITYSDK_OFFSET(0x1ED8D760)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_LFCBNFKGBCI_OFFSET UNITYSDK_OFFSET(0x1ED90800)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_MHFHNDAFAOK_OFFSET UNITYSDK_OFFSET(0x1ED8EB10)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_NGKMOCMIJKB_OFFSET UNITYSDK_OFFSET(0x1ED8E4C0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_NMACJDFGOAF_OFFSET UNITYSDK_OFFSET(0x1ED907D0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_NPNHOFBKBFK_OFFSET UNITYSDK_OFFSET(0x1ED90680)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1ED8F590)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1ED90430)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_SETCONFIG_OFFSET UNITYSDK_OFFSET(0x1ED8E210)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_START_OFFSET UNITYSDK_OFFSET(0x1ED8D570)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1ED8E960)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED90470)

namespace MoleMole::Arcade::BallPit
{
	inline static constexpr unsigned int BallPitMapLayout_TypeDefinitionIndex = 95067;

	class BallPitMapLayout : public ::MoleMole::MiniGame::MiniGameManifest
	{
	public:
		static ::MoleMole::Arcade::BallPit::BallPitMapLayout** StaticGet__PHJGLHAAHOG_k__BackingField()
		{
			return (::MoleMole::Arcade::BallPit::BallPitMapLayout**)Il2CppClass::FromTypeDefinitionIndex(BallPitMapLayout_TypeDefinitionIndex)->GetStaticField(0x528D0);
		}
		// static const ::System::String* MBDFLKKOJMP; // 0x0
		::System::Single DefaultMapWidth; // 0x50
		::System::Single DefaultMapHeight; // 0x54
		::UnityEngine::GameObject* template_; // 0x58
		::UnityEngine::Transform* EffectRoot; // 0x60
		::UnityEngine::Transform* ObjectPoolRoot; // 0x68
		::UnityEngine::AnimationCurve* CollectItemCurve; // 0x70
		::UnityEngine::Transform* CrosshairTransform; // 0x78
		::UnityEngine::LineRenderer* AimLineRenderer; // 0x80
		::UnityEngine::SpriteRenderer* BGSprite; // 0x88
		::System::Single bgLoopSpeed; // 0x90
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::Queue_1<::UnityEngine::GameObject*>* IDALCPMPBBG; // 0x98
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* FMCNKLBECLJ; // 0xA0
		::System::Single FIBOPDFBADI; // 0xA8
		::System::Single BAAFMEMEFID; // 0xAC
		::System::Boolean HCOMOLONNIH; // 0xB0
		::System::Byte _padding1[0x7];
		::UnityEngine::Transform* KPIGIPIEBFG; // 0xB8
		::UnityEngine::Transform* ANHEIENNLBP; // 0xC0
		::UnityEngine::Transform* MOOOFIHHMKA; // 0xC8
		::System::Single TopPercent; // 0xD0
		::System::Single BottomPercent; // 0xD4
		::UnityEngine::Rendering::Volume* volume; // 0xD8
		::OPCHEGBNGMC* JPHDBAHBKBD; // 0xE0
		::PDBNCMDLOGP* ENNLMLJEDKO; // 0xE8
		::System::Single IAEMALHKKKL; // 0xF0
		::System::Byte _padding2[0x4];
		::UnityEngine::Transform* TipsRoot; // 0xF8
		::UnityEngine::GameObject* TipsTemplate; // 0x100
		::UnityEngine::AnimationCurve* TipsAnim; // 0x108
		::System::Single TipsAnimDuration; // 0x110
		::System::Single TipsAnimBaseScale; // 0x114
		::System::Collections::Generic::List_1<::Foundation::IRenderElement*>* NJBIHKEBBND; // 0x118
		::Foundation::AssetRequestHandle PHHDHIBOCKA; // 0x120
		::KBDGKAJPALP* GEEHGDABNJF; // 0x140
		::GFFNAMMLGEJ* LALAMGDBCCJ; // 0x148
		::DLIIKLOIMCJ* DICPEDGFHBH; // 0x150

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT__CTOR_OFFSET))(this);
		}

		static ::MoleMole::Arcade::BallPit::BallPitMapLayout* get_Instance()
		{
			return ((::MoleMole::Arcade::BallPit::BallPitMapLayout*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_GET_INSTANCE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_START_OFFSET))(this);
		}

		::System::Void SetConfig(::System::Int32 EHDMGHBOJJM, ::KBDGKAJPALP* GEEHGDABNJF, ::GFFNAMMLGEJ* LALAMGDBCCJ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::KBDGKAJPALP*, ::GFFNAMMLGEJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_SETCONFIG_OFFSET))(this, EHDMGHBOJJM, GEEHGDABNJF, LALAMGDBCCJ);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_UPDATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 ConvertLogicPosToLayoutPos(::JGLIFHIAIEH CKPGOKHECCH)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::JGLIFHIAIEH))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_CONVERTLOGICPOSTOLAYOUTPOS_OFFSET))(this, CKPGOKHECCH);
		}

		::JGLIFHIAIEH ConvertScreenPosToLogicPos(::UnityEngine::Vector2 ILOHHLNGEHM)
		{
			return ((::JGLIFHIAIEH(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_CONVERTSCREENPOSTOLOGICPOS_OFFSET))(this, ILOHHLNGEHM);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_ONDESTROY_OFFSET))(this);
		}

		::UnityEngine::GameObject* InstantiateTemplate()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_INSTANTIATETEMPLATE_OFFSET))(this);
		}

		::System::Void DestroyTemplateObject(::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_DESTROYTEMPLATEOBJECT_OFFSET))(this, NJOAJLDJCCJ);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_ONDRAWGIZMOS_OFFSET))(this);
		}

		::System::Void DMMFDLGEANC(::System::Int32 EHDMGHBOJJM, ::KBDGKAJPALP* GEEHGDABNJF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::KBDGKAJPALP*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_DMMFDLGEANC_OFFSET))(this, EHDMGHBOJJM, GEEHGDABNJF);
		}

		static ::System::Void HBNLFNHMBHB(::MoleMole::Arcade::BallPit::BallPitMapLayout* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::MoleMole::Arcade::BallPit::BallPitMapLayout*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_HBNLFNHMBHB_OFFSET))(EGEGIMGMJHN);
		}

		::System::Void MHFHNDAFAOK(::System::Single PBCAAADNEPK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_MHFHNDAFAOK_OFFSET))(this, PBCAAADNEPK);
		}

		::System::Void NPNHOFBKBFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_NPNHOFBKBFK_OFFSET))(this);
		}

		::System::Boolean ADJHPELCBLH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_ADJHPELCBLH_OFFSET))(this);
		}

		::System::Void NGKMOCMIJKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_NGKMOCMIJKB_OFFSET))(this);
		}

		::System::Void KGOCIFPLBAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_KGOCIFPLBAI_OFFSET))(this);
		}

		::UnityEngine::Vector3 NMACJDFGOAF(::JGLIFHIAIEH MIALFKCCCPI)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::JGLIFHIAIEH))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_NMACJDFGOAF_OFFSET))(this, MIALFKCCCPI);
		}

		::DLIIKLOIMCJ* LFCBNFKGBCI()
		{
			return ((::DLIIKLOIMCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_LFCBNFKGBCI_OFFSET))(this);
		}

		::System::Void HIHCNKOPOOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_HIHCNKOPOOG_OFFSET))(this);
		}
	};
}
