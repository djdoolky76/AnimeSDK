#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNMJHHJGIAF;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace RPG::GameCore { class UIImageNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GBJHJNNIFMB_CTOR_OFFSET UNITYSDK_OFFSET(0x159513C0)

	class GBJHJNNIFMB : public ::System::Object
	{
	public:
		::System::String* JKMABBEGEAH; // 0x10
		::RPG::GameCore::TurnBasedModifierInstance* ILIIOLJMKME; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::UIImageNode*>* BEAGALJGPHI; // 0x20
		::System::Collections::Generic::List_1<::CNMJHHJGIAF*>* BNCNCFMAMIG; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJHJNNIFMB_CTOR_OFFSET))(this);
		}

	};
