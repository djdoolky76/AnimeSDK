#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	enum class XmlTextWriter_NamespaceState : ::System::Int32
	{
		Uninitialized = 0,
		NotDeclaredButInScope = 1,
		DeclaredButNotWrittenOut = 2,
		DeclaredAndWrittenOut = 3,
	};
}
