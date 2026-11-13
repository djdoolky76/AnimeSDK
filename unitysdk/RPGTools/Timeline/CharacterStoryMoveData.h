#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CharacterStoryMoveData_MoveMode.h"
#include "unitysdk/RPGTools/Timeline/CharacterStoryMoveData_MovePathMode.h"
#include "unitysdk/RPGTools/Timeline/CharacterStoryMoveData_MoveStopMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_AAPPLKOLJMI_1_OFFSET UNITYSDK_OFFSET(0x1E3F2A30)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_AAPPLKOLJMI_OFFSET UNITYSDK_OFFSET(0x1E3F2440)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_AKPDKLIOMKD_OFFSET UNITYSDK_OFFSET(0x1E3F3710)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F1CC0)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_FHKDHECNKCD_1_OFFSET UNITYSDK_OFFSET(0x1E3F2660)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_FHKDHECNKCD_OFFSET UNITYSDK_OFFSET(0x1E3F20C0)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_GET_ENDPOSITION_OFFSET UNITYSDK_OFFSET(0x1E3F2000)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_GET_POINTCOUNT_OFFSET UNITYSDK_OFFSET(0x1E3F1DF0)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_GET_STARTPOSITION_OFFSET UNITYSDK_OFFSET(0x1E3F1E60)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_GET__LOCKY_OFFSET UNITYSDK_OFFSET(0x1E3F2650)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_GJDMCFMPLDN_1_OFFSET UNITYSDK_OFFSET(0x1E3F2810)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_GJDMCFMPLDN_OFFSET UNITYSDK_OFFSET(0x1E3F2210)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_HHMCHJLMJDJ_OFFSET UNITYSDK_OFFSET(0x1E3F3A00)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_JEECHJHEHNG_OFFSET UNITYSDK_OFFSET(0x1E3F2DE0)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_NIKHIIIIMBG_OFFSET UNITYSDK_OFFSET(0x1E3F2CE0)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_NINDHOGICJD_OFFSET UNITYSDK_OFFSET(0x1E3F1ED0)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_ONICMDNEHBA_OFFSET UNITYSDK_OFFSET(0x1E3F3C20)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterStoryMoveData_TypeDefinitionIndex = 49031;

	class CharacterStoryMoveData : public ::System::Object
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::RPGTools::Timeline::CharacterStoryMoveData_MoveMode MotionFlag; // 0x18
		::RPGTools::Timeline::CharacterStoryMoveData_MoveStopMode StopMode; // 0x1C
		::System::Single MotionSpeed; // 0x20
		::System::Boolean OverrideMotionAnimStartOffset; // 0x24
		::System::Byte _padding0[0x3];
		::System::Single MotionAnimStartOffset; // 0x28
		::System::Boolean OverrideMotionAnimStartTransitionDuration; // 0x2C
		::System::Byte _padding1[0x3];
		::System::Single MotionAnimStartTransitionDuration; // 0x30
		::System::Boolean OverrideMotionAnimStopInfo; // 0x34
		::System::Byte _padding2[0x3];
		::System::Single MotionAnimStopOffset; // 0x38
		::System::Single MotionAnimStopDuration; // 0x3C
		::System::Single MotionAnimStopLoopSpeed; // 0x40
		::RPGTools::Timeline::CharacterStoryMoveData_MovePathMode PathMode; // 0x44
		::System::Collections::Generic::List_1<::System::Object*>* PathPoints; // 0x48
		::System::Collections::Generic::List_1<::System::Object*>* BezierPathPoints; // 0x50
		::System::Boolean UseOverrideTurnSpeed; // 0x58
		::System::Byte _padding3[0x3];
		::System::Single OverrideTurnSpeed; // 0x5C
		::System::Boolean ForcedPathFollowing; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_CTOR_OFFSET))(this);
		}

		::System::Int32 get_PointCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_GET_POINTCOUNT_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_StartPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_GET_STARTPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_EndPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_GET_ENDPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 NINDHOGICJD(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_NINDHOGICJD_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 FHKDHECNKCD(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_FHKDHECNKCD_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GJDMCFMPLDN(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_GJDMCFMPLDN_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 AAPPLKOLJMI(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_AAPPLKOLJMI_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 FHKDHECNKCD_1(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_FHKDHECNKCD_1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 GJDMCFMPLDN_1(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_GJDMCFMPLDN_1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 AAPPLKOLJMI_1(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_AAPPLKOLJMI_1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 NIKHIIIIMBG(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_NIKHIIIIMBG_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 AKPDKLIOMKD(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_AKPDKLIOMKD_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Single HHMCHJLMJDJ(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::System::Single a6, ::System::Int32 a7)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_HHMCHJLMJDJ_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		::UnityEngine::Vector3 JEECHJHEHNG(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_JEECHJHEHNG_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean ONICMDNEHBA(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_ONICMDNEHBA_OFFSET))(this, a1);
		}

		::System::Boolean get__LockY()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_GET__LOCKY_OFFSET))(this);
		}

	};
}
