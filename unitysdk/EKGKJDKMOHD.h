#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GOMPCGKKCJE.h"
class EKGKJDKMOHD;
class FCOEMCEDLNL;

#define EKGKJDKMOHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1F121670)
#define EKGKJDKMOHD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F121680)
#define EKGKJDKMOHD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F121630)

inline static constexpr unsigned int EKGKJDKMOHD_TypeDefinitionIndex = 23777;

	class EKGKJDKMOHD : public ::GOMPCGKKCJE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGKJDKMOHD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EKGKJDKMOHD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EKGKJDKMOHD*))((::PBYTE)hIl2Cpp + EKGKJDKMOHD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EKGKJDKMOHD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EKGKJDKMOHD*))((::PBYTE)hIl2Cpp + EKGKJDKMOHD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
