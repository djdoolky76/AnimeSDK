#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define EKLFKCBAFJF_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x1354F320)
#define EKLFKCBAFJF_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x1354F330)
#define EKLFKCBAFJF_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1354F2A0)
#define EKLFKCBAFJF_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1354F260)
#define EKLFKCBAFJF__CTOR_OFFSET UNITYSDK_OFFSET(0x1354F2E0)

inline static constexpr unsigned int EKLFKCBAFJF_TypeDefinitionIndex = 60622;

class EKLFKCBAFJF
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* KOOIGKMODAG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLFKCBAFJF__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLFKCBAFJF_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLFKCBAFJF_ONDISABLE_OFFSET))(this);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLFKCBAFJF_ILHIIDBCNEC_OFFSET))(this);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLFKCBAFJF_KDOIBCBFBAG_OFFSET))(this);
	}
};
