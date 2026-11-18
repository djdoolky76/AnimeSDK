#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/OOHBEPCMHMC.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_UITABBTNROLEROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x164C7730)

namespace MoleMole
{
	inline static constexpr unsigned int UITabBtnRoleRowContext_TypeDefinitionIndex = 91171;

	class UITabBtnRoleRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* tipText; // 0x28
		::MoleMole::Battle::Entity* ShowEntity; // 0x30
		::System::Boolean isShowTip; // 0x38
		::System::Boolean isShowScoreIcon; // 0x39
		::System::Boolean showbackStage; // 0x3A
		::System::Byte _padding0[0x1];
		::OOHBEPCMHMC scoreLevel; // 0x3C
		::System::Int32 avatarID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTNROLEROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
