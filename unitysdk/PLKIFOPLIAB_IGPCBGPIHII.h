#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFNMPBPNBIF;
namespace System { class String; }

#define PLKIFOPLIAB_IGPCBGPIHII_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7F4A10)

	class PLKIFOPLIAB_IGPCBGPIHII : public ::System::Object
	{
	public:
		::System::String* OLOIFNNLKJP; // 0x10
		::IFNMPBPNBIF* NPJPBJGNNHO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLKIFOPLIAB_IGPCBGPIHII_CTOR_OFFSET))(this);
		}

	};
