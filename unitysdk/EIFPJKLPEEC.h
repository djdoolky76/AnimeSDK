#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PlayerModule; }

#define EIFPJKLPEEC_AHCOKGCOOHG_OFFSET UNITYSDK_OFFSET(0x154C4B10)
#define EIFPJKLPEEC_CTOR_OFFSET UNITYSDK_OFFSET(0x154C4BA0)
#define EIFPJKLPEEC_JDEEHBPNCPH_OFFSET UNITYSDK_OFFSET(0x154C49F0)

inline static constexpr unsigned int EIFPJKLPEEC_TypeDefinitionIndex = 81056;

	class EIFPJKLPEEC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFPJKLPEEC_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::GenderType JDEEHBPNCPH()
		{
			return ((::RPG::GameCore::GenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFPJKLPEEC_JDEEHBPNCPH_OFFSET))(this);
		}

		::RPG::Client::PlayerModule* AHCOKGCOOHG()
		{
			return ((::RPG::Client::PlayerModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFPJKLPEEC_AHCOKGCOOHG_OFFSET))(this);
		}

	};
