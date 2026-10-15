#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCEBGLLMGPE;
class LIAIOEBDNEE;
namespace Entitas { class IEntity; }

#define PAPOPANPGIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7E6100)
#define PAPOPANPGIJ_GET_AIROOT_OFFSET UNITYSDK_OFFSET(0x1C7E60E0)
#define PAPOPANPGIJ_GET_LITTLEGAMECOREINSTANCE_OFFSET UNITYSDK_OFFSET(0x1C7E60A0)
#define PAPOPANPGIJ_GET_LITTLEGAMEENTITY_OFFSET UNITYSDK_OFFSET(0x1C7E6080)
#define PAPOPANPGIJ_GET_ROOTSTATE_OFFSET UNITYSDK_OFFSET(0x1C7E60C0)
#define PAPOPANPGIJ_SET_AIROOT_OFFSET UNITYSDK_OFFSET(0x1C7E60F0)
#define PAPOPANPGIJ_SET_LITTLEGAMECOREINSTANCE_OFFSET UNITYSDK_OFFSET(0x1C7E60B0)
#define PAPOPANPGIJ_SET_LITTLEGAMEENTITY_OFFSET UNITYSDK_OFFSET(0x1C7E6090)
#define PAPOPANPGIJ_SET_ROOTSTATE_OFFSET UNITYSDK_OFFSET(0x1C7E60D0)

	class PAPOPANPGIJ : public ::System::Object
	{
	public:
		::GCEBGLLMGPE* _RootState_k__BackingField; // 0x10
		::GCEBGLLMGPE* _AIRoot_k__BackingField; // 0x18
		::LIAIOEBDNEE* _LittleGameCoreInstance_k__BackingField; // 0x20
		::Entitas::IEntity* _LittleGameEntity_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPOPANPGIJ_CTOR_OFFSET))(this);
		}

		::Entitas::IEntity* get_LittleGameEntity()
		{
			return ((::Entitas::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPOPANPGIJ_GET_LITTLEGAMEENTITY_OFFSET))(this);
		}

		::System::Void set_LittleGameEntity(::Entitas::IEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + PAPOPANPGIJ_SET_LITTLEGAMEENTITY_OFFSET))(this, a1);
		}

		::LIAIOEBDNEE* get_LittleGameCoreInstance()
		{
			return ((::LIAIOEBDNEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPOPANPGIJ_GET_LITTLEGAMECOREINSTANCE_OFFSET))(this);
		}

		::System::Void set_LittleGameCoreInstance(::LIAIOEBDNEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LIAIOEBDNEE*))((::PBYTE)hIl2Cpp + PAPOPANPGIJ_SET_LITTLEGAMECOREINSTANCE_OFFSET))(this, a1);
		}

		::GCEBGLLMGPE* get_RootState()
		{
			return ((::GCEBGLLMGPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPOPANPGIJ_GET_ROOTSTATE_OFFSET))(this);
		}

		::System::Void set_RootState(::GCEBGLLMGPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCEBGLLMGPE*))((::PBYTE)hIl2Cpp + PAPOPANPGIJ_SET_ROOTSTATE_OFFSET))(this, a1);
		}

		::GCEBGLLMGPE* get_AIRoot()
		{
			return ((::GCEBGLLMGPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPOPANPGIJ_GET_AIROOT_OFFSET))(this);
		}

		::System::Void set_AIRoot(::GCEBGLLMGPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCEBGLLMGPE*))((::PBYTE)hIl2Cpp + PAPOPANPGIJ_SET_AIROOT_OFFSET))(this, a1);
		}

	};
