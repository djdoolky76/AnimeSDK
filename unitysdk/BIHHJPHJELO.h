#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::IO { class Stream; }

#define BIHHJPHJELO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5BF490)
#define BIHHJPHJELO_HMBFDGFCAFE_OFFSET UNITYSDK_OFFSET(0x1C5BF4A0)
#define BIHHJPHJELO_JDEMEDDGEPM_OFFSET UNITYSDK_OFFSET(0x1C5BF4E0)

	class BIHHJPHJELO : public ::System::Object
	{
	public:
		::System::IO::Stream* NHAILIKEHMJ; // 0x10
		::System::Void _ctor(::System::IO::Stream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + BIHHJPHJELO_CTOR_OFFSET))(this, a1);
		}

		::System::IO::Stream* HMBFDGFCAFE()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHHJPHJELO_HMBFDGFCAFE_OFFSET))(this);
		}

		::System::Void JDEMEDDGEPM(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BIHHJPHJELO_JDEMEDDGEPM_OFFSET))(this, a1);
		}

	};
