#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDEMJGKFLMJ;
class OOHIKDKFGFF;
namespace System { class String; }

#define AMBNKDFFEKK_CTOR_OFFSET UNITYSDK_OFFSET(0x15576530)

	class AMBNKDFFEKK : public ::System::Object
	{
	public:
		::System::String* CreatedAt; // 0x10
		::System::String* GeneratedBy; // 0x18
		::System::String* TaskId; // 0x20
		::System::String* OperationMode; // 0x28
		::OOHIKDKFGFF* Prompts; // 0x30
		::DDEMJGKFLMJ* Model; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBNKDFFEKK_CTOR_OFFSET))(this);
		}

	};
