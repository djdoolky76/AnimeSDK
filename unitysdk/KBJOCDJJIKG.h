#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FormatString.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KBJOCDJJIKG;
namespace RPG::GameCore { class TargetEvaluator; }

#define KBJOCDJJIKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D061D50)
#define KBJOCDJJIKG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D061D60)
#define KBJOCDJJIKG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D061D20)

inline static constexpr unsigned int KBJOCDJJIKG_TypeDefinitionIndex = 23753;

	class KBJOCDJJIKG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::FormatString ECNKCCNJNPJ; // 0x18
		::RPG::GameCore::TargetEvaluator* JACJMOPEPDA; // 0x20
		::System::UInt32 PJJDMBCIBDM; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBJOCDJJIKG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KBJOCDJJIKG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KBJOCDJJIKG*))((::PBYTE)hIl2Cpp + KBJOCDJJIKG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KBJOCDJJIKG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KBJOCDJJIKG*))((::PBYTE)hIl2Cpp + KBJOCDJJIKG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
