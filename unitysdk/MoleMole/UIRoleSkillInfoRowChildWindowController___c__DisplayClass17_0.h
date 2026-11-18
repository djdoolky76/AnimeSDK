#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PEBJBODDHCN;
namespace System { class String; }

#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15D506F0)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___C__DISPLAYCLASS17_0__SHOWSKILLPASSIVEVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x15D50700)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSkillInfoRowChildWindowController___c__DisplayClass17_0_TypeDefinitionIndex = 72172;

	class UIRoleSkillInfoRowChildWindowController___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::PEBJBODDHCN* template_; // 0x10
		::System::Int32 level; // 0x18
		::System::Int32 index; // 0x1C
		::System::Boolean isSimple; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::String* _ShowSkillPassiveView_b__0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___C__DISPLAYCLASS17_0__SHOWSKILLPASSIVEVIEW_B__0_OFFSET))(this);
		}
	};
}
