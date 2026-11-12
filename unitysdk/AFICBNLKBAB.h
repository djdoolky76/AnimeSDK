#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDLEIHJGDAP.h"
namespace System { class String; }

#define AFICBNLKBAB_CTOR_OFFSET UNITYSDK_OFFSET(0xD5BED90)
#define AFICBNLKBAB_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xD5BE620)
#define AFICBNLKBAB_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xD5BE6B0)

inline static constexpr unsigned int AFICBNLKBAB_TypeDefinitionIndex = 62487;

	class AFICBNLKBAB : public ::KDLEIHJGDAP
	{
	public:
		::System::String* CBKHOKHCDEN; // 0x20
		::System::Int32 MPCCEKCBPLD; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFICBNLKBAB_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFICBNLKBAB_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AFICBNLKBAB_LJOLGCNKIEH_OFFSET))(this, a1);
		}

	};
