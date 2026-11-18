#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml { class XmlReader; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class XmlReaderIterator_Node; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_GOTONEXTCHILD_OFFSET UNITYSDK_OFFSET(0x1DE77CB0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_GOTOROOT_OFFSET UNITYSDK_OFFSET(0x1DE76140)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_READTEXTWITHINELEMENT_OFFSET UNITYSDK_OFFSET(0x1DE84160)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_SKIPCURRENTCHILDTREE_OFFSET UNITYSDK_OFFSET(0x1DE77230)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_VISITCURRENT_OFFSET UNITYSDK_OFFSET(0x1DE771B0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE75F80)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int XmlReaderIterator_TypeDefinitionIndex = 31168;

	class XmlReaderIterator : public ::System::Object
	{
	public:
		::System::Xml::XmlReader* reader; // 0x10
		::System::Boolean currentElementVisited; // 0x18

		::System::Void _ctor(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR__CTOR_OFFSET))(this, reader);
		}

		::System::Boolean GoToRoot(::System::String* tagName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_GOTOROOT_OFFSET))(this, tagName);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node* VisitCurrent()
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_VISITCURRENT_OFFSET))(this);
		}

		::System::Boolean GoToNextChild(::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_GOTONEXTCHILD_OFFSET))(this, node);
		}

		::System::Void SkipCurrentChildTree(::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node* node)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_SKIPCURRENTCHILDTREE_OFFSET))(this, node);
		}

		::System::String* ReadTextWithinElement()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_XMLREADERITERATOR_READTEXTWITHINELEMENT_OFFSET))(this);
		}
	};
}
