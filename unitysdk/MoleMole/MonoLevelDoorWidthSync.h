#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoLevelDoorWidthSync_JBNBBMOHAGF.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class MonoOneWayDoorSensor; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::AI { class NavMeshObstacle; }

#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_AAJBFLLHMNE_OFFSET UNITYSDK_OFFSET(0x12B6D890)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_AHCICMIOAHM_OFFSET UNITYSDK_OFFSET(0x12B6F550)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_APPLYPROJECTIONTRANSFORM_OFFSET UNITYSDK_OFFSET(0x12B6E460)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_AWAKE_OFFSET UNITYSDK_OFFSET(0x12B6D5D0)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_BHKMLGEOIMP_OFFSET UNITYSDK_OFFSET(0x12B70A20)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_ELCNIEKDLGH_OFFSET UNITYSDK_OFFSET(0x12B70BC0)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_EOEPPOOECOE_1_OFFSET UNITYSDK_OFFSET(0x12B70A60)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_EOEPPOOECOE_OFFSET UNITYSDK_OFFSET(0x12B6ED30)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_HLKONAJKNMM_OFFSET UNITYSDK_OFFSET(0x12B6FE70)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12B6FD40)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12B6E150)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12B6E100)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_PIHDOINKCKB_OFFSET UNITYSDK_OFFSET(0x12B70AB0)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_RUNTIMESYNCSIZE_1_OFFSET UNITYSDK_OFFSET(0x12B6FAC0)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_RUNTIMESYNCSIZE_OFFSET UNITYSDK_OFFSET(0x12B6F890)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_RUNTIMESYNCWIDTH_OFFSET UNITYSDK_OFFSET(0x12B6E220)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC_SETONEWAYDOORSENSORACTIVE_OFFSET UNITYSDK_OFFSET(0x12B6E1A0)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B70530)
#define MOLEMOLE_MONOLEVELDOORWIDTHSYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x12B70200)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLevelDoorWidthSync_TypeDefinitionIndex = 72686;

	class MonoLevelDoorWidthSync : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_FKIHFNJMGJL()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MonoLevelDoorWidthSync_TypeDefinitionIndex)->GetStaticField(0x4D850);
		}
		static ::System::String** StaticGet_KPIJCODADDN()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MonoLevelDoorWidthSync_TypeDefinitionIndex)->GetStaticField(0x4D858);
		}
		::System::Boolean autoSync; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single offsetLeftRight; // 0x1C
		::MoleMole::MonoOneWayDoorSensor* OneWayDoorSensor; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* EPIFNDNMIFC; // 0x28
		::System::Boolean JBJFINAFFKO; // 0x30
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::List_1<::System::Object*>* HGKANJHHLMF; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* NIPJICLPOKF; // 0x40
		::System::Single ALHBCHFNHPO; // 0x48
		::System::Single PIDHDFIKMLL; // 0x4C
		::System::Single JLBMMGKEONL; // 0x50
		::System::Byte _padding2[0x4];
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* IIKILFJMCMH; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* DLNCJKJMAMF; // 0x60
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* NFPJEIONOMO; // 0x68
		::UnityEngine::Vector3 NOKIFNNDGJO; // 0x70
		::System::Single KOLCDBCHLDM; // 0x7C
		::UnityEngine::AI::NavMeshObstacle* COLBCLJEOBJ; // 0x80
		::UnityEngine::BoxCollider* HFEKLDFFOOP; // 0x88
		::System::Boolean MJOIGGJBFBN; // 0x90
		::System::Boolean PHHFCFCABLL; // 0x91
		::System::Byte _padding3[0x2];
		::UnityEngine::Vector3 HFLBBLFIKDJ; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_ONDISABLE_OFFSET))(this);
		}

		::System::Void SetOneWayDoorSensorActive(::System::Boolean FBILHHBPEHD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_SETONEWAYDOORSENSORACTIVE_OFFSET))(this, FBILHHBPEHD);
		}

		::System::Void RuntimeSyncWidth(::System::Single JBGLCAFPGHK, ::System::Nullable_1<::System::Single> IMLCIDNKCBP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_RUNTIMESYNCWIDTH_OFFSET))(this, JBGLCAFPGHK, IMLCIDNKCBP);
		}

		::System::Void RuntimeSyncSize(::UnityEngine::Vector3 BEPMDFENBMH, ::System::Nullable_1<::System::Single> IMLCIDNKCBP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_RUNTIMESYNCSIZE_OFFSET))(this, BEPMDFENBMH, IMLCIDNKCBP);
		}

		::System::Void RuntimeSyncSize_1(::System::Nullable_1<::System::Single> JBGLCAFPGHK, ::System::Nullable_1<::System::Single> KKAMDFNMMJH, ::System::Nullable_1<::System::Single> EFEODALHHOI, ::System::Nullable_1<::System::Single> IMLCIDNKCBP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>, ::System::Nullable_1<::System::Single>, ::System::Nullable_1<::System::Single>, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_RUNTIMESYNCSIZE_1_OFFSET))(this, JBGLCAFPGHK, KKAMDFNMMJH, EFEODALHHOI, IMLCIDNKCBP);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_ONDESTROY_OFFSET))(this);
		}

		::System::Void ApplyProjectionTransform(::UnityEngine::BoxCollider* HFEKLDFFOOP, ::MoleMole::MonoLevelDoorWidthSync_JBNBBMOHAGF BHFAGMPDIGJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::BoxCollider*, ::MoleMole::MonoLevelDoorWidthSync_JBNBBMOHAGF))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_APPLYPROJECTIONTRANSFORM_OFFSET))(this, HFEKLDFFOOP, BHFAGMPDIGJ);
		}

		::System::Void BHKMLGEOIMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_BHKMLGEOIMP_OFFSET))(this);
		}

		::System::Void AAJBFLLHMNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_AAJBFLLHMNE_OFFSET))(this);
		}

		::System::Void PIHDOINKCKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_PIHDOINKCKB_OFFSET))(this);
		}

		::System::Boolean HLKONAJKNMM(::Il2CppArray<::UnityEngine::Material*>* JFAJHLHHHPM)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_HLKONAJKNMM_OFFSET))(this, JFAJHLHHHPM);
		}

		::System::Void AHCICMIOAHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_AHCICMIOAHM_OFFSET))(this);
		}

		::System::Void EOEPPOOECOE(::System::Single BOGPAHGJOJK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_EOEPPOOECOE_OFFSET))(this, BOGPAHGJOJK);
		}

		::System::Void EOEPPOOECOE_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_EOEPPOOECOE_1_OFFSET))(this);
		}

		::System::Void ELCNIEKDLGH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELDOORWIDTHSYNC_ELCNIEKDLGH_OFFSET))(this);
		}
	};
}
