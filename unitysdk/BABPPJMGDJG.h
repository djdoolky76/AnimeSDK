#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/PreValidationFailureReason.h"
#include "unitysdk/System/Object.h"
class EHGLAELHDEE;
namespace System { class String; }

#define BABPPJMGDJG_CTOR_OFFSET UNITYSDK_OFFSET(0x16CDE750)
#define BABPPJMGDJG_DPFOPKIHKNO_OFFSET UNITYSDK_OFFSET(0x16CDE650)
#define BABPPJMGDJG_EJGGGBLELAC_OFFSET UNITYSDK_OFFSET(0x16CDE6D0)
#define BABPPJMGDJG_NGPHCMLEIJA_OFFSET UNITYSDK_OFFSET(0x16CDE540)

inline static constexpr unsigned int BABPPJMGDJG_TypeDefinitionIndex = 79946;

	class BABPPJMGDJG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABPPJMGDJG_CTOR_OFFSET))(this);
		}

		static ::EHGLAELHDEE* NGPHCMLEIJA(::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason a1)
		{
			return ((::EHGLAELHDEE*(*)(::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason))((::PBYTE)hIl2Cpp + BABPPJMGDJG_NGPHCMLEIJA_OFFSET))(a1);
		}

		static ::EHGLAELHDEE* EJGGGBLELAC()
		{
			return ((::EHGLAELHDEE*(*)())((::PBYTE)hIl2Cpp + BABPPJMGDJG_EJGGGBLELAC_OFFSET))();
		}

		static ::System::Void DPFOPKIHKNO(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BABPPJMGDJG_DPFOPKIHKNO_OFFSET))(a1);
		}

	};
