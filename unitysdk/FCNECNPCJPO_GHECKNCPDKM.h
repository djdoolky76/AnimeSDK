#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FCNECNPCJPO_GHECKNCPDKM__CTOR_OFFSET UNITYSDK_OFFSET(0x14195EF0)

inline static constexpr unsigned int FCNECNPCJPO_GHECKNCPDKM_TypeDefinitionIndex = 53294;

class FCNECNPCJPO_GHECKNCPDKM : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* FNICDIFGCHO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNECNPCJPO_GHECKNCPDKM__CTOR_OFFSET))(this);
	}
};
