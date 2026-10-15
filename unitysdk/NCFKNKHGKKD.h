#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDENDNDOFLF.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
class GHHIAGDFMMN;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }

#define NCFKNKHGKKD_CCTOR_OFFSET UNITYSDK_OFFSET(0xBB08BE0)
#define NCFKNKHGKKD_CTOR_OFFSET UNITYSDK_OFFSET(0xBB08500)
#define NCFKNKHGKKD_GET_FLAG_OFFSET UNITYSDK_OFFSET(0xBB08BD0)
#define NCFKNKHGKKD_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBB08560)
#define NCFKNKHGKKD_IEHGJKIODLM_OFFSET UNITYSDK_OFFSET(0xBB085B0)

inline static constexpr unsigned int NCFKNKHGKKD_TypeDefinitionIndex = 57044;

	class NCFKNKHGKKD : public ::BDENDNDOFLF
	{
	public:
		::GHHIAGDFMMN* KCIMDDOEHJE; // 0x68
		::RPG::GameCore::AdventureCharacterController* CACEADPJLPB; // 0x70
		::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x78
		static ::System::Int32* StaticGet_GFHGDAAIKEL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NCFKNKHGKKD")->GetStaticField(0x79C0);
		}

		static ::System::Int32* StaticGet_EEFFFMLAANC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NCFKNKHGKKD")->GetStaticField(0x79C4);
		}

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NCFKNKHGKKD_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCFKNKHGKKD_CCTOR_OFFSET))();
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFKNKHGKKD_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void IEHGJKIODLM(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NCFKNKHGKKD_IEHGJKIODLM_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
		{
			return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFKNKHGKKD_GET_FLAG_OFFSET))(this);
		}

	};
