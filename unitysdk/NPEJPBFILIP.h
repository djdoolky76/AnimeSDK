#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Version; }

#define NPEJPBFILIP_CTOR_OFFSET UNITYSDK_OFFSET(0xBCFC250)

inline static constexpr unsigned int NPEJPBFILIP_TypeDefinitionIndex = 82240;

	class NPEJPBFILIP : public ::System::Object
	{
	public:
		::System::Version* EODKIAFPBCI; // 0x10
		::System::Version* GOOHAILOCGM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEJPBFILIP_CTOR_OFFSET))(this);
		}

	};
