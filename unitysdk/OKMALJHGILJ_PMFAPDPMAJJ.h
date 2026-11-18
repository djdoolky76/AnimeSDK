#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OKMALJHGILJ;
namespace MoleMole { class UserLocalDataItem; }

#define OKMALJHGILJ_PMFAPDPMAJJ_OIDGANBOALO_OFFSET UNITYSDK_OFFSET(0x16F817F0)
#define OKMALJHGILJ_PMFAPDPMAJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16F817E0)

inline static constexpr unsigned int OKMALJHGILJ_PMFAPDPMAJJ_TypeDefinitionIndex = 93183;

class OKMALJHGILJ_PMFAPDPMAJJ : public ::System::Object
{
public:
	::OKMALJHGILJ* KLHPEBKNIFB; // 0x10
	::MoleMole::UserLocalDataItem* BNHIFIHNCHD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMALJHGILJ_PMFAPDPMAJJ__CTOR_OFFSET))(this);
	}

	::System::Void OIDGANBOALO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMALJHGILJ_PMFAPDPMAJJ_OIDGANBOALO_OFFSET))(this);
	}
};
