#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BFBIICACCMB;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class RtModifierPropertyOverrideData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BFBIICACCMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D66E390)
#define BFBIICACCMB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D66E3A0)
#define BFBIICACCMB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D66E360)

inline static constexpr unsigned int BFBIICACCMB_TypeDefinitionIndex = 24185;

	class BFBIICACCMB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* FMCJJBALBEN; // 0x18
		::System::String* IFNAGLOMHBK; // 0x20
		::System::String* DNLHMCNMCBC; // 0x28
		::Il2CppArray<::RPG::GameCore::RtModifierPropertyOverrideData*>* FBEBNLOPIBL; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBIICACCMB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BFBIICACCMB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BFBIICACCMB*))((::PBYTE)hIl2Cpp + BFBIICACCMB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BFBIICACCMB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BFBIICACCMB*))((::PBYTE)hIl2Cpp + BFBIICACCMB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
