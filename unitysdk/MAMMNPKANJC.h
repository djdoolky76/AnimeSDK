#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"

#define MAMMNPKANJC_CTOR_OFFSET UNITYSDK_OFFSET(0xC0B64A0)
#define MAMMNPKANJC__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0xC0B63C0)

inline static constexpr unsigned int MAMMNPKANJC_TypeDefinitionIndex = 61167;

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
