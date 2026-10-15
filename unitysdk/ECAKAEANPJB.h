#pragma once
#include "unitysdk/unitysdk.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;

#define ECAKAEANPJB_CLEAR_OFFSET UNITYSDK_OFFSET(0x12D05B10)
#define ECAKAEANPJB_CTOR_OFFSET UNITYSDK_OFFSET(0x12D05B90)
#define ECAKAEANPJB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x12D059A0)
#define ECAKAEANPJB_PMBCMBBAJEE_OFFSET UNITYSDK_OFFSET(0x12D05640)

	class ECAKAEANPJB
	{
	public:
		::NDDFLGNNMDK* BJPFDPILDDK; // 0x28
		::PEEDLCHFAFL* FKGGBEAELPE; // 0x30
		::HIOEAKHGILF* GGKGFABFGFE; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECAKAEANPJB_CTOR_OFFSET))(this);
		}

		::System::Void PMBCMBBAJEE(::HIOEAKHGILF* a1, ::PEEDLCHFAFL* a2, ::NDDFLGNNMDK* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::PEEDLCHFAFL*, ::NDDFLGNNMDK*))((::PBYTE)hIl2Cpp + ECAKAEANPJB_PMBCMBBAJEE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ECAKAEANPJB_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECAKAEANPJB_CLEAR_OFFSET))(this);
		}

	};
