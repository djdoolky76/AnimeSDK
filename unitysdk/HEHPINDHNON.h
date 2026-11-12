#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define HEHPINDHNON_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DC83A20)
#define HEHPINDHNON_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC83A80)

inline static constexpr unsigned int HEHPINDHNON_TypeDefinitionIndex = 44265;

	class HEHPINDHNON : public ::System::Object
	{
	public:
		::System::Single MLKAGGJKCGN; // 0x10
		::System::Single IDFBFGKPCHF; // 0x14
		::UnityEngine::Vector3 OHLPJGIECPF; // 0x18
		::System::Single PMKKIEEPHEL; // 0x24
		::System::Single PKNDGLDHMKK; // 0x28
		::System::Single JMEFHJGLHHA; // 0x2C
		::System::Single AHBJOGJADMN; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHPINDHNON_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHPINDHNON_CLEAR_OFFSET))(this);
		}

	};
