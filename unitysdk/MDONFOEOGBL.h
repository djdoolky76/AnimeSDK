#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MDONFOEOGBL_GACJJBAHEDL.h"

#define MDONFOEOGBL_CIMKMBDNGIK_OFFSET UNITYSDK_OFFSET(0xC166350)
#define MDONFOEOGBL_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0xC1663B0)
#define MDONFOEOGBL_FHLALJENMHB_OFFSET UNITYSDK_OFFSET(0xC166370)
#define MDONFOEOGBL_JJDJLEFONFF_OFFSET UNITYSDK_OFFSET(0xC166360)

inline static constexpr unsigned int MDONFOEOGBL_TypeDefinitionIndex = 76178;

	class MDONFOEOGBL : public ::System::Object
	{
	public:
		static ::System::Boolean CIMKMBDNGIK()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MDONFOEOGBL_CIMKMBDNGIK_OFFSET))();
		}

		static ::System::Boolean JJDJLEFONFF()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MDONFOEOGBL_JJDJLEFONFF_OFFSET))();
		}

		static ::MDONFOEOGBL_GACJJBAHEDL FHLALJENMHB(::System::Int32 a1)
		{
			return ((::MDONFOEOGBL_GACJJBAHEDL(*)(::System::Int32))((::PBYTE)hIl2Cpp + MDONFOEOGBL_FHLALJENMHB_OFFSET))(a1);
		}

		static ::System::Void EGFCFCBHJJP(::System::Int32 a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + MDONFOEOGBL_EGFCFCBHJJP_OFFSET))(a1, a2);
		}

	};
