#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EOOKHIMEPLB;
namespace RPG::GameCore { class BattleQTEUIConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define EOOKHIMEPLB_ALJABPMHICJ_OFFSET UNITYSDK_OFFSET(0x155CC530)
#define EOOKHIMEPLB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x155CC410)
#define EOOKHIMEPLB_CTOR_OFFSET UNITYSDK_OFFSET(0x155CC520)
#define EOOKHIMEPLB_GET_DELAY_OFFSET UNITYSDK_OFFSET(0x155CC890)
#define EOOKHIMEPLB_GET_FOLLOWPOSITION_OFFSET UNITYSDK_OFFSET(0x155CC8B0)
#define EOOKHIMEPLB_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x155CC870)
#define EOOKHIMEPLB_GET_UIPATH_OFFSET UNITYSDK_OFFSET(0x155CC850)
#define EOOKHIMEPLB_SET_DELAY_OFFSET UNITYSDK_OFFSET(0x155CC8A0)
#define EOOKHIMEPLB_SET_FOLLOWPOSITION_OFFSET UNITYSDK_OFFSET(0x155CC8C0)
#define EOOKHIMEPLB_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x155CC880)
#define EOOKHIMEPLB_SET_UIPATH_OFFSET UNITYSDK_OFFSET(0x155CC860)

inline static constexpr unsigned int EOOKHIMEPLB_TypeDefinitionIndex = 58610;

	class EOOKHIMEPLB : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::System::String* _UIPath_k__BackingField; // 0x18
		::System::Single _Delay_k__BackingField; // 0x20
		::System::Nullable_1<::UnityEngine::Vector3> _FollowPosition_k__BackingField; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOOKHIMEPLB_CTOR_OFFSET))(this);
		}

		static ::EOOKHIMEPLB* BPLPBPMEODA(::RPG::GameCore::BattleQTEUIConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::EOOKHIMEPLB*(*)(::RPG::GameCore::BattleQTEUIConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + EOOKHIMEPLB_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		static ::System::Nullable_1<::UnityEngine::Vector3> ALJABPMHICJ(::RPG::GameCore::BattleQTEUIConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::RPG::GameCore::BattleQTEUIConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + EOOKHIMEPLB_ALJABPMHICJ_OFFSET))(a1, a2);
		}

		::System::String* get_UIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOOKHIMEPLB_GET_UIPATH_OFFSET))(this);
		}

		::System::Void set_UIPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EOOKHIMEPLB_SET_UIPATH_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOOKHIMEPLB_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EOOKHIMEPLB_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::Single get_Delay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EOOKHIMEPLB_GET_DELAY_OFFSET))(this);
		}

		::System::Void set_Delay(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EOOKHIMEPLB_SET_DELAY_OFFSET))(this, a1);
		}

		::System::Nullable_1<::UnityEngine::Vector3> get_FollowPosition()
		{
			return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + EOOKHIMEPLB_GET_FOLLOWPOSITION_OFFSET))(this);
		}

		::System::Void set_FollowPosition(::System::Nullable_1<::UnityEngine::Vector3> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + EOOKHIMEPLB_SET_FOLLOWPOSITION_OFFSET))(this, a1);
		}

	};
