#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIDPCOMKMKJ.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JDAMCKNPADM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDFE830)
#define JDAMCKNPADM_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1DDFE840)
#define JDAMCKNPADM_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1DDFED90)

inline static constexpr unsigned int JDAMCKNPADM_TypeDefinitionIndex = 43456;

	class JDAMCKNPADM : public ::KIDPCOMKMKJ
	{
	public:
		::System::Collections::Generic::List_1<::System::Single>* EMMEMAEJKAN; // 0x18
		::System::UInt32 NLLGCHPLDCG; // 0x20
		::System::Boolean JBBMHHEAIPK; // 0x24
		::System::Byte _padding0[0x3];
		::System::Single PGMIOKKLHIE; // 0x28
		::System::Int32 GAGEBMIOEGN; // 0x2C
		::System::Single HBDJCFFDGDD; // 0x30
		::System::Void _ctor(::System::Boolean a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + JDAMCKNPADM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAMCKNPADM_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JDAMCKNPADM_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
