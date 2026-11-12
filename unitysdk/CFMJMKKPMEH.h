#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JABEGCBNJCI.h"
class CFMJMKKPMEH;
class FCOEMCEDLNL;

#define CFMJMKKPMEH_CTOR_OFFSET UNITYSDK_OFFSET(0x1EDC8730)
#define CFMJMKKPMEH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EDC8740)
#define CFMJMKKPMEH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EDC85E0)

inline static constexpr unsigned int CFMJMKKPMEH_TypeDefinitionIndex = 21877;

	class CFMJMKKPMEH : public ::JABEGCBNJCI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFMJMKKPMEH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CFMJMKKPMEH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CFMJMKKPMEH*))((::PBYTE)hIl2Cpp + CFMJMKKPMEH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CFMJMKKPMEH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CFMJMKKPMEH*))((::PBYTE)hIl2Cpp + CFMJMKKPMEH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
