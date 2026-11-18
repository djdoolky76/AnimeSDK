#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }

#define JIGODLIKGDA_BMMOPHFEBOF_LMLEMDIBIAI_APCBHFOBFFO_OFFSET UNITYSDK_OFFSET(0x13AD1D60)
#define JIGODLIKGDA_BMMOPHFEBOF_LMLEMDIBIAI_CNAIOBFPEEM_OFFSET UNITYSDK_OFFSET(0x13AD1D30)
#define JIGODLIKGDA_BMMOPHFEBOF_LMLEMDIBIAI__CTOR_OFFSET UNITYSDK_OFFSET(0x13AD1D20)

inline static constexpr unsigned int JIGODLIKGDA_BMMOPHFEBOF_LMLEMDIBIAI_TypeDefinitionIndex = 58736;

class JIGODLIKGDA_BMMOPHFEBOF_LMLEMDIBIAI : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* DCIJEGFLODD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGODLIKGDA_BMMOPHFEBOF_LMLEMDIBIAI__CTOR_OFFSET))(this);
	}

	::System::Void CNAIOBFPEEM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGODLIKGDA_BMMOPHFEBOF_LMLEMDIBIAI_CNAIOBFPEEM_OFFSET))(this);
	}

	::System::Void APCBHFOBFFO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGODLIKGDA_BMMOPHFEBOF_LMLEMDIBIAI_APCBHFOBFFO_OFFSET))(this);
	}
};
