#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackFormulaType.h"
#include "unitysdk/RPG/GameCore/FinalDamageFormulaType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class NCJILFFNINI;
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define FGLKGCAEKKL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1575CE90)
#define FGLKGCAEKKL_DFACNDFPDHK_OFFSET UNITYSDK_OFFSET(0x1575BC60)
#define FGLKGCAEKKL_KMOFEGJDFDL_OFFSET UNITYSDK_OFFSET(0x1575BB40)

inline static constexpr unsigned int FGLKGCAEKKL_TypeDefinitionIndex = 55974;

	class FGLKGCAEKKL : public ::System::Object
	{
	public:
		static ::RPG::GameCore::FixPoint* StaticGet_EPBPACPCLPP()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("", "FGLKGCAEKKL")->GetStaticField(0x14410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGLKGCAEKKL_CCTOR_OFFSET))();
		}

		static ::NCJILFFNINI* KMOFEGJDFDL(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::AttackFormulaType a5, ::RPG::GameCore::FinalDamageFormulaType a6)
		{
			return ((::NCJILFFNINI*(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::AttackFormulaType, ::RPG::GameCore::FinalDamageFormulaType))((::PBYTE)hIl2Cpp + FGLKGCAEKKL_KMOFEGJDFDL_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void DFACNDFPDHK(::NCJILFFNINI* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::NCJILFFNINI*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FGLKGCAEKKL_DFACNDFPDHK_OFFSET))(a1, a2, a3);
		}

	};
