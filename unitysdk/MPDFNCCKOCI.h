#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIDPCOMKMKJ.h"
class BOGCBDLBHFK;

#define MPDFNCCKOCI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8FF9A0)
#define MPDFNCCKOCI_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1C8FF9B0)
#define MPDFNCCKOCI_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1C8FFCA0)

inline static constexpr unsigned int MPDFNCCKOCI_TypeDefinitionIndex = 42478;

	class MPDFNCCKOCI : public ::KIDPCOMKMKJ
	{
	public:
		::BOGCBDLBHFK* KAKEIDJDNHJ; // 0x18
		::System::Single PGMIOKKLHIE; // 0x20
		::System::Single HBDJCFFDGDD; // 0x24
		::System::Void _ctor(::BOGCBDLBHFK* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::BOGCBDLBHFK*, ::System::Single))((::PBYTE)hIl2Cpp + MPDFNCCKOCI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDFNCCKOCI_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MPDFNCCKOCI_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
