#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class AMODCFDGAKB;

#define MOLEMOLE_ITEMDEPRECATEDDIALOGMESSAGE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1246A7E0)
#define MOLEMOLE_ITEMDEPRECATEDDIALOGMESSAGE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1246A820)
#define MOLEMOLE_ITEMDEPRECATEDDIALOGMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1246A7F0)

namespace MoleMole
{
	inline static constexpr unsigned int ItemDeprecatedDialogMessage_TypeDefinitionIndex = 83781;

	class ItemDeprecatedDialogMessage : public ::MoleMole::DisplayMessageBase
	{
	public:
		::AMODCFDGAKB* _oldItem; // 0x28
		::AMODCFDGAKB* _newItem; // 0x30

		::System::Void _ctor(::AMODCFDGAKB* oldItem, ::AMODCFDGAKB* newItem)
		{
			return ((::System::Void(*)(::PVOID, ::AMODCFDGAKB*, ::AMODCFDGAKB*))((::PBYTE)hIl2Cpp + MOLEMOLE_ITEMDEPRECATEDDIALOGMESSAGE__CTOR_OFFSET))(this, oldItem, newItem);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ITEMDEPRECATEDDIALOGMESSAGE_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ITEMDEPRECATEDDIALOGMESSAGE_ONPROCESS_OFFSET))(this);
		}
	};
}
