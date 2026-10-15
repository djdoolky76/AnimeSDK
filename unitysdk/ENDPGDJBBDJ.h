#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"
class EFCJBICDJFG;
class EKFMIDBJDIA;
class ILMMNCLCDIM;
class MJNGFEGNCOA;
class NJPCMMKOAJE;
class PCMHEPFFIMO;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtBattleMode; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ENDPGDJBBDJ_BJPFKNECHPL_OFFSET UNITYSDK_OFFSET(0x155A79A0)
#define ENDPGDJBBDJ_CBADGOFINON_OFFSET UNITYSDK_OFFSET(0x155A7DC0)
#define ENDPGDJBBDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x155A86F0)
#define ENDPGDJBBDJ_DIIJDOKAPDP_OFFSET UNITYSDK_OFFSET(0x155A7C60)
#define ENDPGDJBBDJ_FHLALJENMHB_OFFSET UNITYSDK_OFFSET(0x155A7790)
#define ENDPGDJBBDJ_JILLHLKDLOO_OFFSET UNITYSDK_OFFSET(0x155A8660)
#define ENDPGDJBBDJ_KCKGCEBBCIE_OFFSET UNITYSDK_OFFSET(0x155A7B50)
#define ENDPGDJBBDJ_LLEBHGCCHIJ_1_OFFSET UNITYSDK_OFFSET(0x155A8060)
#define ENDPGDJBBDJ_LLEBHGCCHIJ_OFFSET UNITYSDK_OFFSET(0x155A7F10)
#define ENDPGDJBBDJ_PFJOJBGLCFI_OFFSET UNITYSDK_OFFSET(0x155A8380)

	class ENDPGDJBBDJ : public ::System::Object
	{
	public:
		::RPG::GameCore::RtBattleMode* BHJDJDPLCLP; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::PCMHEPFFIMO*>* EIACMBIHMEH; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EFCJBICDJFG*>* LKFNHKOEOFJ; // 0x20
		::ILMMNCLCDIM* BDGPKJKENEP; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TeamType, ::NJPCMMKOAJE*>* JHCCMCMJDJH; // 0x30
		::RPG::GameCore::FixPoint CNHMBFIHLPC; // 0x38
		::System::Boolean MBOBGNPLLOO; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDPGDJBBDJ_CTOR_OFFSET))(this);
		}

		::System::Void FHLALJENMHB(::RPG::GameCore::RtBattleMode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtBattleMode*))((::PBYTE)hIl2Cpp + ENDPGDJBBDJ_FHLALJENMHB_OFFSET))(this, a1);
		}

		::System::Void BJPFKNECHPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDPGDJBBDJ_BJPFKNECHPL_OFFSET))(this);
		}

		::System::Void KCKGCEBBCIE(::MJNGFEGNCOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJNGFEGNCOA*))((::PBYTE)hIl2Cpp + ENDPGDJBBDJ_KCKGCEBBCIE_OFFSET))(this, a1);
		}

		::NJPCMMKOAJE* DIIJDOKAPDP(::RPG::GameCore::TeamType a1)
		{
			return ((::NJPCMMKOAJE*(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + ENDPGDJBBDJ_DIIJDOKAPDP_OFFSET))(this, a1);
		}

		::PCMHEPFFIMO* CBADGOFINON(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::PCMHEPFFIMO*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + ENDPGDJBBDJ_CBADGOFINON_OFFSET))(this, a1, a2);
		}

		::EFCJBICDJFG* LLEBHGCCHIJ(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::EFCJBICDJFG*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + ENDPGDJBBDJ_LLEBHGCCHIJ_OFFSET))(this, a1, a2);
		}

		::EFCJBICDJFG* LLEBHGCCHIJ_1(::RPG::GameCore::TaskContext* a1, ::System::Boolean a2)
		{
			return ((::EFCJBICDJFG*(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + ENDPGDJBBDJ_LLEBHGCCHIJ_1_OFFSET))(this, a1, a2);
		}

		::System::Void PFJOJBGLCFI(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + ENDPGDJBBDJ_PFJOJBGLCFI_OFFSET))(this, a1);
		}

		static ::System::UInt32 JILLHLKDLOO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ENDPGDJBBDJ_JILLHLKDLOO_OFFSET))(a1);
		}

	};
