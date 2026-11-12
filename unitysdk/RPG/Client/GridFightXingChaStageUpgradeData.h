#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTXINGCHASTAGEUPGRADEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDD0E000)
#define RPG_CLIENT_GRIDFIGHTXINGCHASTAGEUPGRADEDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xDD0E020)
#define RPG_CLIENT_GRIDFIGHTXINGCHASTAGEUPGRADEDATA_GET_TEXT_OFFSET UNITYSDK_OFFSET(0xDD0E010)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightXingChaStageUpgradeData_TypeDefinitionIndex = 67250;

	class GridFightXingChaStageUpgradeData : public ::System::Object
	{
	public:
		::System::String* _Text_k__BackingField; // 0x10
		::System::String* _IconPath_k__BackingField; // 0x18
		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTXINGCHASTAGEUPGRADEDATA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_Text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTXINGCHASTAGEUPGRADEDATA_GET_TEXT_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTXINGCHASTAGEUPGRADEDATA_GET_ICONPATH_OFFSET))(this);
		}

	};
}
