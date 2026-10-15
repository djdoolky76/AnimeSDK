#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	enum class XmlTextReaderImpl_ParsingMode : ::System::Int32
	{
		Full = 0,
		SkipNode = 1,
		SkipContent = 2,
	};
}
