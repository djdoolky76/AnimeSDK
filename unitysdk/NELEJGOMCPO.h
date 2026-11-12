#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPNPHHIBPEK.h"

#define NELEJGOMCPO_CTOR_OFFSET UNITYSDK_OFFSET(0xC44B250)
#define NELEJGOMCPO_KPAOCJEJCNA_OFFSET UNITYSDK_OFFSET(0xC44B1F0)
#define NELEJGOMCPO_NPOFEKBLAIH_OFFSET UNITYSDK_OFFSET(0xC44B170)

inline static constexpr unsigned int NELEJGOMCPO_TypeDefinitionIndex = 74499;

	class NELEJGOMCPO : public ::JPNPHHIBPEK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NELEJGOMCPO_CTOR_OFFSET))(this);
		}

		::System::Void NPOFEKBLAIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NELEJGOMCPO_NPOFEKBLAIH_OFFSET))(this);
		}

		::System::Void KPAOCJEJCNA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NELEJGOMCPO_KPAOCJEJCNA_OFFSET))(this, a1);
		}

	};
