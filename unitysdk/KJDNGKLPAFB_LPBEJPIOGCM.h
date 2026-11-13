#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJDNGKLPAFB_IOCMNFAEFLL.h"
class AkRoom;
class KJDNGKLPAFB;

#define KJDNGKLPAFB_LPBEJPIOGCM_CTOR_OFFSET UNITYSDK_OFFSET(0x19F02C60)
#define KJDNGKLPAFB_LPBEJPIOGCM_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x19F07420)

inline static constexpr unsigned int KJDNGKLPAFB_LPBEJPIOGCM_TypeDefinitionIndex = 58465;

	class KJDNGKLPAFB_LPBEJPIOGCM : public ::KJDNGKLPAFB_IOCMNFAEFLL
	{
	public:
		::AkRoom* KLKGIPOGJBB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_LPBEJPIOGCM_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON(::KJDNGKLPAFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJDNGKLPAFB*))((::PBYTE)hIl2Cpp + KJDNGKLPAFB_LPBEJPIOGCM_DAMDMJJKLON_OFFSET))(this, a1);
		}

	};
