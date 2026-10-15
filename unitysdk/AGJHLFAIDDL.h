#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MIBEBGCMPOL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AGJHLFAIDDL_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x1C88B170)
#define AGJHLFAIDDL_AONEONHEHNA_OFFSET UNITYSDK_OFFSET(0x1C88B2C0)
#define AGJHLFAIDDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C88B490)
#define AGJHLFAIDDL_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1C88B3F0)

	class AGJHLFAIDDL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MIBEBGCMPOL*>* CEHKIFGGMGI; // 0x10
		::System::Int32 FFNBLDFFMCN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJHLFAIDDL_CTOR_OFFSET))(this);
		}

		::MIBEBGCMPOL* ACMKLFOMPFC()
		{
			return ((::MIBEBGCMPOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJHLFAIDDL_ACMKLFOMPFC_OFFSET))(this);
		}

		::System::Void AONEONHEHNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJHLFAIDDL_AONEONHEHNA_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJHLFAIDDL_PJPFIHFAHGO_OFFSET))(this);
		}

	};
