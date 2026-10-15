#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPFEAEOEGFA.h"
namespace UnityEngine { class GameObject; }

#define ICOIDNJGKPD_CTOR_OFFSET UNITYSDK_OFFSET(0x15E55350)
#define ICOIDNJGKPD_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x15E55360)

inline static constexpr unsigned int ICOIDNJGKPD_TypeDefinitionIndex = 49044;

	class ICOIDNJGKPD : public ::GPFEAEOEGFA
	{
	public:
		::System::Void _ctor(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + ICOIDNJGKPD_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 GetTypeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOIDNJGKPD_GETTYPEID_OFFSET))(this);
		}

	};
