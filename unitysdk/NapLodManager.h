#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NapLodController_NapLODLevel.h"

class NapLodController;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MdbComponent; }

#define NAPLODMANAGER_APPLYAVATARBODYLEVEL_OFFSET UNITYSDK_OFFSET(0x1365B210)
#define NAPLODMANAGER_APPLYAVATARFACELEVEL_OFFSET UNITYSDK_OFFSET(0x1365B4C0)
#define NAPLODMANAGER_GET_AVATARBODYLEVEL_OFFSET UNITYSDK_OFFSET(0x1365B190)
#define NAPLODMANAGER_GET_AVATARFACELEVEL_OFFSET UNITYSDK_OFFSET(0x1365B440)
#define NAPLODMANAGER_REGISTERAVATARLODCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1365B610)
#define NAPLODMANAGER_SET_AVATARBODYLEVEL_OFFSET UNITYSDK_OFFSET(0x1365B1A0)
#define NAPLODMANAGER_SET_AVATARFACELEVEL_OFFSET UNITYSDK_OFFSET(0x1365B450)
#define NAPLODMANAGER_UNREGISTERAVATARLODCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1365B830)
#define NAPLODMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1365BA00)

inline static constexpr unsigned int NapLodManager_TypeDefinitionIndex = 62482;

class NapLodManager
{
public:
	::System::Collections::Generic::List_1<::NapLodController*>* allAvatarBodyControllers; // 0x10
	::System::Collections::Generic::List_1<::NapLodController*>* allAvatarFaceControllers; // 0x18
	::System::Collections::Generic::HashSet_1<::UnityEngine::MdbComponent*>* allMdb; // 0x20
	::NapLodController_NapLODLevel avatarFaceLevel; // 0x28
	::NapLodController_NapLODLevel avatarBodyLevel; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODMANAGER__CTOR_OFFSET))(this);
	}

	::NapLodController_NapLODLevel get_AvatarBodyLevel()
	{
		return ((::NapLodController_NapLODLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODMANAGER_GET_AVATARBODYLEVEL_OFFSET))(this);
	}

	::System::Void set_AvatarBodyLevel(::NapLodController_NapLODLevel value)
	{
		return ((::System::Void(*)(::PVOID, ::NapLodController_NapLODLevel))((::PBYTE)hIl2Cpp + NAPLODMANAGER_SET_AVATARBODYLEVEL_OFFSET))(this, value);
	}

	::NapLodController_NapLODLevel get_AvatarFaceLevel()
	{
		return ((::NapLodController_NapLODLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODMANAGER_GET_AVATARFACELEVEL_OFFSET))(this);
	}

	::System::Void set_AvatarFaceLevel(::NapLodController_NapLODLevel value)
	{
		return ((::System::Void(*)(::PVOID, ::NapLodController_NapLODLevel))((::PBYTE)hIl2Cpp + NAPLODMANAGER_SET_AVATARFACELEVEL_OFFSET))(this, value);
	}

	::System::Void ApplyAvatarBodyLevel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODMANAGER_APPLYAVATARBODYLEVEL_OFFSET))(this);
	}

	::System::Void ApplyAvatarFaceLevel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLODMANAGER_APPLYAVATARFACELEVEL_OFFSET))(this);
	}

	::System::Void RegisterAvatarLodController(::NapLodController* controller)
	{
		return ((::System::Void(*)(::PVOID, ::NapLodController*))((::PBYTE)hIl2Cpp + NAPLODMANAGER_REGISTERAVATARLODCONTROLLER_OFFSET))(this, controller);
	}

	::System::Void UnregisterAvatarLodController(::NapLodController* controller)
	{
		return ((::System::Void(*)(::PVOID, ::NapLodController*))((::PBYTE)hIl2Cpp + NAPLODMANAGER_UNREGISTERAVATARLODCONTROLLER_OFFSET))(this, controller);
	}
};
