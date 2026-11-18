#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class FAKLNMJEGOJ;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
template <typename T> class DFDEIDBBGHG_1;

#define MOLEMOLE_ZENKOVGEMDEBUFFSELECTPOPSHOW_GET_ISBLOCKCENTER_OFFSET UNITYSDK_OFFSET(0x170DDCD0)
#define MOLEMOLE_ZENKOVGEMDEBUFFSELECTPOPSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x170DDCC0)
#define MOLEMOLE_ZENKOVGEMDEBUFFSELECTPOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x170DDD40)
#define MOLEMOLE_ZENKOVGEMDEBUFFSELECTPOPSHOW_ONSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x170DDF80)
#define MOLEMOLE_ZENKOVGEMDEBUFFSELECTPOPSHOW_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x170DDCE0)
#define MOLEMOLE_ZENKOVGEMDEBUFFSELECTPOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x170DDC70)
#define MOLEMOLE_ZENKOVGEMDEBUFFSELECTPOPSHOW___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x170DE1C0)

namespace MoleMole
{
	inline static constexpr unsigned int ZenkovGemDebuffSelectPopShow_TypeDefinitionIndex = 80929;

	class ZenkovGemDebuffSelectPopShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::DFDEIDBBGHG_1<::FAKLNMJEGOJ*>* _itemList; // 0x28
		::System::Action_1<::System::Int32>* OnSelect; // 0x30
		::System::Action* OnCancel; // 0x38
		::System::Boolean _isSelected; // 0x40
		::System::Byte _padding0[0x3];
		::System::UInt32 rid; // 0x44

		::System::Void _ctor(::DFDEIDBBGHG_1<::FAKLNMJEGOJ*>* itemList, ::System::Boolean isSelected, ::System::UInt32 rid)
		{
			return ((::System::Void(*)(::PVOID, ::DFDEIDBBGHG_1<::FAKLNMJEGOJ*>*, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVGEMDEBUFFSELECTPOPSHOW__CTOR_OFFSET))(this, itemList, isSelected, rid);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVGEMDEBUFFSELECTPOPSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Boolean get_IsBlockCenter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVGEMDEBUFFSELECTPOPSHOW_GET_ISBLOCKCENTER_OFFSET))(this);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVGEMDEBUFFSELECTPOPSHOW_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVGEMDEBUFFSELECTPOPSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Void OnSelectIndex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVGEMDEBUFFSELECTPOPSHOW_ONSELECTINDEX_OFFSET))(this, index);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVGEMDEBUFFSELECTPOPSHOW___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
