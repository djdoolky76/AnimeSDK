#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BHJIOOHIECD_POLISH_OFFSET UNITYSDK_OFFSET(0x1691B700)
#define BHJIOOHIECD_RECYCLE_OFFSET UNITYSDK_OFFSET(0x1691B890)
#define BHJIOOHIECD__CTOR_OFFSET UNITYSDK_OFFSET(0x1691B590)

inline static constexpr unsigned int BHJIOOHIECD_TypeDefinitionIndex = 82733;

class BHJIOOHIECD : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* JKMPBEMLFNB; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* KGDOACOIHJN; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* HAIAPFINLMM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHJIOOHIECD__CTOR_OFFSET))(this);
	}

	::System::Void Polish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHJIOOHIECD_POLISH_OFFSET))(this);
	}

	::System::Void Recycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHJIOOHIECD_RECYCLE_OFFSET))(this);
	}
};
