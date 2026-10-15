#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class NCJILFFNINI;
namespace RPG::GameCore { class SetDynamicValueByPreCalcHPDamage; }
namespace RPG::GameCore { class TaskContext; }

#define BIPFHKKIKLH_CTOR_OFFSET UNITYSDK_OFFSET(0xB795830)
#define BIPFHKKIKLH_ENNJBMNBLNA_OFFSET UNITYSDK_OFFSET(0xB795D50)
#define BIPFHKKIKLH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB795910)

inline static constexpr unsigned int BIPFHKKIKLH_TypeDefinitionIndex = 55457;

	class BIPFHKKIKLH
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByPreCalcHPDamage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByPreCalcHPDamage*))((::PBYTE)hIl2Cpp + BIPFHKKIKLH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIPFHKKIKLH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void ENNJBMNBLNA(::NCJILFFNINI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCJILFFNINI*))((::PBYTE)hIl2Cpp + BIPFHKKIKLH_ENNJBMNBLNA_OFFSET))(this, a1);
		}

	};
