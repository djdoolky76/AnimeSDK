#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
#include "unitysdk/System/Object.h"
class JBFGHNLMEDI;

#define HALHKJLBIKJ_ANNPNBNKFMJ_OFFSET UNITYSDK_OFFSET(0x15B843A0)
#define HALHKJLBIKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15B84140)
#define HALHKJLBIKJ_DLJCIENEOGJ_OFFSET UNITYSDK_OFFSET(0x15B84240)
#define HALHKJLBIKJ_LHMBJMELCOL_OFFSET UNITYSDK_OFFSET(0x15B84150)

inline static constexpr unsigned int HALHKJLBIKJ_TypeDefinitionIndex = 76407;

	class HALHKJLBIKJ : public ::System::Object
	{
	public:
		::JBFGHNLMEDI* OADJMMIHCCI; // 0x10
		::System::Void _ctor(::JBFGHNLMEDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBFGHNLMEDI*))((::PBYTE)hIl2Cpp + HALHKJLBIKJ_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean LHMBJMELCOL(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HALHKJLBIKJ_LHMBJMELCOL_OFFSET))(this, a1);
		}

		::System::Boolean DLJCIENEOGJ(::RPG::GameCore::CakeRaceMoveState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CakeRaceMoveState))((::PBYTE)hIl2Cpp + HALHKJLBIKJ_DLJCIENEOGJ_OFFSET))(this, a1);
		}

		::System::Boolean ANNPNBNKFMJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HALHKJLBIKJ_ANNPNBNKFMJ_OFFSET))(this);
		}

	};
