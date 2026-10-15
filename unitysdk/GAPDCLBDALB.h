#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNOHFPEFGGA.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class CFDHDBNIHPL;
class LMHLABELCDJ;
namespace RPG::GameCore { class TaskContext; }

#define GAPDCLBDALB_CTOR_OFFSET UNITYSDK_OFFSET(0x15943EA0)
#define GAPDCLBDALB_FBKIDNEJFAG_OFFSET UNITYSDK_OFFSET(0x159441E0)
#define GAPDCLBDALB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15943ED0)

inline static constexpr unsigned int GAPDCLBDALB_TypeDefinitionIndex = 55718;

	class GAPDCLBDALB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LMHLABELCDJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LMHLABELCDJ*))((::PBYTE)hIl2Cpp + GAPDCLBDALB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAPDCLBDALB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void FBKIDNEJFAG(::CFDHDBNIHPL* a1, ::GNOHFPEFGGA a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::CFDHDBNIHPL*, ::GNOHFPEFGGA, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + GAPDCLBDALB_FBKIDNEJFAG_OFFSET))(this, a1, a2, a3);
		}

	};
