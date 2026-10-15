#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"
class EBBJGCKIBAA;
class EKFMIDBJDIA;
class HPICNGFLLCA;
class MBBEBLGELAP;
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class TurnBasedGameMode; }

#define EKPJADDELLM_AEJNMMILMBL_OFFSET UNITYSDK_OFFSET(0x1550DB30)
#define EKPJADDELLM_CHAGCBGOIEM_OFFSET UNITYSDK_OFFSET(0x1550D450)
#define EKPJADDELLM_CTOR_OFFSET UNITYSDK_OFFSET(0x1550CD90)
#define EKPJADDELLM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1550CE90)
#define EKPJADDELLM_DLGOIBLICKI_OFFSET UNITYSDK_OFFSET(0x1550DAA0)
#define EKPJADDELLM_GET__STUCKTURNSTATE_OFFSET UNITYSDK_OFFSET(0x1550DBC0)
#define EKPJADDELLM_HMNLOKAHJLP_OFFSET UNITYSDK_OFFSET(0x1550CEE0)
#define EKPJADDELLM_LBPMJEGGOCL_OFFSET UNITYSDK_OFFSET(0x1550D670)
#define EKPJADDELLM_LLBALBNFBDL_OFFSET UNITYSDK_OFFSET(0x1550D230)
#define EKPJADDELLM_SET__STUCKTURNSTATE_OFFSET UNITYSDK_OFFSET(0x1550DBD0)

inline static constexpr unsigned int EKPJADDELLM_TypeDefinitionIndex = 60983;

	class EKPJADDELLM : public ::System::Object
	{
	public:
		::HPICNGFLLCA* KHFAOIKJOIB; // 0x10
		::RPG::GameCore::TurnBasedGameMode* JADHLODNADK; // 0x18
		::System::Single CIJCODIGDBK; // 0x20
		::System::Single HFEELNCHLGJ; // 0x24
		::System::Int32 HIMEHOAHIKI; // 0x28
		::System::Boolean JDOHFPGFMCI; // 0x2C
		::System::Byte _padding0[0x3];
		::RPG::GameCore::TurnState __StuckTurnState_k__BackingField; // 0x30
		// static const ::System::String* PFDEFDGCFEB; // 0x0
		// static const ::System::String* JIIOGFFCEOB; // 0x0
		// static const ::System::String* FGLGFNNAHIB; // 0x0
		// static const ::System::Object MENNALKNEIK; // 0x0
		// static const ::System::Object ODMPLNJBHKP; // 0x0
		// static const ::System::Object GDFOCJHFCOO; // 0x0
		// static const ::System::Object FLDOFJFOBKM; // 0x0
		::System::Void _ctor(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + EKPJADDELLM_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKPJADDELLM_DISPOSE_OFFSET))(this);
		}

		::System::Void HMNLOKAHJLP(::EBBJGCKIBAA* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::EBBJGCKIBAA*, ::System::Single))((::PBYTE)hIl2Cpp + EKPJADDELLM_HMNLOKAHJLP_OFFSET))(this, a1, a2);
		}

		::System::Boolean CHAGCBGOIEM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EKPJADDELLM_CHAGCBGOIEM_OFFSET))(this);
		}

		::System::Void LBPMJEGGOCL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKPJADDELLM_LBPMJEGGOCL_OFFSET))(this);
		}

		::System::Void DLGOIBLICKI(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + EKPJADDELLM_DLGOIBLICKI_OFFSET))(this, a1);
		}

		::System::Void AEJNMMILMBL(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + EKPJADDELLM_AEJNMMILMBL_OFFSET))(this, a1);
		}

		::System::Void LLBALBNFBDL(::RPG::GameCore::TurnState a1, ::MBBEBLGELAP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState, ::MBBEBLGELAP*))((::PBYTE)hIl2Cpp + EKPJADDELLM_LLBALBNFBDL_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::TurnState get__StuckTurnState()
		{
			return ((::RPG::GameCore::TurnState(*)(::PVOID))((::PBYTE)hIl2Cpp + EKPJADDELLM_GET__STUCKTURNSTATE_OFFSET))(this);
		}

		::System::Void set__StuckTurnState(::RPG::GameCore::TurnState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + EKPJADDELLM_SET__STUCKTURNSTATE_OFFSET))(this, a1);
		}

	};
