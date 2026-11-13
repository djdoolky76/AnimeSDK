#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPNPHHIBPEK.h"

#define JHDECAOFJEC_AGHABIKPPNO_OFFSET UNITYSDK_OFFSET(0x19363080)
#define JHDECAOFJEC_CTOR_OFFSET UNITYSDK_OFFSET(0x19363020)
#define JHDECAOFJEC_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0x19363130)
#define JHDECAOFJEC_KPAOCJEJCNA_OFFSET UNITYSDK_OFFSET(0x19363180)
#define JHDECAOFJEC_NPOFEKBLAIH_OFFSET UNITYSDK_OFFSET(0x19363030)

inline static constexpr unsigned int JHDECAOFJEC_TypeDefinitionIndex = 74511;

	class JHDECAOFJEC : public ::JPNPHHIBPEK
	{
	public:
		::System::Single OCONDDLOJAD; // 0x20
		::System::Single NNNLKJLPJCD; // 0x24
		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JHDECAOFJEC_CTOR_OFFSET))(this, a1);
		}

		::System::Void NPOFEKBLAIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDECAOFJEC_NPOFEKBLAIH_OFFSET))(this);
		}

		::System::Void AGHABIKPPNO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JHDECAOFJEC_AGHABIKPPNO_OFFSET))(this, a1);
		}

		::System::Void EPJFIHHDMAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDECAOFJEC_EPJFIHHDMAK_OFFSET))(this);
		}

		::System::Void KPAOCJEJCNA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JHDECAOFJEC_KPAOCJEJCNA_OFFSET))(this, a1);
		}

	};
