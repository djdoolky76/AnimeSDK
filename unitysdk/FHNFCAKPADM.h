#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
class FHNFCAKPADM;
namespace System { class String; }

#define FHNFCAKPADM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDF14B0)
#define FHNFCAKPADM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDF1380)

	class FHNFCAKPADM : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* OKOKOAFPJBM; // 0x10
		::System::String* CMDBHDODLOE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNFCAKPADM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FHNFCAKPADM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FHNFCAKPADM*))((::PBYTE)hIl2Cpp + FHNFCAKPADM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
