#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CONGPILMBPA.h"
class FCOEMCEDLNL;
class JEGCOJLAAOL;
class NFLCKKGCHMK;

#define NFLCKKGCHMK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D204540)
#define NFLCKKGCHMK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D204550)
#define NFLCKKGCHMK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2044E0)

inline static constexpr unsigned int NFLCKKGCHMK_TypeDefinitionIndex = 21064;

	class NFLCKKGCHMK : public ::CONGPILMBPA
	{
	public:
		::Il2CppArray<::JEGCOJLAAOL*>* LJOOHOPBAJJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFLCKKGCHMK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NFLCKKGCHMK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NFLCKKGCHMK*))((::PBYTE)hIl2Cpp + NFLCKKGCHMK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NFLCKKGCHMK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NFLCKKGCHMK*))((::PBYTE)hIl2Cpp + NFLCKKGCHMK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
