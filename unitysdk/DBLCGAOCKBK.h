#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBLCGAOCKBK;
namespace RPG::Client::FateRin::Battle { class IFateRinBattleModifierHintViewModel; }

#define DBLCGAOCKBK_CCTOR_OFFSET UNITYSDK_OFFSET(0xE22AFC0)
#define DBLCGAOCKBK_COMPARE_OFFSET UNITYSDK_OFFSET(0xE22AC50)
#define DBLCGAOCKBK_CTOR_OFFSET UNITYSDK_OFFSET(0xE22AFB0)

inline static constexpr unsigned int DBLCGAOCKBK_TypeDefinitionIndex = 80987;

	class DBLCGAOCKBK : public ::System::Object
	{
	public:
		static ::DBLCGAOCKBK** StaticGet_FMJPMFEDIJL()
		{
			return (::DBLCGAOCKBK**)UnitySDK::FromName("", "DBLCGAOCKBK")->GetStaticField(0x54E60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLCGAOCKBK_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBLCGAOCKBK_CCTOR_OFFSET))();
		}

		::System::Int32 Compare(::RPG::Client::FateRin::Battle::IFateRinBattleModifierHintViewModel* a1, ::RPG::Client::FateRin::Battle::IFateRinBattleModifierHintViewModel* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleModifierHintViewModel*, ::RPG::Client::FateRin::Battle::IFateRinBattleModifierHintViewModel*))((::PBYTE)hIl2Cpp + DBLCGAOCKBK_COMPARE_OFFSET))(this, a1, a2);
		}

	};
