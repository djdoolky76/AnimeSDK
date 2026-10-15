#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAICombineType.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIListCombineType.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueCompareType.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueInTeamType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DCIFANEMBJP_CFAONHEBGAF_OFFSET UNITYSDK_OFFSET(0xE2400B0)
#define DCIFANEMBJP_CTOR_OFFSET UNITYSDK_OFFSET(0xE240760)
#define DCIFANEMBJP_DJNHFAAAACB_OFFSET UNITYSDK_OFFSET(0xE23F560)
#define DCIFANEMBJP_FLOKOOLMBNE_OFFSET UNITYSDK_OFFSET(0xE240200)
#define DCIFANEMBJP_HBKFPNPBPCJ_OFFSET UNITYSDK_OFFSET(0xE23F9F0)
#define DCIFANEMBJP_HGDEMOKALPJ_OFFSET UNITYSDK_OFFSET(0xE2403D0)
#define DCIFANEMBJP_KEMGBLPJLHK_OFFSET UNITYSDK_OFFSET(0xE240010)
#define DCIFANEMBJP_MJGPGAPLAND_OFFSET UNITYSDK_OFFSET(0xE240520)
#define DCIFANEMBJP_MMALCKEECFD_OFFSET UNITYSDK_OFFSET(0xE23F650)
#define DCIFANEMBJP_MPGFOLKLGJL_OFFSET UNITYSDK_OFFSET(0xE240350)
#define DCIFANEMBJP_OLJFDLDCMAK_OFFSET UNITYSDK_OFFSET(0xE23FF60)

inline static constexpr unsigned int DCIFANEMBJP_TypeDefinitionIndex = 54348;

	class DCIFANEMBJP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCIFANEMBJP_CTOR_OFFSET))(this);
		}

		static ::RPG::GameCore::FixPoint DJNHFAAAACB(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::ComplexSkillAICombineType a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::ComplexSkillAICombineType))((::PBYTE)hIl2Cpp + DCIFANEMBJP_DJNHFAAAACB_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean MMALCKEECFD(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::ComplexSkillAIValueCompareType a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::ComplexSkillAIValueCompareType))((::PBYTE)hIl2Cpp + DCIFANEMBJP_MMALCKEECFD_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::FixPoint HBKFPNPBPCJ(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::ComplexSkillAIValueInTeamType a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::ComplexSkillAIValueInTeamType))((::PBYTE)hIl2Cpp + DCIFANEMBJP_HBKFPNPBPCJ_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint OLJFDLDCMAK(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + DCIFANEMBJP_OLJFDLDCMAK_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint KEMGBLPJLHK(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + DCIFANEMBJP_KEMGBLPJLHK_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint CFAONHEBGAF(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + DCIFANEMBJP_CFAONHEBGAF_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint FLOKOOLMBNE(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + DCIFANEMBJP_FLOKOOLMBNE_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint MPGFOLKLGJL(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + DCIFANEMBJP_MPGFOLKLGJL_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint HGDEMOKALPJ(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* a1, ::RPG::GameCore::ComplexSkillAIListCombineType a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*, ::RPG::GameCore::ComplexSkillAIListCombineType))((::PBYTE)hIl2Cpp + DCIFANEMBJP_HGDEMOKALPJ_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint MJGPGAPLAND(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + DCIFANEMBJP_MJGPGAPLAND_OFFSET))(a1, a2, a3);
		}

	};
