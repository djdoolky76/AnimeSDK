#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define HEHPINDHNON_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CABF000)
#define HEHPINDHNON_CTOR_OFFSET UNITYSDK_OFFSET(0x1CABF060)

	class HEHPINDHNON : public ::System::Object
	{
	public:
		::System::Single PMKKIEEPHEL; // 0x10
		::System::Single AHBJOGJADMN; // 0x14
		::System::Single MLKAGGJKCGN; // 0x18
		::System::Single JMEFHJGLHHA; // 0x1C
		::System::Single IDFBFGKPCHF; // 0x20
		::System::Single PKNDGLDHMKK; // 0x24
		::UnityEngine::Vector3 OHLPJGIECPF; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHPINDHNON_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHPINDHNON_CLEAR_OFFSET))(this);
		}

	};
