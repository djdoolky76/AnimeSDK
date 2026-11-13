#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNGPLDGOEAI.h"
#include "unitysdk/MJGIHNJKFKD_DIR.h"
#include "unitysdk/UnityEngine/Vector3.h"
class GNGPLDGOEAI;
namespace RPG::Client { class MonoExUICamera; }
namespace System { class Object; }

#define MJGIHNJKFKD_AHCKEBJLFKD_OFFSET UNITYSDK_OFFSET(0x1A3A97A0)
#define MJGIHNJKFKD_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x1A3A97F0)
#define MJGIHNJKFKD_CTOR_OFFSET UNITYSDK_OFFSET(0x1A3A9220)
#define MJGIHNJKFKD_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x1A3A95D0)
#define MJGIHNJKFKD_LLLMIHFAFFC_OFFSET UNITYSDK_OFFSET(0x1A3A9460)
#define MJGIHNJKFKD_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1A3A9230)
#define MJGIHNJKFKD_POAACIDJOKM_OFFSET UNITYSDK_OFFSET(0x1A3A9840)

inline static constexpr unsigned int MJGIHNJKFKD_TypeDefinitionIndex = 75069;

	class MJGIHNJKFKD : public ::GNGPLDGOEAI
	{
	public:
		::UnityEngine::Vector3 NJJNEMMKOMD; // 0x18
		::MJGIHNJKFKD_DIR ILPHCEPHENH; // 0x24
		::System::Single HNDOHHLELDI; // 0x28
		::System::Single DJIKPFCFAPO; // 0x2C
		::UnityEngine::Vector3 LEMHJKJEDMO; // 0x30
		::System::Void _ctor(::RPG::Client::MonoExUICamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoExUICamera*))((::PBYTE)hIl2Cpp + MJGIHNJKFKD_CTOR_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJGIHNJKFKD_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH(::GNGPLDGOEAI* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GNGPLDGOEAI*, ::System::Object*))((::PBYTE)hIl2Cpp + MJGIHNJKFKD_KIGBILLGNOH_OFFSET))(this, a1, a2);
		}

		::System::Void CHAHBFGGIDL(::GNGPLDGOEAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNGPLDGOEAI*))((::PBYTE)hIl2Cpp + MJGIHNJKFKD_CHAHBFGGIDL_OFFSET))(this, a1);
		}

		::System::Void POAACIDJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJGIHNJKFKD_POAACIDJOKM_OFFSET))(this);
		}

		::System::Void AHCKEBJLFKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJGIHNJKFKD_AHCKEBJLFKD_OFFSET))(this);
		}

		::System::Void LLLMIHFAFFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJGIHNJKFKD_LLLMIHFAFFC_OFFSET))(this);
		}

	};
