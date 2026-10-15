#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EECKOKNIHFH_RecoverType.h"
#include "unitysdk/GNGPLDGOEAI.h"
class GNGPLDGOEAI;
namespace RPG::Client { class MonoExUICamera; }
namespace RPG::Client { class MonoExUICamera_CameraOutInfo; }
namespace System { class Object; }

#define EECKOKNIHFH_CTOR_OFFSET UNITYSDK_OFFSET(0x1334F330)
#define EECKOKNIHFH_KFJLGBHOONO_OFFSET UNITYSDK_OFFSET(0x1334F460)
#define EECKOKNIHFH_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x1334F380)
#define EECKOKNIHFH_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1334F4C0)
#define EECKOKNIHFH_PEDFLCNLIOC_OFFSET UNITYSDK_OFFSET(0x1334F5D0)
#define EECKOKNIHFH_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1334F6B0)
#define EECKOKNIHFH_POAACIDJOKM_OFFSET UNITYSDK_OFFSET(0x1334F570)

	class EECKOKNIHFH : public ::GNGPLDGOEAI
	{
	public:
		::RPG::Client::MonoExUICamera_CameraOutInfo* IDKOLBAHOOL; // 0x18
		::EECKOKNIHFH_RecoverType PLEHIKENPGB; // 0x20
		::System::Void _ctor(::RPG::Client::MonoExUICamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoExUICamera*))((::PBYTE)hIl2Cpp + EECKOKNIHFH_CTOR_OFFSET))(this, a1);
		}

		::System::Void KIGBILLGNOH(::GNGPLDGOEAI* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GNGPLDGOEAI*, ::System::Object*))((::PBYTE)hIl2Cpp + EECKOKNIHFH_KIGBILLGNOH_OFFSET))(this, a1, a2);
		}

		::System::Void KFJLGBHOONO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EECKOKNIHFH_KFJLGBHOONO_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EECKOKNIHFH_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Void POAACIDJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EECKOKNIHFH_POAACIDJOKM_OFFSET))(this);
		}

		::System::Void PEDFLCNLIOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EECKOKNIHFH_PEDFLCNLIOC_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EECKOKNIHFH_PJPFIHFAHGO_OFFSET))(this);
		}

	};
