#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GCFreeClosure/FuncClosureR_2.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define BHBHHBIDBIB_CTOR_OFFSET UNITYSDK_OFFSET(0xB46ED60)
#define BHBHHBIDBIB_JMJBHNEKGHI_OFFSET UNITYSDK_OFFSET(0xB46F9A0)
#define BHBHHBIDBIB_OKGOAIDACDL_OFFSET UNITYSDK_OFFSET(0xB46F7D0)
#define BHBHHBIDBIB__CREATETRIGGER_OFFSET UNITYSDK_OFFSET(0xB46F2C0)
#define BHBHHBIDBIB__GETENTITYBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB46F260)
#define BHBHHBIDBIB__LOGERROR_OFFSET UNITYSDK_OFFSET(0xB46F200)
#define BHBHHBIDBIB__ONTRIGGERIN_OFFSET UNITYSDK_OFFSET(0xB46F000)
#define BHBHHBIDBIB__ONTRIGGEROUT_OFFSET UNITYSDK_OFFSET(0xB46F120)
#define BHBHHBIDBIB__TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB46EF60)

inline static constexpr unsigned int BHBHHBIDBIB_TypeDefinitionIndex = 77146;

	class BHBHHBIDBIB
	{
	public:
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x40
		::NDDFLGNNMDK* FKINCGODJEP; // 0x48
		// static const ::System::String* MEJMLDICBGL; // 0x0
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + BHBHHBIDBIB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBHHBIDBIB__TEARDOWN_OFFSET))(this);
		}

		::System::Void _OnTriggerIn(::HIOEAKHGILF* a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + BHBHHBIDBIB__ONTRIGGERIN_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTriggerOut(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + BHBHHBIDBIB__ONTRIGGEROUT_OFFSET))(this, a1);
		}

		::System::Void _LogError(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BHBHHBIDBIB__LOGERROR_OFFSET))(this, a1);
		}

		::HIOEAKHGILF* _GetEntityByRuntimeID(::System::Int32 a1)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BHBHHBIDBIB__GETENTITYBYRUNTIMEID_OFFSET))(this, a1);
		}

		::System::Void _CreateTrigger(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + BHBHHBIDBIB__CREATETRIGGER_OFFSET))(this, a1);
		}

		::RPG::GCFreeClosure::FuncClosureR_2<::UnityEngine::Collider*, ::System::Boolean> OKGOAIDACDL()
		{
			return ((::RPG::GCFreeClosure::FuncClosureR_2<::UnityEngine::Collider*, ::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBHHBIDBIB_OKGOAIDACDL_OFFSET))(this);
		}

		::System::Boolean JMJBHNEKGHI(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + BHBHHBIDBIB_JMJBHNEKGHI_OFFSET))(this, a1);
		}

	};
