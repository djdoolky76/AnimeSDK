#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PGLKPCIELAN;

#define IGNALMBOCDB_ADMDONCALGE_INFAEPENFDA_OFFSET UNITYSDK_OFFSET(0x16F695B0)
#define IGNALMBOCDB_ADMDONCALGE__CTOR_OFFSET UNITYSDK_OFFSET(0x16F695A0)

inline static constexpr unsigned int IGNALMBOCDB_ADMDONCALGE_TypeDefinitionIndex = 90741;

class IGNALMBOCDB_ADMDONCALGE : public ::System::Object
{
public:
	::PGLKPCIELAN* LHPFMGBDFPN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNALMBOCDB_ADMDONCALGE__CTOR_OFFSET))(this);
	}

	::System::Void INFAEPENFDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNALMBOCDB_ADMDONCALGE_INFAEPENFDA_OFFSET))(this);
	}
};
