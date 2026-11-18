#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CJLIAOJCHIH;
class JFDMHLOBDGB;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17622740)

namespace MoleMole
{
	inline static constexpr unsigned int UIMedalSelectRowWidgetController_Context_TypeDefinitionIndex = 55650;

	class UIMedalSelectRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* onItemSelected; // 0x28
		::JFDMHLOBDGB* FriendSystemMedalDisplayData; // 0x30
		::CJLIAOJCHIH* medalFrameData; // 0x38
		::System::Int32 selectIndex; // 0x40
		::System::Boolean isSetGray; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
