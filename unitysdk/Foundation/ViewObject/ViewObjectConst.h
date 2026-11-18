#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTCONST_ISDYNAMICCONFIGID_OFFSET UNITYSDK_OFFSET(0xBB7BF40)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectConst_TypeDefinitionIndex = 78361;

	class ViewObjectConst : public ::System::Object
	{
	public:
		// static const ::MoleMole::SuperDebug_LogModule LogModule = 0x1; // 0x0
		// static const ::MoleMole::SuperDebug_LogModule DebugLogModule = 0x1; // 0x0
		// static const ::MoleMole::SuperDebug_LogModule DebugDetailLogModule = 0x1; // 0x0
		// static const ::MoleMole::SuperDebug_LogModule GroupHandleLog = 0x1; // 0x0
		// static const ::System::UInt32 EmptyGroupID = 0x0; // 0x0
		// static const ::System::UInt32 InvalidMemberId = 0x7FFFFFFF; // 0x0
		// static const ::System::UInt32 GlobalGroupID = 0xFFFFFFFF; // 0x0
		// static const ::System::UInt32 DynamicConfigIdStart = 0x186A0; // 0x0
		// static const ::System::UInt32 GenericGroupDynamicMonsterConfigIdStart = 0x2711; // 0x0
		// static const ::System::UInt32 GenericGroupDynamicGadgetConfigIdStart = 0x4E21; // 0x0
		// static const ::System::UInt32 GenericGroupDynamicNpcConfigIdStart = 0x7531; // 0x0
		// static const ::System::UInt32 GenericGroupDynamicConfigIdCapacity = 0x270F; // 0x0

		static ::System::Boolean IsDynamicConfigId(::System::UInt32 configId)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTCONST_ISDYNAMICCONFIGID_OFFSET))(configId);
		}
	};
}
