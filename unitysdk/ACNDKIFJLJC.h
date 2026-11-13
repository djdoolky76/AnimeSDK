#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ACNDKIFJLJC_CTOR_OFFSET UNITYSDK_OFFSET(0x18295C60)

inline static constexpr unsigned int ACNDKIFJLJC_TypeDefinitionIndex = 66980;

	class ACNDKIFJLJC : public ::System::Object
	{
	public:
		::System::UInt32 IHHNLLAJAGB; // 0x10
		::System::Boolean ELBPNDIENDL; // 0x14
		::System::Byte _padding0[0x3];
		::System::UInt32 ONIAFLNBNPN; // 0x18
		::System::UInt32 KGHDNKONLNH; // 0x1C
		::System::UInt32 MDNAGANGNKK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACNDKIFJLJC_CTOR_OFFSET))(this);
		}

	};
