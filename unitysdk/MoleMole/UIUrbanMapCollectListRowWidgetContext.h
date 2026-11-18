#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIURBANMAPCOLLECTLISTROWWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x156392C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapCollectListRowWidgetContext_TypeDefinitionIndex = 38697;

	class UIUrbanMapCollectListRowWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Func_1<::System::Boolean>* GetProgressActive; // 0x28
		::System::String* Icon; // 0x30
		::System::String* DescText; // 0x38
		::System::Int32 SpecialId; // 0x40
		::System::Int32 LeftNum; // 0x44
		::System::Int32 RightNum; // 0x48
		::UnityEngine::Color LeftNumColor; // 0x4C
		::System::Boolean ProgressShowKMB; // 0x5C
		::System::Boolean NumLocalization; // 0x5D
		::System::Boolean ShowZenkovItemPop; // 0x5E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPCOLLECTLISTROWWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
