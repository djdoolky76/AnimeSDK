#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"
namespace RPG::GameCore { class AdventureCharacterFloatingConfig; }
namespace System { class String; }

#define JADLPDDFNKI_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x165331E0)
#define JADLPDDFNKI_CTOR_OFFSET UNITYSDK_OFFSET(0x16533280)
#define JADLPDDFNKI_FHGHOENCEJL_OFFSET UNITYSDK_OFFSET(0x16533120)

inline static constexpr unsigned int JADLPDDFNKI_TypeDefinitionIndex = 47951;

	class JADLPDDFNKI : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::System::String* BJCBMNHOAGO; // 0x20
		::System::String* PPADBOEOBBB; // 0x28
		::RPG::GameCore::AdventureCharacterFloatingConfig* EABKOHGCHFP; // 0x30
		::System::Boolean OLKJHCDPIPB; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JADLPDDFNKI_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventureCharacterFloatingConfig* FHGHOENCEJL()
		{
			return ((::RPG::GameCore::AdventureCharacterFloatingConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + JADLPDDFNKI_FHGHOENCEJL_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JADLPDDFNKI_CLJEBKODGHK_OFFSET))(this);
		}

	};
