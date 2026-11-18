#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Action; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define OPMPJAJDJID_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x172E3CD0)
#define OPMPJAJDJID_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x172E3A10)
#define OPMPJAJDJID__CTOR_OFFSET UNITYSDK_OFFSET(0x172E38E0)

inline static constexpr unsigned int OPMPJAJDJID_TypeDefinitionIndex = 85297;

class OPMPJAJDJID : public ::System::Object
{
public:
	// static const ::System::String* DHMNJDAMION; // 0x0
	// static const ::System::Single GJLKCLKBNME; // 0x0
	::UnityEngine::RectTransform* AAGBJIPKOGG; // 0x10
	::UnityEngine::GameObject* DBNBKCGCDOE; // 0x18
	::System::Action* NOHJIEFFPKJ; // 0x20
	::UnityEngine::Vector3 IKKJLHAOAFF; // 0x28

	::System::Void _ctor(::UnityEngine::Transform* JNLBPMKIFNK, ::UnityEngine::Transform* HODAIDNDKHD, ::UnityEngine::Vector2 GIAEPMKCBIB, ::System::Action* IALGICLEHPC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector2, ::System::Action*))((::PBYTE)hIl2Cpp + OPMPJAJDJID__CTOR_OFFSET))(this, JNLBPMKIFNK, HODAIDNDKHD, GIAEPMKCBIB, IALGICLEHPC);
	}

	::System::Boolean PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OPMPJAJDJID_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPMPJAJDJID_LJMIPGJJELP_OFFSET))(this);
	}
};
