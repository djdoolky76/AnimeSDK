#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Version; }

#define NPEJPBFILIP_CTOR_OFFSET UNITYSDK_OFFSET(0x19CF7140)

inline static constexpr unsigned int NPEJPBFILIP_TypeDefinitionIndex = 85112;

	class NPEJPBFILIP : public ::System::Object
	{
	public:
		::System::Version* GOOHAILOCGM; // 0x10
		::System::Version* EODKIAFPBCI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEJPBFILIP_CTOR_OFFSET))(this);
		}

	};
