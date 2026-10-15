#pragma once
#include "unitysdk/unitysdk.h"

#define CBPHAOJJAMH_CTOR_OFFSET UNITYSDK_OFFSET(0xC4B2D20)
#define CBPHAOJJAMH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4B2C70)
#define CBPHAOJJAMH__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xC4B2BC0)

inline static constexpr unsigned int CBPHAOJJAMH_TypeDefinitionIndex = 54030;

	class CBPHAOJJAMH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBPHAOJJAMH_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBPHAOJJAMH__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBPHAOJJAMH_DISPOSE_OFFSET))(this);
		}

	};
