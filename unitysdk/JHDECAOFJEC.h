#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPNPHHIBPEK.h"

#define JHDECAOFJEC_AGHABIKPPNO_OFFSET UNITYSDK_OFFSET(0xB1A3F20)
#define JHDECAOFJEC_CTOR_OFFSET UNITYSDK_OFFSET(0xB1A3EC0)
#define JHDECAOFJEC_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0xB1A3FD0)
#define JHDECAOFJEC_KPAOCJEJCNA_OFFSET UNITYSDK_OFFSET(0xB1A4020)
#define JHDECAOFJEC_NPOFEKBLAIH_OFFSET UNITYSDK_OFFSET(0xB1A3ED0)

inline static constexpr unsigned int JHDECAOFJEC_TypeDefinitionIndex = 72432;

	class JHDECAOFJEC : public ::JPNPHHIBPEK
	{
	public:
		::System::Single NNNLKJLPJCD; // 0x20
		::System::Single OCONDDLOJAD; // 0x24
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
