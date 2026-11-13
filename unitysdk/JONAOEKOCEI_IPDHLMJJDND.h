#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }

#define JONAOEKOCEI_IPDHLMJJDND_CTOR_OFFSET UNITYSDK_OFFSET(0x1B4E81C0)
#define JONAOEKOCEI_IPDHLMJJDND_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1B4E8300)
#define JONAOEKOCEI_IPDHLMJJDND_GET_ENDPOS_OFFSET UNITYSDK_OFFSET(0x1B4E8330)
#define JONAOEKOCEI_IPDHLMJJDND_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1B4E82A0)
#define JONAOEKOCEI_IPDHLMJJDND_GET_ISHIT_OFFSET UNITYSDK_OFFSET(0x1B4E82E0)
#define JONAOEKOCEI_IPDHLMJJDND_GET_ISREACH_OFFSET UNITYSDK_OFFSET(0x1B4E8280)
#define JONAOEKOCEI_IPDHLMJJDND_GET_TARGETNAME_OFFSET UNITYSDK_OFFSET(0x1B4E82C0)
#define JONAOEKOCEI_IPDHLMJJDND_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1B4E8320)
#define JONAOEKOCEI_IPDHLMJJDND_SET_ENDPOS_OFFSET UNITYSDK_OFFSET(0x1B4E8350)
#define JONAOEKOCEI_IPDHLMJJDND_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1B4E82B0)
#define JONAOEKOCEI_IPDHLMJJDND_SET_ISHIT_OFFSET UNITYSDK_OFFSET(0x1B4E82F0)
#define JONAOEKOCEI_IPDHLMJJDND_SET_ISREACH_OFFSET UNITYSDK_OFFSET(0x1B4E8290)
#define JONAOEKOCEI_IPDHLMJJDND_SET_TARGETNAME_OFFSET UNITYSDK_OFFSET(0x1B4E82D0)

inline static constexpr unsigned int JONAOEKOCEI_IPDHLMJJDND_TypeDefinitionIndex = 61467;

	class JONAOEKOCEI_IPDHLMJJDND : public ::System::Object
	{
	public:
		::System::String* _TargetName_k__BackingField; // 0x10
		::UnityEngine::Vector3 _Direction_k__BackingField; // 0x18
		::System::Boolean GAGNJCPHCHD; // 0x24
		::System::Boolean _IsHit_k__BackingField; // 0x25
		::System::Boolean _IsFinish_k__BackingField; // 0x26
		::System::Boolean _IsReach_k__BackingField; // 0x27
		::UnityEngine::Vector3 _EndPos_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JONAOEKOCEI_IPDHLMJJDND_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsReach()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JONAOEKOCEI_IPDHLMJJDND_GET_ISREACH_OFFSET))(this);
		}

		::System::Void set_IsReach(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JONAOEKOCEI_IPDHLMJJDND_SET_ISREACH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JONAOEKOCEI_IPDHLMJJDND_GET_ISFINISH_OFFSET))(this);
		}

		::System::Void set_IsFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JONAOEKOCEI_IPDHLMJJDND_SET_ISFINISH_OFFSET))(this, a1);
		}

		::System::String* get_TargetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JONAOEKOCEI_IPDHLMJJDND_GET_TARGETNAME_OFFSET))(this);
		}

		::System::Void set_TargetName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JONAOEKOCEI_IPDHLMJJDND_SET_TARGETNAME_OFFSET))(this, a1);
		}

		::System::Boolean get_IsHit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JONAOEKOCEI_IPDHLMJJDND_GET_ISHIT_OFFSET))(this);
		}

		::System::Void set_IsHit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JONAOEKOCEI_IPDHLMJJDND_SET_ISHIT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_Direction()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JONAOEKOCEI_IPDHLMJJDND_GET_DIRECTION_OFFSET))(this);
		}

		::System::Void set_Direction(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JONAOEKOCEI_IPDHLMJJDND_SET_DIRECTION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_EndPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JONAOEKOCEI_IPDHLMJJDND_GET_ENDPOS_OFFSET))(this);
		}

		::System::Void set_EndPos(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JONAOEKOCEI_IPDHLMJJDND_SET_ENDPOS_OFFSET))(this, a1);
		}

	};
