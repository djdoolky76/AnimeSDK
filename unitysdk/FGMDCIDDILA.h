#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIBMLOEAJII.h"
class FCOEMCEDLNL;
class FGMDCIDDILA;

#define FGMDCIDDILA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDC1110)
#define FGMDCIDDILA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDC1120)
#define FGMDCIDDILA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDC10E0)

inline static constexpr unsigned int FGMDCIDDILA_TypeDefinitionIndex = 21554;

	class FGMDCIDDILA : public ::MIBMLOEAJII
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMDCIDDILA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FGMDCIDDILA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FGMDCIDDILA*))((::PBYTE)hIl2Cpp + FGMDCIDDILA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FGMDCIDDILA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FGMDCIDDILA*))((::PBYTE)hIl2Cpp + FGMDCIDDILA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
