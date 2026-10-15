#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPNPHHIBPEK.h"
class MGAAIFCJDDL;

#define JBGIGLCBCFE_AGHABIKPPNO_OFFSET UNITYSDK_OFFSET(0x16560140)
#define JBGIGLCBCFE_CTOR_OFFSET UNITYSDK_OFFSET(0x1655FF80)
#define JBGIGLCBCFE_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0x165602F0)
#define JBGIGLCBCFE_KPAOCJEJCNA_OFFSET UNITYSDK_OFFSET(0x16560460)
#define JBGIGLCBCFE_NPOFEKBLAIH_OFFSET UNITYSDK_OFFSET(0x1655FF90)

inline static constexpr unsigned int JBGIGLCBCFE_TypeDefinitionIndex = 72420;

	class JBGIGLCBCFE : public ::JPNPHHIBPEK
	{
	public:
		::MGAAIFCJDDL* BIGJHPJGDNH; // 0x20
		::System::UInt32 IJFPHMMKJKC; // 0x28
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JBGIGLCBCFE_CTOR_OFFSET))(this, a1);
		}

		::System::Void NPOFEKBLAIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGIGLCBCFE_NPOFEKBLAIH_OFFSET))(this);
		}

		::System::Void AGHABIKPPNO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JBGIGLCBCFE_AGHABIKPPNO_OFFSET))(this, a1);
		}

		::System::Void EPJFIHHDMAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGIGLCBCFE_EPJFIHHDMAK_OFFSET))(this);
		}

		::System::Void KPAOCJEJCNA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JBGIGLCBCFE_KPAOCJEJCNA_OFFSET))(this, a1);
		}

	};
