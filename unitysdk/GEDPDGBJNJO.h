#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillLayoutKey.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GEDPDGBJNJO_AJDGNMOFOBK_OFFSET UNITYSDK_OFFSET(0x159D01A0)
#define GEDPDGBJNJO_BMCGEFFDPIM_1_OFFSET UNITYSDK_OFFSET(0x159D0750)
#define GEDPDGBJNJO_BMCGEFFDPIM_OFFSET UNITYSDK_OFFSET(0x159D06D0)
#define GEDPDGBJNJO_CBOPKCILHDG_OFFSET UNITYSDK_OFFSET(0x159D00C0)
#define GEDPDGBJNJO_CIMLEMOPHLK_OFFSET UNITYSDK_OFFSET(0x159D0310)
#define GEDPDGBJNJO_CTOR_OFFSET UNITYSDK_OFFSET(0x159D07B0)
#define GEDPDGBJNJO_FIKFHMLKFLL_1_OFFSET UNITYSDK_OFFSET(0x159D0680)
#define GEDPDGBJNJO_FIKFHMLKFLL_OFFSET UNITYSDK_OFFSET(0x159D0630)
#define GEDPDGBJNJO_OKCCMLNJIMA_1_OFFSET UNITYSDK_OFFSET(0x159D05A0)
#define GEDPDGBJNJO_OKCCMLNJIMA_OFFSET UNITYSDK_OFFSET(0x159D04F0)
#define GEDPDGBJNJO_PIEBGMKLPJL_OFFSET UNITYSDK_OFFSET(0x159D0410)
#define GEDPDGBJNJO_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x159D0280)

inline static constexpr unsigned int GEDPDGBJNJO_TypeDefinitionIndex = 57666;

	class GEDPDGBJNJO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SkillLayoutKey, ::RPG::GameCore::ControlSkillType>* JOHIELEHHEN; // 0x10
		// static const ::System::Object AOMPEPOHIFO; // 0x0
		// static const ::System::Object EPEDHOLJPEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDPDGBJNJO_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ControlSkillType CBOPKCILHDG()
		{
			return ((::RPG::GameCore::ControlSkillType(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDPDGBJNJO_CBOPKCILHDG_OFFSET))(this);
		}

		::RPG::GameCore::ControlSkillType AJDGNMOFOBK()
		{
			return ((::RPG::GameCore::ControlSkillType(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDPDGBJNJO_AJDGNMOFOBK_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDPDGBJNJO_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void CIMLEMOPHLK(::RPG::GameCore::SkillLayoutKey a1, ::RPG::GameCore::ControlSkillType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillLayoutKey, ::RPG::GameCore::ControlSkillType))((::PBYTE)hIl2Cpp + GEDPDGBJNJO_CIMLEMOPHLK_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::ControlSkillType PIEBGMKLPJL(::RPG::GameCore::SkillLayoutKey a1)
		{
			return ((::RPG::GameCore::ControlSkillType(*)(::PVOID, ::RPG::GameCore::SkillLayoutKey))((::PBYTE)hIl2Cpp + GEDPDGBJNJO_PIEBGMKLPJL_OFFSET))(this, a1);
		}

		::System::Boolean OKCCMLNJIMA(::RPG::GameCore::SkillLayoutKey a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SkillLayoutKey))((::PBYTE)hIl2Cpp + GEDPDGBJNJO_OKCCMLNJIMA_OFFSET))(this, a1);
		}

		::System::Boolean OKCCMLNJIMA_1(::RPG::Client::UISkillIndex a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + GEDPDGBJNJO_OKCCMLNJIMA_1_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::SkillLayoutKey FIKFHMLKFLL(::RPG::Client::UISkillIndex a1)
		{
			return ((::RPG::GameCore::SkillLayoutKey(*)(::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + GEDPDGBJNJO_FIKFHMLKFLL_OFFSET))(a1);
		}

		static ::RPG::Client::UISkillIndex FIKFHMLKFLL_1(::RPG::GameCore::SkillLayoutKey a1)
		{
			return ((::RPG::Client::UISkillIndex(*)(::RPG::GameCore::SkillLayoutKey))((::PBYTE)hIl2Cpp + GEDPDGBJNJO_FIKFHMLKFLL_1_OFFSET))(a1);
		}

		static ::System::Boolean BMCGEFFDPIM(::RPG::Client::UISkillIndex a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + GEDPDGBJNJO_BMCGEFFDPIM_OFFSET))(a1);
		}

		static ::System::Boolean BMCGEFFDPIM_1(::RPG::GameCore::ControlSkillType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ControlSkillType))((::PBYTE)hIl2Cpp + GEDPDGBJNJO_BMCGEFFDPIM_1_OFFSET))(a1);
		}

	};
