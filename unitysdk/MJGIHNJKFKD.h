#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNGPLDGOEAI.h"
#include "unitysdk/MJGIHNJKFKD_DIR.h"
#include "unitysdk/UnityEngine/Vector3.h"
class GNGPLDGOEAI;
namespace RPG::Client { class MonoExUICamera; }
namespace System { class Object; }

#define MJGIHNJKFKD_AHCKEBJLFKD_OFFSET UNITYSDK_OFFSET(0xC2245A0)
#define MJGIHNJKFKD_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xC2245F0)
#define MJGIHNJKFKD_CTOR_OFFSET UNITYSDK_OFFSET(0xC224020)
#define MJGIHNJKFKD_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xC2243D0)
#define MJGIHNJKFKD_LLLMIHFAFFC_OFFSET UNITYSDK_OFFSET(0xC224260)
#define MJGIHNJKFKD_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC224030)
#define MJGIHNJKFKD_POAACIDJOKM_OFFSET UNITYSDK_OFFSET(0xC224640)

inline static constexpr unsigned int MJGIHNJKFKD_TypeDefinitionIndex = 75070;

	class MJGIHNJKFKD : public ::GNGPLDGOEAI
	{
	public:
		::UnityEngine::Vector3 NJJNEMMKOMD; // 0x18
		::System::Single HNDOHHLELDI; // 0x24
		::UnityEngine::Vector3 LEMHJKJEDMO; // 0x28
		::MJGIHNJKFKD_DIR ILPHCEPHENH; // 0x34
		::System::Single DJIKPFCFAPO; // 0x38
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
