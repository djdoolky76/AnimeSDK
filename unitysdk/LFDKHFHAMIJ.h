#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KKEFMOKEJIF.h"
#include "unitysdk/RPG/GameCore/RtCharacterState.h"
class IKPJIFCNIDG;

#define LFDKHFHAMIJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB661530)
#define LFDKHFHAMIJ_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xB6611A0)
#define LFDKHFHAMIJ_IKJGAKMBFPO_OFFSET UNITYSDK_OFFSET(0xB661320)
#define LFDKHFHAMIJ_NJHIHCDLBCG_OFFSET UNITYSDK_OFFSET(0xB661430)
#define LFDKHFHAMIJ_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0xB661250)

inline static constexpr unsigned int LFDKHFHAMIJ_TypeDefinitionIndex = 53946;

	class LFDKHFHAMIJ : public ::KKEFMOKEJIF
	{
	public:
		::IKPJIFCNIDG* MKKEEJFKIPH; // 0x18
		::Il2CppArray<::RPG::GameCore::RtCharacterState>* LOOAFCNNHFM; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDKHFHAMIJ_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDKHFHAMIJ_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDKHFHAMIJ_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Void IKJGAKMBFPO(::Il2CppArray<::RPG::GameCore::RtCharacterState>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::RtCharacterState>*))((::PBYTE)hIl2Cpp + LFDKHFHAMIJ_IKJGAKMBFPO_OFFSET))(this, a1);
		}

		::System::Void NJHIHCDLBCG(::RPG::GameCore::RtCharacterState a1, ::RPG::GameCore::RtCharacterState a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtCharacterState, ::RPG::GameCore::RtCharacterState))((::PBYTE)hIl2Cpp + LFDKHFHAMIJ_NJHIHCDLBCG_OFFSET))(this, a1, a2);
		}

	};
