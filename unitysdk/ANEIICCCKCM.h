#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDENDNDOFLF.h"
#include "unitysdk/RPG/GameCore/AdventureBehaviorClampAlertLevel.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureMuteLevel.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureNormalActiveReason.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FOOIINCDBFA;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class AdventureCharacterDataComponent; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TransformComponent; }

#define ANEIICCCKCM_CCTOR_OFFSET UNITYSDK_OFFSET(0x15589BE0)
#define ANEIICCCKCM_CTOR_OFFSET UNITYSDK_OFFSET(0x15588B20)
#define ANEIICCCKCM_FDKEHBDDNGC_OFFSET UNITYSDK_OFFSET(0x15588CD0)
#define ANEIICCCKCM_GACCAFLHFEL_OFFSET UNITYSDK_OFFSET(0x15589290)
#define ANEIICCCKCM_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x15589BD0)
#define ANEIICCCKCM_GGOIPPNHFGG_OFFSET UNITYSDK_OFFSET(0x155894E0)
#define ANEIICCCKCM_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15588BC0)
#define ANEIICCCKCM_IEHGJKIODLM_OFFSET UNITYSDK_OFFSET(0x15588FE0)
#define ANEIICCCKCM_KKMPFDINMLC_OFFSET UNITYSDK_OFFSET(0x15588C20)
#define ANEIICCCKCM_LICLBMEDGJM_OFFSET UNITYSDK_OFFSET(0x15589130)
#define ANEIICCCKCM_NMJGILFHFPC_OFFSET UNITYSDK_OFFSET(0x15589030)
#define ANEIICCCKCM_ONMKPFKIAOD_OFFSET UNITYSDK_OFFSET(0x155896A0)

inline static constexpr unsigned int ANEIICCCKCM_TypeDefinitionIndex = 57029;

	class ANEIICCCKCM : public ::BDENDNDOFLF
	{
	public:
		::RPG::GameCore::AdventureCharacterDataComponent* JBCJJOALMEF; // 0x68
		::RPG::GameCore::AdventureCharacterController* CACEADPJLPB; // 0x70
		::RPG::GameCore::NPCComponent* OLMFOBHMCKN; // 0x78
		::RPG::GameCore::TransformComponent* NIDHDAOGNKO; // 0x80
		::FOOIINCDBFA* NLLJCLJBMAJ; // 0x88
		::UnityEngine::Vector3 ABEGGIHNEMD; // 0x90
		::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x9C
		::System::Int32 GJALMAPMGME; // 0xA0
		static ::System::Int32* StaticGet_HPHNJBIJFFN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ANEIICCCKCM")->GetStaticField(0x13EA0);
		}

		static ::System::Int32* StaticGet_IFLNJLFCHOM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ANEIICCCKCM")->GetStaticField(0x13EA4);
		}

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ANEIICCCKCM_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANEIICCCKCM_CCTOR_OFFSET))();
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEIICCCKCM_HADOHLNHHGB_OFFSET))(this);
		}

		::RPG::GameCore::AdventureBehaviorClampAlertLevel KKMPFDINMLC(::System::Boolean a1)
		{
			return ((::RPG::GameCore::AdventureBehaviorClampAlertLevel(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ANEIICCCKCM_KKMPFDINMLC_OFFSET))(this, a1);
		}

		::RPG::GameCore::AdventureFeatureMuteLevel FDKEHBDDNGC()
		{
			return ((::RPG::GameCore::AdventureFeatureMuteLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEIICCCKCM_FDKEHBDDNGC_OFFSET))(this);
		}

		::System::Void IEHGJKIODLM(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ANEIICCCKCM_IEHGJKIODLM_OFFSET))(this, a1, a2);
		}

		::System::Void NMJGILFHFPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEIICCCKCM_NMJGILFHFPC_OFFSET))(this);
		}

		::System::Void LICLBMEDGJM(::System::Boolean a1, ::System::Boolean a2, ::RPG::GameCore::AdventureFeatureNormalActiveReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + ANEIICCCKCM_LICLBMEDGJM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GACCAFLHFEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEIICCCKCM_GACCAFLHFEL_OFFSET))(this);
		}

		::System::Void GGOIPPNHFGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEIICCCKCM_GGOIPPNHFGG_OFFSET))(this);
		}

		::System::Void ONMKPFKIAOD(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + ANEIICCCKCM_ONMKPFKIAOD_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
		{
			return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + ANEIICCCKCM_GET_FLAG_OFFSET))(this);
		}

	};
