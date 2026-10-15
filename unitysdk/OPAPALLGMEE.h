#pragma once
#include "unitysdk/unitysdk.h"
class BNHDGEHMMIO;
class EKFMIDBJDIA;
namespace RPG::GameCore { class ByCheckAdditionalConditions; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define OPAPALLGMEE_AOAPPNNNNCB_OFFSET UNITYSDK_OFFSET(0xBF9CD40)
#define OPAPALLGMEE_CBHPNJEGELJ_OFFSET UNITYSDK_OFFSET(0xBF9C3D0)
#define OPAPALLGMEE_CTOR_OFFSET UNITYSDK_OFFSET(0xBF9BD00)
#define OPAPALLGMEE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF9D420)
#define OPAPALLGMEE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBF9C860)
#define OPAPALLGMEE_GGHIDBNAJFA_OFFSET UNITYSDK_OFFSET(0xBF9CB00)
#define OPAPALLGMEE_HABAEAOCJNE_OFFSET UNITYSDK_OFFSET(0xBF9CBD0)

inline static constexpr unsigned int OPAPALLGMEE_TypeDefinitionIndex = 57989;

	class OPAPALLGMEE
	{
	public:
		::BNHDGEHMMIO* LMDHPABCOAB; // 0x28
		::System::Boolean AJDEDNMEKDF; // 0x30
		::System::Boolean KLBOGOAJKNC; // 0x31
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckAdditionalConditions* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckAdditionalConditions*))((::PBYTE)hIl2Cpp + OPAPALLGMEE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAPALLGMEE_EVALUATE_OFFSET))(this);
		}

		::RPG::GameCore::PredicateConfig* CBHPNJEGELJ(::System::String* a1)
		{
			return ((::RPG::GameCore::PredicateConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OPAPALLGMEE_CBHPNJEGELJ_OFFSET))(this, a1);
		}

		::System::Void GGHIDBNAJFA(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + OPAPALLGMEE_GGHIDBNAJFA_OFFSET))(this, a1);
		}

		::System::Void HABAEAOCJNE(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + OPAPALLGMEE_HABAEAOCJNE_OFFSET))(this, a1);
		}

		::System::Void AOAPPNNNNCB(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + OPAPALLGMEE_AOAPPNNNNCB_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAPALLGMEE_DISPOSE_OFFSET))(this);
		}

	};
