#pragma once
#include "unitysdk/unitysdk.h"

#define ZXING_BARCODEWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2FC3C0)

namespace ZXing
{
	inline static constexpr unsigned int BarcodeWriter_TypeDefinitionIndex = 18601;

	class BarcodeWriter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_BARCODEWRITER__CTOR_OFFSET))(this);
		}
	};
}
