#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFMJMKKPMEH.h"
class FCOEMCEDLNL;
class LNKFLEEHJHH;

#define LNKFLEEHJHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E31C550)
#define LNKFLEEHJHH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E31C560)
#define LNKFLEEHJHH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E31C520)

inline static constexpr unsigned int LNKFLEEHJHH_TypeDefinitionIndex = 21879;

	class LNKFLEEHJHH : public ::CFMJMKKPMEH
	{
	public:
		::System::Single ONKBCNCDADJ; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNKFLEEHJHH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LNKFLEEHJHH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LNKFLEEHJHH*))((::PBYTE)hIl2Cpp + LNKFLEEHJHH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LNKFLEEHJHH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LNKFLEEHJHH*))((::PBYTE)hIl2Cpp + LNKFLEEHJHH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
