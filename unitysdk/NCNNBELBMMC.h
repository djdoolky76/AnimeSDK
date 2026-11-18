#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CPIOFALHLMD;
class FEADJAKGAJB;
class GBJONOMPCPF;
class PPDNMFONAEH;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NCNNBELBMMC_AGNJIDFLFNL_OFFSET UNITYSDK_OFFSET(0x120F4D70)
#define NCNNBELBMMC_GEENNJAGDIE_OFFSET UNITYSDK_OFFSET(0x120F46D0)
#define NCNNBELBMMC_HBBCGKLLDBN_OFFSET UNITYSDK_OFFSET(0x120F4C00)
#define NCNNBELBMMC__CTOR_OFFSET UNITYSDK_OFFSET(0x120F4470)

inline static constexpr unsigned int NCNNBELBMMC_TypeDefinitionIndex = 45095;

class NCNNBELBMMC : public ::System::Object
{
public:
	::FEADJAKGAJB* OJINAOFDBGA; // 0x10
	::System::Collections::Generic::List_1<::CPIOFALHLMD*>* ELKIHBGFALL; // 0x18
	::GBJONOMPCPF* IKDHEHGIMLM; // 0x20
	::PPDNMFONAEH* FFKOCFJFKAJ; // 0x28
	::System::Int32 BBIEPEHAKAE; // 0x30

	::System::Void _ctor(::PPDNMFONAEH* FFKOCFJFKAJ)
	{
		return ((::System::Void(*)(::PVOID, ::PPDNMFONAEH*))((::PBYTE)hIl2Cpp + NCNNBELBMMC__CTOR_OFFSET))(this, FFKOCFJFKAJ);
	}

	::System::Void HBBCGKLLDBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCNNBELBMMC_HBBCGKLLDBN_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::CPIOFALHLMD*>* AGNJIDFLFNL()
	{
		return ((::System::Collections::Generic::List_1<::CPIOFALHLMD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCNNBELBMMC_AGNJIDFLFNL_OFFSET))(this);
	}

	::System::Void GEENNJAGDIE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCNNBELBMMC_GEENNJAGDIE_OFFSET))(this);
	}
};
