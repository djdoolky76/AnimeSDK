#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LCCMNACCAMH.h"
class LAJCPEFEOPN;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionAreaInfo; }

#define PFFJCPFPPHG_CTOR_OFFSET UNITYSDK_OFFSET(0xC205AD0)
#define PFFJCPFPPHG_DINCADBEGGE_OFFSET UNITYSDK_OFFSET(0xC205D60)

inline static constexpr unsigned int PFFJCPFPPHG_TypeDefinitionIndex = 69321;

	class PFFJCPFPPHG : public ::LCCMNACCAMH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::LevelPedestrianV2IntersectionAreaInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPedestrianV2IntersectionAreaInfo*))((::PBYTE)hIl2Cpp + PFFJCPFPPHG_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean DINCADBEGGE(::LAJCPEFEOPN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LAJCPEFEOPN*))((::PBYTE)hIl2Cpp + PFFJCPFPPHG_DINCADBEGGE_OFFSET))(this, a1);
		}

	};
