#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNCOPNHONHO;

#define PNLLCFEFEDE_CTOR_OFFSET UNITYSDK_OFFSET(0xC34D600)
#define PNLLCFEFEDE_EXECUTE_OFFSET UNITYSDK_OFFSET(0xC34D610)

inline static constexpr unsigned int PNLLCFEFEDE_TypeDefinitionIndex = 76822;

	class PNLLCFEFEDE : public ::System::Object
	{
	public:
		::MNCOPNHONHO* PDENFEFCAGN; // 0x10
		::System::Void _ctor(::MNCOPNHONHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNCOPNHONHO*))((::PBYTE)hIl2Cpp + PNLLCFEFEDE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLLCFEFEDE_EXECUTE_OFFSET))(this);
		}

	};
