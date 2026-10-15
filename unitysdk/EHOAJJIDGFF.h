#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DEPCKFHMMHD.h"
class KHNFFHCLLIF;

#define EHOAJJIDGFF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x154B93D0)
#define EHOAJJIDGFF_CTOR_OFFSET UNITYSDK_OFFSET(0x154BA990)

	class EHOAJJIDGFF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOAJJIDGFF_CTOR_OFFSET))(this);
		}

		::KHNFFHCLLIF* BPLPBPMEODA(::DEPCKFHMMHD a1)
		{
			return ((::KHNFFHCLLIF*(*)(::PVOID, ::DEPCKFHMMHD))((::PBYTE)hIl2Cpp + EHOAJJIDGFF_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
