#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/PlayerActionSet.h"
namespace InControl { class PlayerAction; }
namespace RPG::Client { class InControlActionData; }
namespace System { class String; }

#define IIJLENHLAIJ_BLFEIMIMBJC_OFFSET UNITYSDK_OFFSET(0x1643E2B0)
#define IIJLENHLAIJ_CAEOKAPNKPH_OFFSET UNITYSDK_OFFSET(0x1643E210)
#define IIJLENHLAIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1643DFF0)
#define IIJLENHLAIJ_FFAIPPNHABN_OFFSET UNITYSDK_OFFSET(0x1643EFD0)
#define IIJLENHLAIJ_IDKIELKJNAH_OFFSET UNITYSDK_OFFSET(0x1643F060)
#define IIJLENHLAIJ_KCBADEKEAHN_OFFSET UNITYSDK_OFFSET(0x1643EB90)
#define IIJLENHLAIJ_LGBGLMPLFPG_OFFSET UNITYSDK_OFFSET(0x1643E030)

inline static constexpr unsigned int IIJLENHLAIJ_TypeDefinitionIndex = 61333;

	class IIJLENHLAIJ : public ::InControl::PlayerActionSet
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIJLENHLAIJ_CTOR_OFFSET))(this);
		}

		::InControl::PlayerAction* LGBGLMPLFPG(::System::String* a1)
		{
			return ((::InControl::PlayerAction*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IIJLENHLAIJ_LGBGLMPLFPG_OFFSET))(this, a1);
		}

		::InControl::PlayerAction* CAEOKAPNKPH(::RPG::Client::InControlActionData* a1)
		{
			return ((::InControl::PlayerAction*(*)(::PVOID, ::RPG::Client::InControlActionData*))((::PBYTE)hIl2Cpp + IIJLENHLAIJ_CAEOKAPNKPH_OFFSET))(this, a1);
		}

		::System::Void KCBADEKEAHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIJLENHLAIJ_KCBADEKEAHN_OFFSET))(this);
		}

		::System::Boolean FFAIPPNHABN(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + IIJLENHLAIJ_FFAIPPNHABN_OFFSET))(this, a1);
		}

		::System::Boolean IDKIELKJNAH(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + IIJLENHLAIJ_IDKIELKJNAH_OFFSET))(this, a1, a2);
		}

		::System::Void BLFEIMIMBJC(::RPG::Client::InControlActionData* a1, ::InControl::PlayerAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::InControlActionData*, ::InControl::PlayerAction*))((::PBYTE)hIl2Cpp + IIJLENHLAIJ_BLFEIMIMBJC_OFFSET))(this, a1, a2);
		}

	};
