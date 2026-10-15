#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFINOGCFBMJ.h"

#define KPMFMFCBPIG_CTOR_OFFSET UNITYSDK_OFFSET(0xB5BB240)

inline static constexpr unsigned int KPMFMFCBPIG_TypeDefinitionIndex = 54286;

	class KPMFMFCBPIG : public ::BFINOGCFBMJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMFMFCBPIG_CTOR_OFFSET))(this);
		}

	};
