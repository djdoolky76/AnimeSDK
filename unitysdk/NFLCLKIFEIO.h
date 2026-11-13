#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBGNKMMDBGD;

#define NFLCLKIFEIO_CTOR_OFFSET UNITYSDK_OFFSET(0x160A6260)
#define NFLCLKIFEIO_EXECUTE_OFFSET UNITYSDK_OFFSET(0x160A6270)

inline static constexpr unsigned int NFLCLKIFEIO_TypeDefinitionIndex = 38366;

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
