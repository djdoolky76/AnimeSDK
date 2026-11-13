#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTROLESKILLSTYLEREMARKITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F2BC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleSkillStyleRemarkItem_TypeDefinitionIndex = 66445;

	class GridFightRoleSkillStyleRemarkItem : public ::System::Object
	{
	public:
		::System::String* TitleText; // 0x10
		::System::String* Text; // 0x18
		::System::Boolean IsActive; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLSTYLEREMARKITEM_CTOR_OFFSET))(this);
		}

	};
}
