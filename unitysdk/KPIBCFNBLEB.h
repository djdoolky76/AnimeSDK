#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KPIBCFNBLEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6375A0)

inline static constexpr unsigned int KPIBCFNBLEB_TypeDefinitionIndex = 44703;

	class KPIBCFNBLEB : public ::System::Object
	{
	public:
		::System::Single NDDCBCPDAJE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPIBCFNBLEB_CTOR_OFFSET))(this);
		}

	};
