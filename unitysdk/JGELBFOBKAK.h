#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JGELBFOBKAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C131460)
#define JGELBFOBKAK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C131420)

inline static constexpr unsigned int JGELBFOBKAK_TypeDefinitionIndex = 37398;

	class JGELBFOBKAK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGELBFOBKAK_CTOR_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGELBFOBKAK_INITIALIZE_OFFSET))(this);
		}

	};
