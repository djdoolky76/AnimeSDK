#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/RPG/GameCore/AdventureDyingStyle.h"
#include "unitysdk/System/Object.h"
class ILHNCGGCBBL;
class NJKFDOFOCLO;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }

#define PGAFEGBFDLM_AEGMLJMJBDO_OFFSET UNITYSDK_OFFSET(0xC21BA90)
#define PGAFEGBFDLM_CTOR_OFFSET UNITYSDK_OFFSET(0xC21AE80)
#define PGAFEGBFDLM_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xC21B8F0)
#define PGAFEGBFDLM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC21AE90)
#define PGAFEGBFDLM_FPAKMEDKAJN_OFFSET UNITYSDK_OFFSET(0xC21ADF0)
#define PGAFEGBFDLM_GOHDHIMMDNG_OFFSET UNITYSDK_OFFSET(0xC21B8A0)
#define PGAFEGBFDLM_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xC21AEE0)
#define PGAFEGBFDLM_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0xC21B950)
#define PGAFEGBFDLM_TICK_OFFSET UNITYSDK_OFFSET(0xC21BC20)

	class PGAFEGBFDLM : public ::System::Object
	{
	public:
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x10
		::NJKFDOFOCLO* DEBHJHGDOGN; // 0x18
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x20
		::System::Single EOAGDMDPLHL; // 0x28
		::System::Int32 PKLOPBOLFPP; // 0x2C
		::System::Single DKOFFPPGEFI; // 0x30
		// static const ::System::Object IINNOCEHNNA; // 0x0
		// static const ::System::Object DFICHGHDBON; // 0x0
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::ILHNCGGCBBL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureCharacterController*, ::ILHNCGGCBBL*))((::PBYTE)hIl2Cpp + PGAFEGBFDLM_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Int32 FPAKMEDKAJN(::RPG::GameCore::AdventureDyingStyle a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::AdventureDyingStyle))((::PBYTE)hIl2Cpp + PGAFEGBFDLM_FPAKMEDKAJN_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGAFEGBFDLM_DISPOSE_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PGAFEGBFDLM_KIGBILLGNOH_OFFSET))(this, a1);
		}

		::RPG::GameCore::AdventureAnimStateType GOHDHIMMDNG()
		{
			return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + PGAFEGBFDLM_GOHDHIMMDNG_OFFSET))(this);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PGAFEGBFDLM_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void OPCKNBHNBOA(::RPG::GameCore::AdventureAnimStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType))((::PBYTE)hIl2Cpp + PGAFEGBFDLM_OPCKNBHNBOA_OFFSET))(this, a1);
		}

		::System::Void AEGMLJMJBDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGAFEGBFDLM_AEGMLJMJBDO_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PGAFEGBFDLM_TICK_OFFSET))(this, a1);
		}

	};
