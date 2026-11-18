#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJCAAAAJKDF.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class HGAJKHIMKJP;
namespace MoleMole { class UIRoleEquipReplaceWidgetController; }

#define MOLEMOLE_UIEQUIPDEVELOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1800F0F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIEquipDevelopContext_TypeDefinitionIndex = 41310;

	class UIEquipDevelopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UIRoleEquipReplaceWidgetController* equipReplaceWidget; // 0x28
		::HGAJKHIMKJP* ItemDevelopData; // 0x30
		::System::Int32 CloseIndex; // 0x38
		::System::Boolean CloseOpenDialog; // 0x3C
		::System::Byte _padding0[0x3];
		::AJCAAAAJKDF Type; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
