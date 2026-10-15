#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDFFHMDFALG;

#define OIGDMEDHHBK_CTOR_OFFSET UNITYSDK_OFFSET(0xBE8E7F0)
#define OIGDMEDHHBK_KEOKEELBKHI_OFFSET UNITYSDK_OFFSET(0xBE8E800)

	class OIGDMEDHHBK : public ::System::Object
	{
	public:
		::KDFFHMDFALG* KGCNPIEDOCA; // 0x10
		::System::Void _ctor(::KDFFHMDFALG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDFFHMDFALG*))((::PBYTE)hIl2Cpp + OIGDMEDHHBK_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean KEOKEELBKHI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGDMEDHHBK_KEOKEELBKHI_OFFSET))(this);
		}

	};
