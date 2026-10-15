#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"

#define MAMMNPKANJC_CTOR_OFFSET UNITYSDK_OFFSET(0xB854E90)
#define MAMMNPKANJC__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0xB854DB0)

	class MAMMNPKANJC : public ::RPG::Client::SyncCheckItemBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAMMNPKANJC_CTOR_OFFSET))(this);
		}

		::System::Boolean _DoCheckImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAMMNPKANJC__DOCHECKIMPL_OFFSET))(this);
		}

	};
