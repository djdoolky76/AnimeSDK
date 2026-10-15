#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class EKCDBPBNIEM;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }

#define EKCDBPBNIEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD66D10)
#define EKCDBPBNIEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD66AB0)

inline static constexpr unsigned int EKCDBPBNIEM_TypeDefinitionIndex = 22865;

	class EKCDBPBNIEM : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* COKBFAHFMPB; // 0x10
		::RPG::GameCore::DynamicFloat* PHPNFMOOFBK; // 0x18
		::RPG::GameCore::DynamicFloat* FJOGMCBIPGM; // 0x20
		::RPG::GameCore::DynamicFloat* GOICKEFFKNP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKCDBPBNIEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EKCDBPBNIEM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EKCDBPBNIEM*))((::PBYTE)hIl2Cpp + EKCDBPBNIEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
