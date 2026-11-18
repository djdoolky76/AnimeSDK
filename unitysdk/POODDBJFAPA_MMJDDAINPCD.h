#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define POODDBJFAPA_MMJDDAINPCD_EBPKPMKIKNA_OFFSET UNITYSDK_OFFSET(0x119A65A0)
#define POODDBJFAPA_MMJDDAINPCD__CTOR_OFFSET UNITYSDK_OFFSET(0x119A6590)

inline static constexpr unsigned int POODDBJFAPA_MMJDDAINPCD_TypeDefinitionIndex = 90260;

class POODDBJFAPA_MMJDDAINPCD : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* AKLLPHFMJGN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POODDBJFAPA_MMJDDAINPCD__CTOR_OFFSET))(this);
	}

	::System::Void EBPKPMKIKNA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POODDBJFAPA_MMJDDAINPCD_EBPKPMKIKNA_OFFSET))(this);
	}
};
