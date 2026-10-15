#pragma once
#include "unitysdk/unitysdk.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;

#define ECAKAEANPJB_CLEAR_OFFSET UNITYSDK_OFFSET(0x12D00D90)
#define ECAKAEANPJB_CTOR_OFFSET UNITYSDK_OFFSET(0x12D00E10)
#define ECAKAEANPJB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x12D00C20)
#define ECAKAEANPJB_PMBCMBBAJEE_OFFSET UNITYSDK_OFFSET(0x12D008C0)

inline static constexpr unsigned int ECAKAEANPJB_TypeDefinitionIndex = 77093;

	class ECAKAEANPJB
	{
	public:
		::HIOEAKHGILF* GGKGFABFGFE; // 0x28
		::PEEDLCHFAFL* FKGGBEAELPE; // 0x30
		::NDDFLGNNMDK* BJPFDPILDDK; // 0x38
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
