#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;

#define HEFOKDNCBLN_CTOR_OFFSET UNITYSDK_OFFSET(0x16B93B60)
#define HEFOKDNCBLN_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16B93B70)
#define HEFOKDNCBLN_GDGLHDBAEED_OFFSET UNITYSDK_OFFSET(0x16B93C60)

inline static constexpr unsigned int HEFOKDNCBLN_TypeDefinitionIndex = 79977;

	class HEFOKDNCBLN : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		::System::Void _ctor(::HLJNBBHKKMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + HEFOKDNCBLN_CTOR_OFFSET))(this, a1);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEFOKDNCBLN_EXECUTE_OFFSET))(this);
		}

		::System::Void GDGLHDBAEED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEFOKDNCBLN_GDGLHDBAEED_OFFSET))(this);
		}

	};
