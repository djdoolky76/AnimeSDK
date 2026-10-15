#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEKIILDAMOL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EEKIILDAMOL_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0x1C5FB4C0)
#define EEKIILDAMOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FB530)

inline static constexpr unsigned int EEKIILDAMOL_TypeDefinitionIndex = 36205;

	class EEKIILDAMOL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* CDAAHGAIJMP; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* BFMIOOIDNJM; // 0x18
		::System::Int32 BDGECKGNFFM; // 0x20
		::System::Boolean MBCNGGNENHJ; // 0x24
		::System::Boolean PONDPEDABAF; // 0x25
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEKIILDAMOL_CTOR_OFFSET))(this);
		}

		::System::Void ALJIOCDBMKO(::EEKIILDAMOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEKIILDAMOL*))((::PBYTE)hIl2Cpp + EEKIILDAMOL_ALJIOCDBMKO_OFFSET))(this, a1);
		}

	};
