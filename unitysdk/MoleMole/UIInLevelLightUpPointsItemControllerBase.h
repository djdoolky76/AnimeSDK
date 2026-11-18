#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

#define MOLEMOLE_UIINLEVELLIGHTUPPOINTSITEMCONTROLLERBASE_DOREFRESHITEMSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x18C86730)
#define MOLEMOLE_UIINLEVELLIGHTUPPOINTSITEMCONTROLLERBASE_HANDLESHOWSTATEANIM_OFFSET UNITYSDK_OFFSET(0x18C86800)
#define MOLEMOLE_UIINLEVELLIGHTUPPOINTSITEMCONTROLLERBASE_INIT_OFFSET UNITYSDK_OFFSET(0x18C86380)
#define MOLEMOLE_UIINLEVELLIGHTUPPOINTSITEMCONTROLLERBASE_PGDLKCNFKEL_OFFSET UNITYSDK_OFFSET(0x18C870B0)
#define MOLEMOLE_UIINLEVELLIGHTUPPOINTSITEMCONTROLLERBASE_PLAYMAXANIM_OFFSET UNITYSDK_OFFSET(0x18C863D0)
#define MOLEMOLE_UIINLEVELLIGHTUPPOINTSITEMCONTROLLERBASE_PLAYNOTMAXANIM_OFFSET UNITYSDK_OFFSET(0x18C86540)
#define MOLEMOLE_UIINLEVELLIGHTUPPOINTSITEMCONTROLLERBASE_REFRESHITEMSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x18C866B0)
#define MOLEMOLE_UIINLEVELLIGHTUPPOINTSITEMCONTROLLERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x18C87050)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelLightUpPointsItemControllerBase_TypeDefinitionIndex = 79626;

	class UIInLevelLightUpPointsItemControllerBase : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Int32 _index; // 0x2C8
		::System::Boolean _isLightUp; // 0x2CC
		::System::Byte _padding0[0x3];
		::Foundation::Coroutine::CoroutineHandle _playLoopCoroutineHandle; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLIGHTUPPOINTSITEMCONTROLLERBASE__CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLIGHTUPPOINTSITEMCONTROLLERBASE_INIT_OFFSET))(this, index);
		}

		::System::Void PlayMaxAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLIGHTUPPOINTSITEMCONTROLLERBASE_PLAYMAXANIM_OFFSET))(this);
		}

		::System::Void PlayNotMaxAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLIGHTUPPOINTSITEMCONTROLLERBASE_PLAYNOTMAXANIM_OFFSET))(this);
		}

		::System::Void RefreshItemShowState(::System::Int32 curPoint, ::System::Boolean forceRefresh, ::System::Boolean ignoreAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLIGHTUPPOINTSITEMCONTROLLERBASE_REFRESHITEMSHOWSTATE_OFFSET))(this, curPoint, forceRefresh, ignoreAnimation);
		}

		::System::Void DoRefreshItemShowState(::System::Boolean isLightUp, ::System::Boolean forceRefresh, ::System::Boolean ignoreAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLIGHTUPPOINTSITEMCONTROLLERBASE_DOREFRESHITEMSHOWSTATE_OFFSET))(this, isLightUp, forceRefresh, ignoreAnimation);
		}

		::System::Void HandleShowStateAnim(::System::Boolean ignoreAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLIGHTUPPOINTSITEMCONTROLLERBASE_HANDLESHOWSTATEANIM_OFFSET))(this, ignoreAnimation);
		}

		::System::Void PGDLKCNFKEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELLIGHTUPPOINTSITEMCONTROLLERBASE_PGDLKCNFKEL_OFFSET))(this);
		}
	};
}
