#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/PlanExtraScoreCalculatorConfig.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class DAIBOFDLEBF;
class GDJJHIELCIB;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::GameCore { class AvatarRelicRecommendRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GDJJHIELCIB_BIGBJFNNCGO_OFFSET UNITYSDK_OFFSET(0x159A13D0)
#define GDJJHIELCIB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x159A03D0)
#define GDJJHIELCIB_CTOR_OFFSET UNITYSDK_OFFSET(0x159A0470)
#define GDJJHIELCIB_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x159A0480)
#define GDJJHIELCIB_EAJMLIOEGOD_OFFSET UNITYSDK_OFFSET(0x159A06E0)
#define GDJJHIELCIB_FFAHGPFILDJ_OFFSET UNITYSDK_OFFSET(0x159A0920)
#define GDJJHIELCIB_FFLPBOJOHGD_OFFSET UNITYSDK_OFFSET(0x159A0BD0)
#define GDJJHIELCIB_GEBLNEGPMOH_OFFSET UNITYSDK_OFFSET(0x159A1560)
#define GDJJHIELCIB_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x159A0360)
#define GDJJHIELCIB_HHLKDIKEFEC_OFFSET UNITYSDK_OFFSET(0x159A0F50)
#define GDJJHIELCIB_JAGDMGFMFAK_OFFSET UNITYSDK_OFFSET(0x159A10F0)
#define GDJJHIELCIB_JONDFPBGIKB_OFFSET UNITYSDK_OFFSET(0x159A1660)
#define GDJJHIELCIB_LNNFABIAOEK_OFFSET UNITYSDK_OFFSET(0x159A1900)
#define GDJJHIELCIB_MNFMGDHIGDJ_OFFSET UNITYSDK_OFFSET(0x159A1430)
#define GDJJHIELCIB_OBKAHOIEJDJ_OFFSET UNITYSDK_OFFSET(0x159A0380)
#define GDJJHIELCIB_PCEGNLLKHKF_OFFSET UNITYSDK_OFFSET(0x159A0B70)
#define GDJJHIELCIB_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x159A0370)

	class GDJJHIELCIB : public ::System::Object
	{
	public:
		::RPG::GameCore::AvatarRelicRecommendRow* NKEKOAGBKAJ; // 0x10
		::DAIBOFDLEBF* NMEGIHEFBKJ; // 0x18
		::RPG::AvatarSystem::IAvatar* BBBMGEAKHEB; // 0x20
		::System::Single GNIKJABNEDI; // 0x28
		::RPG::Client::RelicSmartSuit::PlanExtraScoreCalculatorConfig _Config_k__BackingField; // 0x2C
		::System::Single AALHKIBIOEC; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint JNDIHPNNLLD; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDJJHIELCIB_CTOR_OFFSET))(this);
		}

		::RPG::Client::RelicSmartSuit::PlanExtraScoreCalculatorConfig get_Config()
		{
			return ((::RPG::Client::RelicSmartSuit::PlanExtraScoreCalculatorConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + GDJJHIELCIB_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::Client::RelicSmartSuit::PlanExtraScoreCalculatorConfig a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::PlanExtraScoreCalculatorConfig))((::PBYTE)hIl2Cpp + GDJJHIELCIB_SET_CONFIG_OFFSET))(this, a1);
		}

		::System::Boolean OBKAHOIEJDJ(::RPG::Client::RelicSmartSuit::PlanExtraScoreCalculatorConfig a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicSmartSuit::PlanExtraScoreCalculatorConfig))((::PBYTE)hIl2Cpp + GDJJHIELCIB_OBKAHOIEJDJ_OFFSET))(this, a1);
		}

		static ::GDJJHIELCIB* BPLPBPMEODA(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::RelicSmartSuit::PlanExtraScoreCalculatorConfig a2)
		{
			return ((::GDJJHIELCIB*(*)(::RPG::AvatarSystem::IAvatar*, ::RPG::Client::RelicSmartSuit::PlanExtraScoreCalculatorConfig))((::PBYTE)hIl2Cpp + GDJJHIELCIB_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void DIOEAJEHHND(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::RelicSmartSuit::PlanExtraScoreCalculatorConfig a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::RelicSmartSuit::PlanExtraScoreCalculatorConfig))((::PBYTE)hIl2Cpp + GDJJHIELCIB_DIOEAJEHHND_OFFSET))(this, a1, a2);
		}

		::DAIBOFDLEBF* EAJMLIOEGOD(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1)
		{
			return ((::DAIBOFDLEBF*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + GDJJHIELCIB_EAJMLIOEGOD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* FFAHGPFILDJ(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + GDJJHIELCIB_FFAHGPFILDJ_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* PCEGNLLKHKF(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + GDJJHIELCIB_PCEGNLLKHKF_OFFSET))(this, a1);
		}

		static ::System::Boolean JAGDMGFMFAK(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*, ::System::Object*))((::PBYTE)hIl2Cpp + GDJJHIELCIB_JAGDMGFMFAK_OFFSET))(a1, a2);
		}

		::System::Single FFLPBOJOHGD(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + GDJJHIELCIB_FFLPBOJOHGD_OFFSET))(this, a1, a2);
		}

		::System::Single HHLKDIKEFEC(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + GDJJHIELCIB_HHLKDIKEFEC_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint BIGBJFNNCGO()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + GDJJHIELCIB_BIGBJFNNCGO_OFFSET))(this);
		}

		::System::Single MNFMGDHIGDJ(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + GDJJHIELCIB_MNFMGDHIGDJ_OFFSET))(this, a1);
		}

		::System::Single GEBLNEGPMOH(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + GDJJHIELCIB_GEBLNEGPMOH_OFFSET))(this, a1);
		}

		::System::Boolean JONDFPBGIKB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDJJHIELCIB_JONDFPBGIKB_OFFSET))(this);
		}

		::System::Boolean LNNFABIAOEK(::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AvatarPropertyType>*))((::PBYTE)hIl2Cpp + GDJJHIELCIB_LNNFABIAOEK_OFFSET))(this, a1);
		}

	};
