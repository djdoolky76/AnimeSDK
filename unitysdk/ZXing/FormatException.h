#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/ReaderException.h"

#define ZXING_FORMATEXCEPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x17A82870)

namespace ZXing
{
	inline static constexpr unsigned int FormatException_TypeDefinitionIndex = 7009;

	class FormatException : public ::ZXing::ReaderException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_FORMATEXCEPTION_CTOR_OFFSET))(this);
		}

	};
}
