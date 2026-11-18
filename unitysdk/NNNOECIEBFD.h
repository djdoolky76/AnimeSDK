#pragma once
#include "unitysdk/unitysdk.h"

class INapLevel_CommonStateChangeEffect;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NNNOECIEBFD_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0xE0AB6A0)
#define NNNOECIEBFD_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xE0AB5F0)
#define NNNOECIEBFD__CTOR_OFFSET UNITYSDK_OFFSET(0xE0AB660)

inline static constexpr unsigned int NNNOECIEBFD_TypeDefinitionIndex = 68051;

class NNNOECIEBFD
{
public:
	::System::Collections::Generic::List_1<::INapLevel_CommonStateChangeEffect*>* KIBFFMAALDK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNNOECIEBFD__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNNOECIEBFD_ONRECYCLE_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNNOECIEBFD_ANEOCOIFDDJ_OFFSET))(this);
	}
};
