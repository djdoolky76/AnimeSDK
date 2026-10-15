#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPFAEIJOIOD;
class MOMODPMFIKE;

#define ALLLIOHNNHJ_HFGLFNLPIPI_OFFSET UNITYSDK_OFFSET(0x15564120)
#define ALLLIOHNNHJ_KONHPICIELO_OFFSET UNITYSDK_OFFSET(0x155641E0)

inline static constexpr unsigned int ALLLIOHNNHJ_TypeDefinitionIndex = 54023;

	class ALLLIOHNNHJ : public ::System::Object
	{
	public:
		static ::DPFAEIJOIOD* HFGLFNLPIPI(::MOMODPMFIKE* a1)
		{
			return ((::DPFAEIJOIOD*(*)(::MOMODPMFIKE*))((::PBYTE)hIl2Cpp + ALLLIOHNNHJ_HFGLFNLPIPI_OFFSET))(a1);
		}

		static ::System::Void KONHPICIELO(::MOMODPMFIKE* a1, ::DPFAEIJOIOD* a2)
		{
			return ((::System::Void(*)(::MOMODPMFIKE*, ::DPFAEIJOIOD*))((::PBYTE)hIl2Cpp + ALLLIOHNNHJ_KONHPICIELO_OFFSET))(a1, a2);
		}

	};
