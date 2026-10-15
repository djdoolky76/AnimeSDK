#pragma once
#include "unitysdk/unitysdk.h"

#define CBPHAOJJAMH_CTOR_OFFSET UNITYSDK_OFFSET(0xC4BA1A0)
#define CBPHAOJJAMH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4BA0F0)
#define CBPHAOJJAMH__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xC4BA040)

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
