#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MKFNBHDICNJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MKFNBHDICNJ_CLLOLCOPANA_NPEKEHAILJH_OFFSET UNITYSDK_OFFSET(0x11F56AB0)
#define MKFNBHDICNJ_CLLOLCOPANA__CTOR_OFFSET UNITYSDK_OFFSET(0x11F56AA0)

inline static constexpr unsigned int MKFNBHDICNJ_CLLOLCOPANA_TypeDefinitionIndex = 61328;

class MKFNBHDICNJ_CLLOLCOPANA : public ::System::Object
{
public:
	::MKFNBHDICNJ* KLHPEBKNIFB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* NFHMLIGMJIF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_CLLOLCOPANA__CTOR_OFFSET))(this);
	}

	::System::Void NPEKEHAILJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_CLLOLCOPANA_NPEKEHAILJH_OFFSET))(this);
	}
};
