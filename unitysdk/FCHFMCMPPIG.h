#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define FCHFMCMPPIG_NMEPFDBHMDB_OFFSET UNITYSDK_OFFSET(0x726790)
#define FCHFMCMPPIG_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x726730)
#define FCHFMCMPPIG_PFOEGLKBJHL_OFFSET UNITYSDK_OFFSET(0x7267A0)

inline static constexpr unsigned int FCHFMCMPPIG_TypeDefinitionIndex = 58101;

struct alignas(4) FCHFMCMPPIG
{
	::System::Single FLDMLGBGFIA; // 0x10
	::UnityEngine::Vector2 IPIHCIDDKBK; // 0x14
	::System::Single OHJIBKABBKF; // 0x1C

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHFMCMPPIG_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean NMEPFDBHMDB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHFMCMPPIG_NMEPFDBHMDB_OFFSET))(this);
	}

	::System::Boolean PFOEGLKBJHL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHFMCMPPIG_PFOEGLKBJHL_OFFSET))(this);
	}
};
