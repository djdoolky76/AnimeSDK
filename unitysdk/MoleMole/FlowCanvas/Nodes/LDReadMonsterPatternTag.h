#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDREADMONSTERPATTERNTAG_INVOKE_OFFSET UNITYSDK_OFFSET(0x180DEAE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREADMONSTERPATTERNTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x180DEBE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDReadMonsterPatternTag_TypeDefinitionIndex = 70346;

	class LDReadMonsterPatternTag
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADMONSTERPATTERNTAG__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* Invoke(::System::Int32 patternId)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADMONSTERPATTERNTAG_INVOKE_OFFSET))(this, patternId);
		}
	};
}
