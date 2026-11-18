#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class KOIDMLPJGML;
namespace MoleMole { class UIUrbanMapCollectListRowWidgetContext; }
namespace MoleMole { class UIUrbanMapExploreListRowContext; }
namespace MoleMole { class UIUrbanMapRightListRowNormalContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
template <typename T> class JIOLFCAGOFH_1;

#define MOLEMOLE_UIURBANMAPRIGHTLISTROWSCROLLVIEWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x164CFB70)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightListRowScrollViewContext_TypeDefinitionIndex = 58310;

	class UIUrbanMapRightListRowScrollViewContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::JIOLFCAGOFH_1<::System::Collections::Generic::IList_1<::KOIDMLPJGML*>*>* RewardList; // 0x28
		::JIOLFCAGOFH_1<::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>*>* NormalList; // 0x30
		::System::String* TitleTextKey; // 0x38
		::System::String* FeatureUnlockTextKey; // 0x40
		::Foundation::AssetPath DecoImage; // 0x48
		::JIOLFCAGOFH_1<::System::Collections::Generic::IList_1<::MoleMole::UIUrbanMapCollectListRowWidgetContext*>*>* Todo2List; // 0x58
		::JIOLFCAGOFH_1<::System::Collections::Generic::IList_1<::MoleMole::UIUrbanMapCollectListRowWidgetContext*>*>* TodoList; // 0x60
		::System::String* DescTextKey; // 0x68
		::JIOLFCAGOFH_1<::System::Collections::Generic::IList_1<::MoleMole::UIUrbanMapExploreListRowContext*>*>* ExploreTodoList; // 0x70
		::System::String* TitleRawText; // 0x78
		::System::Boolean HideBg; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTROWSCROLLVIEWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
