#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes { class EntityData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_FLOWCANVAS_NODES_ENTITYSAVEDATAMAP_GETVALUE_OFFSET UNITYSDK_OFFSET(0x139D2F30)
#define MOLEMOLE_FLOWCANVAS_NODES_ENTITYSAVEDATAMAP_SETVALUE_OFFSET UNITYSDK_OFFSET(0x139D3020)
#define MOLEMOLE_FLOWCANVAS_NODES_ENTITYSAVEDATAMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x139D3100)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int EntitySaveDataMap_TypeDefinitionIndex = 65301;

	class EntitySaveDataMap
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::FlowCanvas::Nodes::EntityData*>* root; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ENTITYSAVEDATAMAP__CTOR_OFFSET))(this);
		}

		::MoleMole::FlowCanvas::Nodes::EntityData* GetValue(::System::String* key)
		{
			return ((::MoleMole::FlowCanvas::Nodes::EntityData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ENTITYSAVEDATAMAP_GETVALUE_OFFSET))(this, key);
		}

		::System::Boolean SetValue(::System::String* key, ::MoleMole::FlowCanvas::Nodes::EntityData* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::FlowCanvas::Nodes::EntityData*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ENTITYSAVEDATAMAP_SETVALUE_OFFSET))(this, key, value);
		}
	};
}
