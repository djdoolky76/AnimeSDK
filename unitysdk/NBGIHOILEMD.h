#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/POJDLGMCOPA.h"
#include "unitysdk/FDDPPOELLBE.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NBGIHOILEMD_GODIADGPKDC_OFFSET UNITYSDK_OFFSET(0x1BF67E00)
#define NBGIHOILEMD__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF67CF0)

inline static constexpr unsigned int NBGIHOILEMD_TypeDefinitionIndex = 11366;

class NBGIHOILEMD : public ::POJDLGMCOPA
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* EOKBNIJNJAB; // 0x80

	::System::Void _ctor(::FDDPPOELLBE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FDDPPOELLBE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NBGIHOILEMD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* GODIADGPKDC()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGIHOILEMD_GODIADGPKDC_OFFSET))(this);
	}
};
