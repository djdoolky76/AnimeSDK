#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class LevelSectionGroupData; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATELEVELSECTIONDATA_INVOKE_OFFSET UNITYSDK_OFFSET(0x1465BA00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATELEVELSECTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1465BB40)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCreateLevelSectionData_TypeDefinitionIndex = 77205;

	class LDCreateLevelSectionData
	{
	public:
		// static const ::System::String* DefaultSectionNam; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATELEVELSECTIONDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::LevelSectionGroupData* Invoke(::System::String* stageName, ::System::String* bornPos)
		{
			return ((::MoleMole::LevelSectionGroupData*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATELEVELSECTIONDATA_INVOKE_OFFSET))(this, stageName, bornPos);
		}
	};
}
