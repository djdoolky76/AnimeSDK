#pragma once
#include "unitysdk/unitysdk.h"

#define ILJBKKCHDDP_BKHKBEJCGJK_OFFSET UNITYSDK_OFFSET(0x164AD3C0)
#define ILJBKKCHDDP_CTOR_OFFSET UNITYSDK_OFFSET(0x164AD490)
#define ILJBKKCHDDP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164AD420)

inline static constexpr unsigned int ILJBKKCHDDP_TypeDefinitionIndex = 73896;

	class ILJBKKCHDDP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJBKKCHDDP_CTOR_OFFSET))(this);
		}

		::System::Void BKHKBEJCGJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJBKKCHDDP_BKHKBEJCGJK_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJBKKCHDDP_DISPOSE_OFFSET))(this);
		}

	};
