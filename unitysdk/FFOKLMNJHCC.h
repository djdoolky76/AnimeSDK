#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class FFOKLMNJHCC;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define FFOKLMNJHCC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFC44F0)
#define FFOKLMNJHCC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DFC4500)
#define FFOKLMNJHCC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DFC44C0)

inline static constexpr unsigned int FFOKLMNJHCC_TypeDefinitionIndex = 21796;

	class FFOKLMNJHCC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* IOPKGDPHPJN; // 0x18
		::RPG::GameCore::DynamicString* HCKELNILFPJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOKLMNJHCC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FFOKLMNJHCC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FFOKLMNJHCC*))((::PBYTE)hIl2Cpp + FFOKLMNJHCC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FFOKLMNJHCC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FFOKLMNJHCC*))((::PBYTE)hIl2Cpp + FFOKLMNJHCC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
