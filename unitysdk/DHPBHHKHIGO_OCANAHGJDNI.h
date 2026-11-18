#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class FFEIFLBGEEA;

#define DHPBHHKHIGO_OCANAHGJDNI_MPLAEDCFLIG_OFFSET UNITYSDK_OFFSET(0x7FBB770)
#define DHPBHHKHIGO_OCANAHGJDNI__CTOR_OFFSET UNITYSDK_OFFSET(0x7FBB760)

inline static constexpr unsigned int DHPBHHKHIGO_OCANAHGJDNI_TypeDefinitionIndex = 91677;

class DHPBHHKHIGO_OCANAHGJDNI : public ::System::Object
{
public:
	::FFEIFLBGEEA* BOFPKCBHKPI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHPBHHKHIGO_OCANAHGJDNI__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask MPLAEDCFLIG(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + DHPBHHKHIGO_OCANAHGJDNI_MPLAEDCFLIG_OFFSET))(this, OMMEALOOOOD);
	}
};
