#pragma once
#include "unitysdk/unitysdk.h"

#define ZXING_BARCODEWRITER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6A37E0)

namespace ZXing
{
	inline static constexpr unsigned int BarcodeWriter_TypeDefinitionIndex = 6971;

	class BarcodeWriter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_BARCODEWRITER_CTOR_OFFSET))(this);
		}

	};
}
