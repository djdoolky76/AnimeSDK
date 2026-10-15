#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::IO { class Stream; }

#define DJJLNLJPGMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5F2870)
#define DJJLNLJPGMJ_HMBFDGFCAFE_OFFSET UNITYSDK_OFFSET(0x1C5F2880)

	class DJJLNLJPGMJ : public ::System::Object
	{
	public:
		::System::IO::Stream* NHAILIKEHMJ; // 0x10
		::System::Void _ctor(::System::IO::Stream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + DJJLNLJPGMJ_CTOR_OFFSET))(this, a1);
		}

		::System::IO::Stream* HMBFDGFCAFE()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJLNLJPGMJ_HMBFDGFCAFE_OFFSET))(this);
		}

	};
