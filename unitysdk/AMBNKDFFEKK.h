#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDEMJGKFLMJ;
class OOHIKDKFGFF;
namespace System { class String; }

#define AMBNKDFFEKK_CTOR_OFFSET UNITYSDK_OFFSET(0x163E6560)

inline static constexpr unsigned int AMBNKDFFEKK_TypeDefinitionIndex = 49994;

	class AMBNKDFFEKK : public ::System::Object
	{
	public:
		::System::String* CreatedAt; // 0x10
		::OOHIKDKFGFF* Prompts; // 0x18
		::DDEMJGKFLMJ* Model; // 0x20
		::System::String* TaskId; // 0x28
		::System::String* GeneratedBy; // 0x30
		::System::String* OperationMode; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBNKDFFEKK_CTOR_OFFSET))(this);
		}

	};
