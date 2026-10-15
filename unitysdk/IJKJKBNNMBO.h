#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class IJKJKBNNMBO;

#define IJKJKBNNMBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CF18D90)
#define IJKJKBNNMBO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CF18DA0)
#define IJKJKBNNMBO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CF18D60)

inline static constexpr unsigned int IJKJKBNNMBO_TypeDefinitionIndex = 21487;

	class IJKJKBNNMBO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IOBCIMIPEOM; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::Client::TextID EONCGACNBFG; // 0x20
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
