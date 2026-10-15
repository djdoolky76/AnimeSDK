#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIDPCOMKMKJ.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NOBFIICALJM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9751A0)
#define NOBFIICALJM_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1C9751B0)
#define NOBFIICALJM_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1C975740)

	class NOBFIICALJM : public ::KIDPCOMKMKJ
	{
	public:
		::System::Collections::Generic::List_1<::System::Single>* EMMEMAEJKAN; // 0x18
		::System::Single HBDJCFFDGDD; // 0x20
		::System::UInt32 NLLGCHPLDCG; // 0x24
		::System::Boolean JBBMHHEAIPK; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 GAGEBMIOEGN; // 0x2C
		::System::Single PGMIOKKLHIE; // 0x30
		::System::Void _ctor(::System::Boolean a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + NOBFIICALJM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBFIICALJM_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NOBFIICALJM_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
