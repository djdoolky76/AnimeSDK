#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

class FGCOIBFFCHB;
namespace System { template <typename T> class Action_1; }

#define FGCOIBFFCHB_EMDGJCOOCNP_CPBDLOEPPFF_OFFSET UNITYSDK_OFFSET(0x10F67800)
#define FGCOIBFFCHB_EMDGJCOOCNP__CTOR_OFFSET UNITYSDK_OFFSET(0x10F677F0)

inline static constexpr unsigned int FGCOIBFFCHB_EMDGJCOOCNP_TypeDefinitionIndex = 49056;

class FGCOIBFFCHB_EMDGJCOOCNP : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* NKIFJCDNCFI; // 0x10
	::FGCOIBFFCHB* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_EMDGJCOOCNP__CTOR_OFFSET))(this);
	}

	::System::Void CPBDLOEPPFF(::Foundation::AssetRequestHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_EMDGJCOOCNP_CPBDLOEPPFF_OFFSET))(this, PHHDHIBOCKA);
	}
};
