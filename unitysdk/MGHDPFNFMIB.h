#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MGHDPFNFMIB;
namespace System { class String; }

#define MGHDPFNFMIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBAEBB0)
#define MGHDPFNFMIB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1BBAE7B0)

inline static constexpr unsigned int MGHDPFNFMIB_TypeDefinitionIndex = 11292;

	class MGHDPFNFMIB : public ::System::Object
	{
	public:
		::System::String* LNPCPJCEMHL; // 0x10
		::System::String* BDACPPLKLGL; // 0x18
		::System::String* BFJGHPDNIOI; // 0x20
		::System::String* CILPGJAFCOK; // 0x28
		::System::String* JACANFAMGBO; // 0x30
		::Il2CppArray<::System::Single>* MBNNCBAAHFC; // 0x38
		::System::String* PNIDDEEJPCI; // 0x40
		::System::String* HLMCIPNJIHM; // 0x48
		::System::String* OLOIFNNLKJP; // 0x50
		::System::String* JBNNNICBNFE; // 0x58
		::System::String* NAODLBMKJKN; // 0x60
		::RPG::GameCore::DiceCombatDiceType PBFMMOGEBAK; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHDPFNFMIB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MGHDPFNFMIB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MGHDPFNFMIB*))((::PBYTE)hIl2Cpp + MGHDPFNFMIB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
