#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDKNLNLGODN.h"

#define BLKFJOLACOB_CTOR_OFFSET UNITYSDK_OFFSET(0xC40AF10)
#define BLKFJOLACOB_ONSTARTLOADING_OFFSET UNITYSDK_OFFSET(0xC40AEC0)

inline static constexpr unsigned int BLKFJOLACOB_TypeDefinitionIndex = 62453;

	class BLKFJOLACOB : public ::JDKNLNLGODN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLKFJOLACOB_CTOR_OFFSET))(this);
		}

		::System::Void OnStartLoading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLKFJOLACOB_ONSTARTLOADING_OFFSET))(this);
		}

	};
