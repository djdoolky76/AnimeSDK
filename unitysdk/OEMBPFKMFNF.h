#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OEMBPFKMFNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D261B20)

inline static constexpr unsigned int OEMBPFKMFNF_TypeDefinitionIndex = 15470;

	class OEMBPFKMFNF : public ::System::Object
	{
	public:
		::System::UInt32 JECHEKNENCD; // 0x10
		::System::UInt32 DKELEKMGOFA; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMBPFKMFNF_CTOR_OFFSET))(this);
		}

	};
