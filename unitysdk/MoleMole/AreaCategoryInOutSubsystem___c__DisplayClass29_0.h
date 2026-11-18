#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/SceneConfigRuntimeDataArea.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LNEOFHJCAMI.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0xFA856D0)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM___C__DISPLAYCLASS29_0__GETAREABYPOSITIONASYNC_B__0_OFFSET UNITYSDK_OFFSET(0xFA856E0)

namespace MoleMole
{
	inline static constexpr unsigned int AreaCategoryInOutSubsystem___c__DisplayClass29_0_TypeDefinitionIndex = 60550;

	class AreaCategoryInOutSubsystem___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::SceneConfigRuntimeDataArea>* areas; // 0x10
		::System::Threading::CancellationToken cancellationToken; // 0x18
		::UnityEngine::Vector3 position; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::LNEOFHJCAMI _GetAreaByPositionAsync_b__0()
		{
			return ((::LNEOFHJCAMI(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM___C__DISPLAYCLASS29_0__GETAREABYPOSITIONASYNC_B__0_OFFSET))(this);
		}
	};
}
