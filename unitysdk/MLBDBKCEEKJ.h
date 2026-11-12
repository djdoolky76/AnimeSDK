#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;

#define MLBDBKCEEKJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC260270)
#define MLBDBKCEEKJ_EXECUTE_OFFSET UNITYSDK_OFFSET(0xC260280)
#define MLBDBKCEEKJ_GDGLHDBAEED_OFFSET UNITYSDK_OFFSET(0xC260370)

inline static constexpr unsigned int MLBDBKCEEKJ_TypeDefinitionIndex = 79978;

	class MLBDBKCEEKJ : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		::System::Void _ctor(::HLJNBBHKKMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + MLBDBKCEEKJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBDBKCEEKJ_EXECUTE_OFFSET))(this);
		}

		::System::Void GDGLHDBAEED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBDBKCEEKJ_GDGLHDBAEED_OFFSET))(this);
		}

	};
