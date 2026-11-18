#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPCBGBDIFDE;
namespace System { class Action; }

#define BPCBGBDIFDE_GAEIGBFDPBK_IGGLDFMMCJP_OFFSET UNITYSDK_OFFSET(0x11525860)
#define BPCBGBDIFDE_GAEIGBFDPBK_JHFFHCMFKKN_OFFSET UNITYSDK_OFFSET(0x11525820)
#define BPCBGBDIFDE_GAEIGBFDPBK__CTOR_OFFSET UNITYSDK_OFFSET(0x11525810)

inline static constexpr unsigned int BPCBGBDIFDE_GAEIGBFDPBK_TypeDefinitionIndex = 78662;

class BPCBGBDIFDE_GAEIGBFDPBK : public ::System::Object
{
public:
	::BPCBGBDIFDE* KLHPEBKNIFB; // 0x10
	::System::Action* DLMJCFBENGB; // 0x18
	::System::Int32 JCGDJMANPLA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_GAEIGBFDPBK__CTOR_OFFSET))(this);
	}

	::System::Void JHFFHCMFKKN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_GAEIGBFDPBK_JHFFHCMFKKN_OFFSET))(this);
	}

	::System::Void IGGLDFMMCJP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_GAEIGBFDPBK_IGGLDFMMCJP_OFFSET))(this);
	}
};
