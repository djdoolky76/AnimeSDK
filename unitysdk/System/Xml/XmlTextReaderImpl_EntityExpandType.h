#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	enum class XmlTextReaderImpl_EntityExpandType : ::System::Int32
	{
		All = 0,
		OnlyGeneral = 1,
		OnlyCharacter = 2,
	};
}
