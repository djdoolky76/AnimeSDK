#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GPPAJJILOHB_LKAEJCFKLMO;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define HBMNNCAGMMO_CTOR_OFFSET UNITYSDK_OFFSET(0x15C11220)
#define HBMNNCAGMMO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C112C0)
#define HBMNNCAGMMO_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15C11400)
#define HBMNNCAGMMO_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0x15C11340)

	class HBMNNCAGMMO : public ::System::Object
	{
	public:
		::UnityEngine::Material* IMOHCDHKBAJ; // 0x10
		::GPPAJJILOHB_LKAEJCFKLMO* GCJINNEANCH; // 0x18
		// static const ::System::Object OKFMABJGOPI; // 0x0
		// static const ::System::String* IJIFHOEEBHJ; // 0x0
		::System::Void _ctor(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HBMNNCAGMMO_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMNNCAGMMO_DISPOSE_OFFSET))(this);
		}

		::System::Void NHPDCPKMNAM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBMNNCAGMMO_NHPDCPKMNAM_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBMNNCAGMMO_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
