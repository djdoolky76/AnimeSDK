#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJDNGKLPAFB_IOCMNFAEFLL.h"
class AkRoomPortal;
class KJDNGKLPAFB;

#define KJDNGKLPAFB_DPAMJEGFAHB_CTOR_OFFSET UNITYSDK_OFFSET(0xB43BCB0)
#define KJDNGKLPAFB_DPAMJEGFAHB_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xB43D290)

inline static constexpr unsigned int KJDNGKLPAFB_DPAMJEGFAHB_TypeDefinitionIndex = 57239;

	class KJDNGKLPAFB_DPAMJEGFAHB : public ::KJDNGKLPAFB_IOCMNFAEFLL
	{
	public:
		::AkRoomPortal* OGLEOCGLDFH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_DPAMJEGFAHB_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON(::KJDNGKLPAFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJDNGKLPAFB*))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_DPAMJEGFAHB_DAMDMJJKLON_OFFSET))(this, a1);
		}

	};
