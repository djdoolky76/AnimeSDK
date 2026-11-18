#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define FKPDHCMBLIE_PHJCMJPCGEB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x11D81140)
#define FKPDHCMBLIE_PHJCMJPCGEB__CTOR_OFFSET UNITYSDK_OFFSET(0x11D81090)

inline static constexpr unsigned int FKPDHCMBLIE_PHJCMJPCGEB_TypeDefinitionIndex = 72821;

class FKPDHCMBLIE_PHJCMJPCGEB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* KCIENCHHHHD; // 0x10
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* CLGEMFIJLOP; // 0x18
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PKKDBMNCBKL; // 0x20
	::System::Int32 GBLDCEJIECA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPDHCMBLIE_PHJCMJPCGEB__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPDHCMBLIE_PHJCMJPCGEB_PHOADBJGFBE_OFFSET))(this);
	}
};
