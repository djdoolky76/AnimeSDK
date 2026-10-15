#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByCopyingBatchItem; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYCOPYINGBATCHITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA35C0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYCOPYINGBATCHITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA3490)

namespace RPG::GameCore
{
	class SetDynamicValueByCopyingBatchItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* FromDynamicKey; // 0x10
		::System::String* ToDynamicKey; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCOPYINGBATCHITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByCopyingBatchItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByCopyingBatchItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCOPYINGBATCHITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
