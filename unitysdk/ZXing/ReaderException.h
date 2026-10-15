#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define ZXING_READEREXCEPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6B6280)

namespace ZXing
{
	class ReaderException : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_READEREXCEPTION_CTOR_OFFSET))(this);
		}

	};
}
