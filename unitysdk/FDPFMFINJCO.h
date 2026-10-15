#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FDPFMFINJCO_CTOR_OFFSET UNITYSDK_OFFSET(0x156D7900)

inline static constexpr unsigned int FDPFMFINJCO_TypeDefinitionIndex = 67555;

	class FDPFMFINJCO : public ::System::Object
	{
	public:
		::System::Int32 NPHAJEKCBKF; // 0x10
		::System::Int32 BDJDAOGDBDD; // 0x14
		::System::Int32 ALOPEGJPAKK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPFMFINJCO_CTOR_OFFSET))(this);
		}

	};
