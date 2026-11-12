#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define ZXING_READEREXCEPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x209659C0)

namespace ZXing
{
	inline static constexpr unsigned int ReaderException_TypeDefinitionIndex = 7008;

	class ReaderException : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_READEREXCEPTION_CTOR_OFFSET))(this);
		}

	};
}
