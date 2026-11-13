#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComicDessertFeverStyle.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CJGONIGMDJC;
class FCOEMCEDLNL;

#define CJGONIGMDJC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB71410)
#define CJGONIGMDJC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EB71430)
#define CJGONIGMDJC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EB713C0)

inline static constexpr unsigned int CJGONIGMDJC_TypeDefinitionIndex = 21900;

	class CJGONIGMDJC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single CDHNAMIOIMH; // 0x18
		::RPG::GameCore::ComicDessertFeverStyle GJBPNHAMAKO; // 0x1C
		::System::Single IEHPFADHJFD; // 0x20
		::System::Single EAEOAIDPIDB; // 0x24
		::System::Int32 JMJBLGPEEGG; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGONIGMDJC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CJGONIGMDJC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CJGONIGMDJC*))((::PBYTE)hIl2Cpp + CJGONIGMDJC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CJGONIGMDJC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CJGONIGMDJC*))((::PBYTE)hIl2Cpp + CJGONIGMDJC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
