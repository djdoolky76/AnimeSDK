#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_GENERALDETAILWITHTABCONTEXT_TABENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x14AEB9C0)

namespace MoleMole
{
	inline static constexpr unsigned int GeneralDetailWithTabContext_TabEntry_TypeDefinitionIndex = 48416;

	class GeneralDetailWithTabContext_TabEntry : public ::System::Object
	{
	public:
		::System::String* TabName; // 0x10
		::System::String* Content; // 0x18
		::System::String* ImagePath02; // 0x20
		::System::String* ImageNameTextKey02; // 0x28
		::System::String* ImagePath01; // 0x30
		::System::String* ContentTitle; // 0x38
		::System::String* ImagePath03; // 0x40
		::System::String* ImageNameTextKey03; // 0x48
		::System::String* ImageNameTextKey01; // 0x50
		::System::String* ContentSubTitle; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALDETAILWITHTABCONTEXT_TABENTRY__CTOR_OFFSET))(this);
		}
	};
}
