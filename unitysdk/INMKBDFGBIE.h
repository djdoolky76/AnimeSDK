#pragma once
#include "unitysdk/unitysdk.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;

#define INMKBDFGBIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5F7350)
#define INMKBDFGBIE__CREATETRIGGER_OFFSET UNITYSDK_OFFSET(0x1A5F7600)
#define INMKBDFGBIE__REMOVETRIGGER_OFFSET UNITYSDK_OFFSET(0x1A5F7B40)
#define INMKBDFGBIE__TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1A5F7550)

inline static constexpr unsigned int INMKBDFGBIE_TypeDefinitionIndex = 79402;

	class INMKBDFGBIE
	{
	public:
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x40
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + INMKBDFGBIE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INMKBDFGBIE__TEARDOWN_OFFSET))(this);
		}

		::System::Void _CreateTrigger(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + INMKBDFGBIE__CREATETRIGGER_OFFSET))(this, a1);
		}

		::System::Void _RemoveTrigger(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + INMKBDFGBIE__REMOVETRIGGER_OFFSET))(this, a1);
		}

	};
