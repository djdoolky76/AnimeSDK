#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IIJLENHLAIJ.h"

#define FLELKICOANA_CTOR_OFFSET UNITYSDK_OFFSET(0x1582F720)
#define FLELKICOANA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1582F760)

	class FLELKICOANA : public ::IIJLENHLAIJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLELKICOANA_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLELKICOANA_KPJGDHLENIP_OFFSET))(this);
		}

	};
