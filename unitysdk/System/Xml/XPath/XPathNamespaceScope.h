#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::XPath
{
	enum class XPathNamespaceScope : ::System::Int32
	{
		All = 0,
		ExcludeXml = 1,
		Local = 2,
	};
}
