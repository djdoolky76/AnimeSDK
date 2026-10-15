#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBGNKMMDBGD;

#define NFLCLKIFEIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C765A00)
#define NFLCLKIFEIO_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C765A10)

inline static constexpr unsigned int NFLCLKIFEIO_TypeDefinitionIndex = 37438;

	class NFLCLKIFEIO : public ::System::Object
	{
	public:
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x10
		::System::Void _ctor(::PBGNKMMDBGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + NFLCLKIFEIO_CTOR_OFFSET))(this, a1);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFLCLKIFEIO_EXECUTE_OFFSET))(this);
		}

	};
