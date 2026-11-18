#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFKKEPALCJA.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class NBDLJECLJJO;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIAVATARGESTUREVIDEODISPLAYPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A22B2C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarGestureVideoDisplayPopWindowController_Context_TypeDefinitionIndex = 57237;

	class UIAvatarGestureVideoDisplayPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::NBDLJECLJJO* GoodsData; // 0x28
		::System::Action_1<::System::Object*>* OnPurchase; // 0x30
		::System::Boolean DoubleConfirm; // 0x38
		::System::Byte _padding0[0x3];
		::EFKKEPALCJA Mode; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARGESTUREVIDEODISPLAYPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
