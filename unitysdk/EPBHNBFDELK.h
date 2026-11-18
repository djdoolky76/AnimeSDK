#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KKPMOLPLCAD.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EPBHNBFDELK_HEKAMBDEHJM_OFFSET UNITYSDK_OFFSET(0xBB2D7F0)
#define EPBHNBFDELK__CTOR_OFFSET UNITYSDK_OFFSET(0xBB2D760)

inline static constexpr unsigned int EPBHNBFDELK_TypeDefinitionIndex = 49653;

class EPBHNBFDELK : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::KKPMOLPLCAD>*>* OAJILAOAOLB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBHNBFDELK__CTOR_OFFSET))(this);
	}

	::System::Void HEKAMBDEHJM(::System::UInt32 KEHNCKBIBFA, ::KKPMOLPLCAD HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::KKPMOLPLCAD))((::PBYTE)hIl2Cpp + EPBHNBFDELK_HEKAMBDEHJM_OFFSET))(this, KEHNCKBIBFA, HMMMOCJAEOA);
	}
};
