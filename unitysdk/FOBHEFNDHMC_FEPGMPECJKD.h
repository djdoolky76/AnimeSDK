#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FIPBHKNPGHP.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOBHEFNDHMC_FEPGMPECJKD_HGCOAGDOGAF_OFFSET UNITYSDK_OFFSET(0x1E8B3D80)
#define FOBHEFNDHMC_FEPGMPECJKD__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B3D70)

inline static constexpr unsigned int FOBHEFNDHMC_FEPGMPECJKD_TypeDefinitionIndex = 94443;

class FOBHEFNDHMC_FEPGMPECJKD : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::FIPBHKNPGHP>* DBPJPBECDLH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBHEFNDHMC_FEPGMPECJKD__CTOR_OFFSET))(this);
	}

	::System::Void HGCOAGDOGAF(::System::Collections::Generic::List_1<::FIPBHKNPGHP>* LHHANKODLIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FIPBHKNPGHP>*))((::PBYTE)hIl2Cpp + FOBHEFNDHMC_FEPGMPECJKD_HGCOAGDOGAF_OFFSET))(this, LHHANKODLIG);
	}
};
