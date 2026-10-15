#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftOrderState.h"
#include "unitysdk/System/Object.h"
class BCFAKEGJPKN;
class JLNEKELMDNJ;
class PJPPGJEDCOG;

#define IGIEOGBNLAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C54CC80)
#define IGIEOGBNLAC_GET_CUSTOMERACTORCONFIG_OFFSET UNITYSDK_OFFSET(0x1C562E60)
#define IGIEOGBNLAC_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1C562E40)
#define IGIEOGBNLAC_GET_ORDERCONFIG_OFFSET UNITYSDK_OFFSET(0x1C562E50)
#define IGIEOGBNLAC_GET_REQUIREMENTCONFIG_OFFSET UNITYSDK_OFFSET(0x1C562E70)
#define IGIEOGBNLAC_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1C562E80)

inline static constexpr unsigned int IGIEOGBNLAC_TypeDefinitionIndex = 41868;

	class IGIEOGBNLAC : public ::System::Object
	{
	public:
		::PJPPGJEDCOG* _RequirementConfig_k__BackingField; // 0x10
		::BCFAKEGJPKN* _CustomerActorConfig_k__BackingField; // 0x18
		::JLNEKELMDNJ* _OrderConfig_k__BackingField; // 0x20
		::RPG::Client::MechCraft::MechCraftOrderState _State_k__BackingField; // 0x28
		::System::UInt32 _Identifier_k__BackingField; // 0x2C
		::System::Void _ctor(::System::UInt32 a1, ::JLNEKELMDNJ* a2, ::BCFAKEGJPKN* a3, ::PJPPGJEDCOG* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::JLNEKELMDNJ*, ::BCFAKEGJPKN*, ::PJPPGJEDCOG*))((::PBYTE)hIl2Cpp + IGIEOGBNLAC_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 get_Identifier()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGIEOGBNLAC_GET_IDENTIFIER_OFFSET))(this);
		}

		::JLNEKELMDNJ* get_OrderConfig()
		{
			return ((::JLNEKELMDNJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGIEOGBNLAC_GET_ORDERCONFIG_OFFSET))(this);
		}

		::BCFAKEGJPKN* get_CustomerActorConfig()
		{
			return ((::BCFAKEGJPKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGIEOGBNLAC_GET_CUSTOMERACTORCONFIG_OFFSET))(this);
		}

		::PJPPGJEDCOG* get_RequirementConfig()
		{
			return ((::PJPPGJEDCOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGIEOGBNLAC_GET_REQUIREMENTCONFIG_OFFSET))(this);
		}

		::RPG::Client::MechCraft::MechCraftOrderState get_State()
		{
			return ((::RPG::Client::MechCraft::MechCraftOrderState(*)(::PVOID))((::PBYTE)hIl2Cpp + IGIEOGBNLAC_GET_STATE_OFFSET))(this);
		}

	};
