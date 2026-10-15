#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNGPLDGOEAI.h"
#include "unitysdk/MJGIHNJKFKD_DIR.h"
#include "unitysdk/UnityEngine/Vector3.h"
class GNGPLDGOEAI;
namespace RPG::Client { class MonoExUICamera; }
namespace System { class Object; }

#define MJGIHNJKFKD_AHCKEBJLFKD_OFFSET UNITYSDK_OFFSET(0xB96CC70)
#define MJGIHNJKFKD_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xB96CCC0)
#define MJGIHNJKFKD_CTOR_OFFSET UNITYSDK_OFFSET(0xB96C6F0)
#define MJGIHNJKFKD_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xB96CAA0)
#define MJGIHNJKFKD_LLLMIHFAFFC_OFFSET UNITYSDK_OFFSET(0xB96C930)
#define MJGIHNJKFKD_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB96C700)
#define MJGIHNJKFKD_POAACIDJOKM_OFFSET UNITYSDK_OFFSET(0xB96CD10)

	class MJGIHNJKFKD : public ::GNGPLDGOEAI
	{
	public:
		::MJGIHNJKFKD_DIR ILPHCEPHENH; // 0x18
		::UnityEngine::Vector3 NJJNEMMKOMD; // 0x1C
		::System::Single DJIKPFCFAPO; // 0x28
		::UnityEngine::Vector3 LEMHJKJEDMO; // 0x2C
		::System::Single HNDOHHLELDI; // 0x38
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
