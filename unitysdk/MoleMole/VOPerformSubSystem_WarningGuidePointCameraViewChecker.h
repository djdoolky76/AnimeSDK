#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BJJNEGIJGNN;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_VOPERFORMSUBSYSTEM_WARNINGGUIDEPOINTCAMERAVIEWCHECKER_GET_ISINCAMERAVIEW_OFFSET UNITYSDK_OFFSET(0x18C3E250)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_WARNINGGUIDEPOINTCAMERAVIEWCHECKER_GET_SHOULDCONTINUE_OFFSET UNITYSDK_OFFSET(0x18C3E240)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_WARNINGGUIDEPOINTCAMERAVIEWCHECKER_ISBINDTOTHISENTITY_OFFSET UNITYSDK_OFFSET(0x18C3E7A0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_WARNINGGUIDEPOINTCAMERAVIEWCHECKER_MARKSTOP_OFFSET UNITYSDK_OFFSET(0x18C3E850)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_WARNINGGUIDEPOINTCAMERAVIEWCHECKER_S_INIT_OFFSET UNITYSDK_OFFSET(0x18C3E1B0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_WARNINGGUIDEPOINTCAMERAVIEWCHECKER_UPDATEINCAMERAVIEW_OFFSET UNITYSDK_OFFSET(0x18C3E270)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_WARNINGGUIDEPOINTCAMERAVIEWCHECKER_UPDATETARGETENTITYID_OFFSET UNITYSDK_OFFSET(0x18C3E800)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_WARNINGGUIDEPOINTCAMERAVIEWCHECKER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C3E890)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_WARNINGGUIDEPOINTCAMERAVIEWCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0x18C3E260)

namespace MoleMole
{
	inline static constexpr unsigned int VOPerformSubSystem_WarningGuidePointCameraViewChecker_TypeDefinitionIndex = 76202;

	class VOPerformSubSystem_WarningGuidePointCameraViewChecker : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet_s_forceShowDistance()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(VOPerformSubSystem_WarningGuidePointCameraViewChecker_TypeDefinitionIndex)->GetStaticField(0x115D0);
		}
		// static const ::System::Single OCCLUSION_CHECK_INTERVAL; // 0x0
		::BJJNEGIJGNN* _guideUIParam; // 0x10
		::System::UInt32 _entityId; // 0x18
		::System::Single _lastOcclusionCheckTime; // 0x1C
		::System::Boolean _cachedNotOccluded; // 0x20
		::System::Boolean _shouldContinue; // 0x21
		::System::Boolean _isInCameraView; // 0x22

		::System::Void _ctor(::System::UInt32 entityId, ::BJJNEGIJGNN* guideUIParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::BJJNEGIJGNN*))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_WARNINGGUIDEPOINTCAMERAVIEWCHECKER__CTOR_OFFSET))(this, entityId, guideUIParam);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_WARNINGGUIDEPOINTCAMERAVIEWCHECKER__CCTOR_OFFSET))();
		}

		static ::System::Void S_Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_WARNINGGUIDEPOINTCAMERAVIEWCHECKER_S_INIT_OFFSET))();
		}

		::System::Boolean get_ShouldContinue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_WARNINGGUIDEPOINTCAMERAVIEWCHECKER_GET_SHOULDCONTINUE_OFFSET))(this);
		}

		::System::Boolean get_IsInCameraView()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_WARNINGGUIDEPOINTCAMERAVIEWCHECKER_GET_ISINCAMERAVIEW_OFFSET))(this);
		}

		::System::Void UpdateInCameraView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_WARNINGGUIDEPOINTCAMERAVIEWCHECKER_UPDATEINCAMERAVIEW_OFFSET))(this);
		}

		::System::Boolean IsBindToThisEntity(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_WARNINGGUIDEPOINTCAMERAVIEWCHECKER_ISBINDTOTHISENTITY_OFFSET))(this, entity);
		}

		::System::Void UpdateTargetEntityID(::System::UInt32 newEntityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_WARNINGGUIDEPOINTCAMERAVIEWCHECKER_UPDATETARGETENTITYID_OFFSET))(this, newEntityID);
		}

		::System::Void MarkStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_WARNINGGUIDEPOINTCAMERAVIEWCHECKER_MARKSTOP_OFFSET))(this);
		}
	};
}
