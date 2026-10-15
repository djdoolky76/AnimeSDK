#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CACNLLMKCPD.h"

#define PNFHKPJGEHM_COMPARE_OFFSET UNITYSDK_OFFSET(0xC337DB0)
#define PNFHKPJGEHM_CTOR_OFFSET UNITYSDK_OFFSET(0xC337E10)

inline static constexpr unsigned int PNFHKPJGEHM_TypeDefinitionIndex = 52875;

	class PNFHKPJGEHM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFHKPJGEHM_CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::CACNLLMKCPD a1, ::CACNLLMKCPD a2)
		{
			return ((::System::Int32(*)(::PVOID, ::CACNLLMKCPD, ::CACNLLMKCPD))((::PBYTE)hIl2Cpp + PNFHKPJGEHM_COMPARE_OFFSET))(this, a1, a2);
		}

	};
