#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"
class DHFLEJMNGDL;

#define MIBEBGCMPOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAEC3B0)
#define MIBEBGCMPOL_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1DAEC350)

inline static constexpr unsigned int MIBEBGCMPOL_TypeDefinitionIndex = 44022;

	class MIBEBGCMPOL : public ::System::Object
	{
	public:
		::DHFLEJMNGDL* OCCGAEOOMCL; // 0x10
		::DHFLEJMNGDL* IHGFNHHFFPM; // 0x18
		::RPG::MVector2 ACGINICEHML; // 0x20
		::System::Single MMGHPIFEBJF; // 0x28
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
