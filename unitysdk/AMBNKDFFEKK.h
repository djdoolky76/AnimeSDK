#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDEMJGKFLMJ;
class OOHIKDKFGFF;
namespace System { class String; }

#define AMBNKDFFEKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1556ADD0)

inline static constexpr unsigned int AMBNKDFFEKK_TypeDefinitionIndex = 48935;

	class AMBNKDFFEKK : public ::System::Object
	{
	public:
		::System::String* GeneratedBy; // 0x10
		::System::String* OperationMode; // 0x18
		::OOHIKDKFGFF* Prompts; // 0x20
		::DDEMJGKFLMJ* Model; // 0x28
		::System::String* CreatedAt; // 0x30
		::System::String* TaskId; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBNKDFFEKK_CTOR_OFFSET))(this);
		}

	};
