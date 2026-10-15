#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BDLOBCFIEOO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C575860)

inline static constexpr unsigned int BDLOBCFIEOO_TypeDefinitionIndex = 36455;

	class BDLOBCFIEOO : public ::System::Object
	{
	public:
		::System::UInt32 LNKODNKMEEM; // 0x10
		::System::UInt32 KGCFBNPIFNH; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLOBCFIEOO_CTOR_OFFSET))(this);
		}

	};
