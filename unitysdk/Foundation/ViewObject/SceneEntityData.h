#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectInstanceSource.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/ValueType.h"

class EPJAODADCEA;

#define FOUNDATION_VIEWOBJECT_SCENEENTITYDATA_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x7253B0)
#define FOUNDATION_VIEWOBJECT_SCENEENTITYDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x725350)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int SceneEntityData_TypeDefinitionIndex = 58861;

	struct alignas(8) SceneEntityData
	{
		::EPJAODADCEA* ServerInfo; // 0x10
		::Foundation::ViewObject::ViewObjectHandle ViewObjectHandle; // 0x18
		::System::UInt64 CombineConfigID; // 0x28
		::Foundation::ViewObject::EViewObjectInstanceSource Source; // 0x30

		::System::UInt32 get_GroupId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SCENEENTITYDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::UInt32 get_ConfigId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SCENEENTITYDATA_GET_CONFIGID_OFFSET))(this);
		}
	};
}
