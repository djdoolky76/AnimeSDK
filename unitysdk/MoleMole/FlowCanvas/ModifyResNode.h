#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas { class ModifyItem; }

#define MOLEMOLE_FLOWCANVAS_MODIFYRESNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x139D2DC0)
#define MOLEMOLE_FLOWCANVAS_MODIFYRESNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x139D2E10)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ModifyResNode_TypeDefinitionIndex = 92541;

	class ModifyResNode
	{
	public:
		static ::System::Boolean* StaticGet_globalShowTips()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ModifyResNode_TypeDefinitionIndex)->GetStaticField(0x144B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_MODIFYRESNODE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Boolean isShowTips, ::MoleMole::FlowCanvas::ModifyItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::FlowCanvas::ModifyItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_MODIFYRESNODE_INVOKE_OFFSET))(this, isShowTips, item);
		}
	};
}
