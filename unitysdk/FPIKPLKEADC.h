#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/ReservedObjectPoolDataHandle.h"
#include "unitysdk/System/Nullable_1.h"

namespace Foundation { class ReservedObjectPool; }
namespace MoleMole::Config { class HollowNapEffectConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FPIKPLKEADC_CLLPBGEFFIJ_OFFSET UNITYSDK_OFFSET(0x1411A090)
#define FPIKPLKEADC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14119ED0)
#define FPIKPLKEADC_PEANHEDIDDG_OFFSET UNITYSDK_OFFSET(0x14119F90)
#define FPIKPLKEADC__CTOR_OFFSET UNITYSDK_OFFSET(0x14119F80)

inline static constexpr unsigned int FPIKPLKEADC_TypeDefinitionIndex = 75317;

class FPIKPLKEADC : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* KDGNEJFENOD; // 0x10
	::Foundation::ReservedObjectPool* MHEAKELFONF; // 0x18
	::System::String* NCHCMKEAHCD; // 0x20
	::System::String* GNHLENAMCED; // 0x28
	::MoleMole::Config::HollowNapEffectConfig* OAIDHFOBKKO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIKPLKEADC__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIKPLKEADC_DISPOSE_OFFSET))(this);
	}

	::Foundation::ReservedObjectPoolDataHandle PEANHEDIDDG()
	{
		return ((::Foundation::ReservedObjectPoolDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIKPLKEADC_PEANHEDIDDG_OFFSET))(this);
	}

	::Foundation::ReservedObjectPool* CLLPBGEFFIJ(::System::Nullable_1<::System::Object*> KGNCCBKIHJE)
	{
		return ((::Foundation::ReservedObjectPool*(*)(::PVOID, ::System::Nullable_1<::System::Object*>))((::PBYTE)hIl2Cpp + FPIKPLKEADC_CLLPBGEFFIJ_OFFSET))(this, KGNCCBKIHJE);
	}
};
