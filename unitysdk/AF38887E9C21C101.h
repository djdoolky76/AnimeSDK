#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FA78B0257AA80CDE/ABC0569027A9D02C.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }

#define AF38887E9C21C101__CTOR_OFFSET UNITYSDK_OFFSET(0x2324BD0)

inline static constexpr unsigned int AF38887E9C21C101_TypeDefinitionIndex = 17911;

class AF38887E9C21C101 : public ::System::Object
{
public:
	::HoudiniEngineUnity::HEU_HoudiniAsset* A2ACBA2099564073; // 0x10
	::FA78B0257AA80CDE::ABC0569027A9D02C A08660AA2C14C317; // 0x18

	::System::Void _ctor(::HoudiniEngineUnity::HEU_HoudiniAsset* B286159CFDC40A9F, ::FA78B0257AA80CDE::ABC0569027A9D02C B921B7FE9A0F70BF)
	{
		return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::FA78B0257AA80CDE::ABC0569027A9D02C))((::PBYTE)hIl2Cpp + AF38887E9C21C101__CTOR_OFFSET))(this, B286159CFDC40A9F, B921B7FE9A0F70BF);
	}
};
