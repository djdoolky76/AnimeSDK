#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GPPAJJILOHB_LKAEJCFKLMO;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define CCJJEJFDBIF_FJKKPFKKPMO_CTOR_OFFSET UNITYSDK_OFFSET(0xC745BB0)
#define CCJJEJFDBIF_FJKKPFKKPMO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC742540)
#define CCJJEJFDBIF_FJKKPFKKPMO_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC7430C0)
#define CCJJEJFDBIF_FJKKPFKKPMO_NECEALBHFAB_OFFSET UNITYSDK_OFFSET(0xC7477C0)
#define CCJJEJFDBIF_FJKKPFKKPMO_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0xC745A80)

inline static constexpr unsigned int CCJJEJFDBIF_FJKKPFKKPMO_TypeDefinitionIndex = 60300;

	class CCJJEJFDBIF_FJKKPFKKPMO : public ::System::Object
	{
	public:
		::GPPAJJILOHB_LKAEJCFKLMO* GCJINNEANCH; // 0x10
		::UnityEngine::Material* IMOHCDHKBAJ; // 0x18
		::System::Boolean DIMECBLLOGB; // 0x20
		// static const ::System::String* IJIFHOEEBHJ; // 0x0
		// static const ::System::String* OPHJPKFPKBN; // 0x0
		::System::Void _ctor(::UnityEngine::GameObject* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_FJKKPFKKPMO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_FJKKPFKKPMO_DISPOSE_OFFSET))(this);
		}

		::System::Boolean NECEALBHFAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_FJKKPFKKPMO_NECEALBHFAB_OFFSET))(this);
		}

		::System::Void NHPDCPKMNAM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_FJKKPFKKPMO_NHPDCPKMNAM_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CCJJEJFDBIF_FJKKPFKKPMO_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
