#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BABNOKHOBCF;
class MNCOPNHONHO;

#define JOCPCDHLPCK_CTOR_OFFSET UNITYSDK_OFFSET(0xB29EF80)
#define JOCPCDHLPCK_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB29EF90)

	class JOCPCDHLPCK : public ::System::Object
	{
	public:
		::MNCOPNHONHO* PDENFEFCAGN; // 0x10
		::System::Void _ctor(::BABNOKHOBCF* a1, ::MNCOPNHONHO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BABNOKHOBCF*, ::MNCOPNHONHO*))((::PBYTE)hIl2Cpp + JOCPCDHLPCK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCPCDHLPCK_EXECUTE_OFFSET))(this);
		}

	};
