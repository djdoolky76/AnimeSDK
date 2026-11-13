#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class IJKJKBNNMBO;

#define IJKJKBNNMBO_CTOR_OFFSET UNITYSDK_OFFSET(0xC98EDE0)
#define IJKJKBNNMBO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0xC98EDF0)
#define IJKJKBNNMBO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0xC98EDB0)

inline static constexpr unsigned int IJKJKBNNMBO_TypeDefinitionIndex = 21832;

	class IJKJKBNNMBO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::Client::TextID EONCGACNBFG; // 0x18
		::System::Boolean IOBCIMIPEOM; // 0x28
		::System::Byte _padding0[0x7];
		::RPG::Client::TextID ONLODCLDLIO; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJKJKBNNMBO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IJKJKBNNMBO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IJKJKBNNMBO*))((::PBYTE)hIl2Cpp + IJKJKBNNMBO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IJKJKBNNMBO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IJKJKBNNMBO*))((::PBYTE)hIl2Cpp + IJKJKBNNMBO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
