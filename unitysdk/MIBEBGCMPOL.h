#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"
class DHFLEJMNGDL;

#define MIBEBGCMPOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8FCA90)
#define MIBEBGCMPOL_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1C8FCA30)

inline static constexpr unsigned int MIBEBGCMPOL_TypeDefinitionIndex = 43041;

	class MIBEBGCMPOL : public ::System::Object
	{
	public:
		::DHFLEJMNGDL* IHGFNHHFFPM; // 0x10
		::DHFLEJMNGDL* OCCGAEOOMCL; // 0x18
		::System::Single MMGHPIFEBJF; // 0x20
		::RPG::MVector2 ACGINICEHML; // 0x24
		::System::Int32 LINGKAJDNCH; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBEBGCMPOL_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBEBGCMPOL_KHGIKBFDLFB_OFFSET))(this);
		}

	};
