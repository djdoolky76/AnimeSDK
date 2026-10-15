#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEMKNPIFMBI.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class OONGDLIDJJJ;
namespace RPG::GameCore { class CheckSkillSPAxis; }

#define CILJJGCGNKF_CTOR_OFFSET UNITYSDK_OFFSET(0xCF8D980)
#define CILJJGCGNKF_HGEDCFNBPGL_OFFSET UNITYSDK_OFFSET(0xCF8DA00)
#define CILJJGCGNKF_MNAKIEOGPDK_OFFSET UNITYSDK_OFFSET(0xCF8D990)

inline static constexpr unsigned int CILJJGCGNKF_TypeDefinitionIndex = 54372;

	class CILJJGCGNKF : public ::BEMKNPIFMBI
	{
	public:
		::RPG::GameCore::CheckSkillSPAxis* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::CheckSkillSPAxis* a1, ::OONGDLIDJJJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckSkillSPAxis*, ::OONGDLIDJJJ*))((::PBYTE)hIl2Cpp + CILJJGCGNKF_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint MNAKIEOGPDK()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CILJJGCGNKF_MNAKIEOGPDK_OFFSET))(this);
		}

		::System::Boolean HGEDCFNBPGL(::OONGDLIDJJJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OONGDLIDJJJ*))((::PBYTE)hIl2Cpp + CILJJGCGNKF_HGEDCFNBPGL_OFFSET))(this, a1);
		}

	};
