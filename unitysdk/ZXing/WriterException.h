#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define ZXING_WRITEREXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x44334A0)
#define ZXING_WRITEREXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x4433560)
#define ZXING_WRITEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x44334F0)

namespace ZXing
{
	inline static constexpr unsigned int WriterException_TypeDefinitionIndex = 18949;

	class WriterException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* B083BE7841B347C4, ::System::Exception* AE84D0AE9687FCC7)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + ZXING_WRITEREXCEPTION__CTOR_OFFSET))(this, B083BE7841B347C4, AE84D0AE9687FCC7);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_WRITEREXCEPTION__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::String* B083BE7841B347C4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_WRITEREXCEPTION__CTOR_2_OFFSET))(this, B083BE7841B347C4);
		}
	};
}
