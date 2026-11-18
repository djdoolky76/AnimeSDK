#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }

#define MAFGFDMEHOG_MOAINOPNJGM_MDGNIBKIMFF_OFFSET UNITYSDK_OFFSET(0x16C6EA50)
#define MAFGFDMEHOG_MOAINOPNJGM__CTOR_OFFSET UNITYSDK_OFFSET(0x16C6EA40)

inline static constexpr unsigned int MAFGFDMEHOG_MOAINOPNJGM_TypeDefinitionIndex = 46028;

class MAFGFDMEHOG_MOAINOPNJGM : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* KHGFAKJKDGG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFGFDMEHOG_MOAINOPNJGM__CTOR_OFFSET))(this);
	}

	::System::Void MDGNIBKIMFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFGFDMEHOG_MOAINOPNJGM_MDGNIBKIMFF_OFFSET))(this);
	}
};
