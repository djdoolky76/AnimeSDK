#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowMainPageController; }

#define BHJNKEPAIOB_NIBNPJHKFCJ_LGMMACNPLOG_OFFSET UNITYSDK_OFFSET(0x1691BA30)
#define BHJNKEPAIOB_NIBNPJHKFCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1691BA20)

inline static constexpr unsigned int BHJNKEPAIOB_NIBNPJHKFCJ_TypeDefinitionIndex = 43124;

class BHJNKEPAIOB_NIBNPJHKFCJ : public ::System::Object
{
public:
	::MoleMole::UIHollowMainPageController* FIEJJJIKOPC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHJNKEPAIOB_NIBNPJHKFCJ__CTOR_OFFSET))(this);
	}

	::System::Void LGMMACNPLOG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHJNKEPAIOB_NIBNPJHKFCJ_LGMMACNPLOG_OFFSET))(this);
	}
};
