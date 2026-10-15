#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLGDGCPIHBP;

#define MGKENPKCFBA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C92AA50)
#define MGKENPKCFBA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C92AAD0)

	class MGKENPKCFBA : public ::System::Object
	{
	public:
		::FLGDGCPIHBP* JIIKAEMELPJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGKENPKCFBA_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGKENPKCFBA_CLEAR_OFFSET))(this);
		}

	};
