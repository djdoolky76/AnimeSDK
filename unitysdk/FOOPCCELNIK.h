#pragma once
#include "unitysdk/unitysdk.h"
class PassAndKeywords;

#define FOOPCCELNIK_CTOR_OFFSET UNITYSDK_OFFSET(0x159093D0)
#define FOOPCCELNIK_EQUALS_OFFSET UNITYSDK_OFFSET(0x15909240)
#define FOOPCCELNIK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x159092F0)

inline static constexpr unsigned int FOOPCCELNIK_TypeDefinitionIndex = 47432;

	class FOOPCCELNIK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOPCCELNIK_CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::PassAndKeywords* a1, ::PassAndKeywords* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::PassAndKeywords*, ::PassAndKeywords*))((::PBYTE)hIl2Cpp + FOOPCCELNIK_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::PassAndKeywords* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::PassAndKeywords*))((::PBYTE)hIl2Cpp + FOOPCCELNIK_GETHASHCODE_OFFSET))(this, a1);
		}

	};
