#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"

class OBKNEEOLOPB;
namespace MoleMole::FlowCanvas { class ModifyPropItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_MODIFYPROPNODE_GETCONFIGMAXVAL_OFFSET UNITYSDK_OFFSET(0x1B4AA760)
#define MOLEMOLE_FLOWCANVAS_MODIFYPROPNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B4AA5A0)
#define MOLEMOLE_FLOWCANVAS_MODIFYPROPNODE_MODIFYPROP_OFFSET UNITYSDK_OFFSET(0x1B4AA710)
#define MOLEMOLE_FLOWCANVAS_MODIFYPROPNODE_PREPROCESS_OFFSET UNITYSDK_OFFSET(0x1B4AA850)
#define MOLEMOLE_FLOWCANVAS_MODIFYPROPNODE_PROCESSHPDESC_OFFSET UNITYSDK_OFFSET(0x1B4AA800)
#define MOLEMOLE_FLOWCANVAS_MODIFYPROPNODE_PROCESSTEAMSTAMINA_OFFSET UNITYSDK_OFFSET(0x1B4AA7B0)
#define MOLEMOLE_FLOWCANVAS_MODIFYPROPNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4AA8A0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ModifyPropNode_TypeDefinitionIndex = 87713;

	class ModifyPropNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_MODIFYPROPNODE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::ModifyPropItem*>* properties)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::ModifyPropItem*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_MODIFYPROPNODE_INVOKE_OFFSET))(this, properties);
		}

		::System::Void ModifyProp(::MoleMole::FlowCanvas::ModifyPropItem* property)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::ModifyPropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_MODIFYPROPNODE_MODIFYPROP_OFFSET))(this, property);
		}

		::System::Single GetConfigMaxVal(::System::Int32 avatarTID, ::MoleMole::Config::BaseProperty prop)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_MODIFYPROPNODE_GETCONFIGMAXVAL_OFFSET))(this, avatarTID, prop);
		}

		::System::Void ProcessTeamStamina(::MoleMole::FlowCanvas::ModifyPropItem* property, ::OBKNEEOLOPB* model)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::ModifyPropItem*, ::OBKNEEOLOPB*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_MODIFYPROPNODE_PROCESSTEAMSTAMINA_OFFSET))(this, property, model);
		}

		::System::Void ProcessHPDesc(::MoleMole::FlowCanvas::ModifyPropItem* property)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::ModifyPropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_MODIFYPROPNODE_PROCESSHPDESC_OFFSET))(this, property);
		}

		::System::Boolean PreProcess(::MoleMole::FlowCanvas::ModifyPropItem* property, ::OBKNEEOLOPB* model)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::ModifyPropItem*, ::OBKNEEOLOPB*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_MODIFYPROPNODE_PREPROCESS_OFFSET))(this, property, model);
		}
	};
}
