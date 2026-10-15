#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class ComplexSkillAIMapper; }
namespace RPG::GameCore { class ComplexSkillAIMapperBinary; }
namespace RPG::GameCore { class ComplexSkillAIMapperExpCurve; }
namespace RPG::GameCore { class ComplexSkillAIMapperMultiRange; }

#define CKBKMPPFHBA_KFGJEKJHIMB_1_OFFSET UNITYSDK_OFFSET(0xD753FF0)
#define CKBKMPPFHBA_KFGJEKJHIMB_2_OFFSET UNITYSDK_OFFSET(0xD7540F0)
#define CKBKMPPFHBA_KFGJEKJHIMB_3_OFFSET UNITYSDK_OFFSET(0xD7548A0)
#define CKBKMPPFHBA_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xD753D60)

inline static constexpr unsigned int CKBKMPPFHBA_TypeDefinitionIndex = 54350;

	class CKBKMPPFHBA : public ::System::Object
	{
	public:
		static ::RPG::GameCore::FixPoint KFGJEKJHIMB(::RPG::GameCore::ComplexSkillAIMapper* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIMapper*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CKBKMPPFHBA_KFGJEKJHIMB_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint KFGJEKJHIMB_1(::RPG::GameCore::ComplexSkillAIMapperBinary* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIMapperBinary*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CKBKMPPFHBA_KFGJEKJHIMB_1_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint KFGJEKJHIMB_2(::RPG::GameCore::ComplexSkillAIMapperMultiRange* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIMapperMultiRange*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CKBKMPPFHBA_KFGJEKJHIMB_2_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint KFGJEKJHIMB_3(::RPG::GameCore::ComplexSkillAIMapperExpCurve* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIMapperExpCurve*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CKBKMPPFHBA_KFGJEKJHIMB_3_OFFSET))(a1, a2);
		}

	};
