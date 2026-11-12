#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EKCDBPBNIEM;
class FCOEMCEDLNL;
class LIMGBAHNNIK;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define LIMGBAHNNIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2F80B0)
#define LIMGBAHNNIK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E2F80C0)
#define LIMGBAHNNIK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E2F8070)

inline static constexpr unsigned int LIMGBAHNNIK_TypeDefinitionIndex = 23291;

	class LIMGBAHNNIK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* DPOADEGJFJN; // 0x18
		::RPG::GameCore::DynamicFloat* MEMDDBLODBL; // 0x20
		::RPG::GameCore::DynamicFloat* PDELICMHBEG; // 0x28
		::RPG::GameCore::DynamicFloat* MKAIFLDPHGD; // 0x30
		::RPG::GameCore::DynamicFloat* NJKLFNLALJL; // 0x38
		::System::String* EMHGEGEGJEI; // 0x40
		::RPG::GameCore::DynamicFloat* JPEIKNPHGBB; // 0x48
		::EKCDBPBNIEM* HJKLHEIOJBG; // 0x50
		::EKCDBPBNIEM* IDJADOBDIFG; // 0x58
		::System::Boolean LPJDKNICJAM; // 0x60
		::System::Boolean IBDLGGNNJMP; // 0x61
		::System::Boolean GKIOLMEAOJC; // 0x62
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIMGBAHNNIK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LIMGBAHNNIK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LIMGBAHNNIK*))((::PBYTE)hIl2Cpp + LIMGBAHNNIK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LIMGBAHNNIK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LIMGBAHNNIK*))((::PBYTE)hIl2Cpp + LIMGBAHNNIK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
