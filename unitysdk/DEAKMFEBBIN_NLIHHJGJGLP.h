#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DEAKMFEBBIN;
namespace System { class Action; }

#define DEAKMFEBBIN_NLIHHJGJGLP_EBFHIEKKPEG_OFFSET UNITYSDK_OFFSET(0x14997530)
#define DEAKMFEBBIN_NLIHHJGJGLP__CTOR_OFFSET UNITYSDK_OFFSET(0x14997520)

inline static constexpr unsigned int DEAKMFEBBIN_NLIHHJGJGLP_TypeDefinitionIndex = 67712;

class DEAKMFEBBIN_NLIHHJGJGLP : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::DEAKMFEBBIN* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAKMFEBBIN_NLIHHJGJGLP__CTOR_OFFSET))(this);
	}

	::System::Void EBFHIEKKPEG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAKMFEBBIN_NLIHHJGJGLP_EBFHIEKKPEG_OFFSET))(this);
	}
};
