#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADELBIEMCJL.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define POIJJMCAKME__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F69E0)

inline static constexpr unsigned int POIJJMCAKME_TypeDefinitionIndex = 80948;

class POIJJMCAKME : public ::System::Object
{
public:
	::UnityEngine::GameObject* IPNLIFNFBJN; // 0x10
	::System::String* FPJPGBLFELK; // 0x18
	::ADELBIEMCJL HBLNIDBGMLC; // 0x20
	::System::Boolean NMNGPDPECEI; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIJJMCAKME__CTOR_OFFSET))(this);
	}
};
