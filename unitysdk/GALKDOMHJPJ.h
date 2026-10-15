#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/TaskState.h"
#include "unitysdk/System/Object.h"
class DJPBAKPBELL;
class PAPOPANPGIJ;
namespace RPG::GameCore { class TaskConfig; }

#define GALKDOMHJPJ_CCLOABELDPG_OFFSET UNITYSDK_OFFSET(0x1C629570)
#define GALKDOMHJPJ_IOJMJBCAADB_OFFSET UNITYSDK_OFFSET(0x1C629620)

	class GALKDOMHJPJ : public ::System::Object
	{
	public:
		static ::DJPBAKPBELL* CCLOABELDPG(::PAPOPANPGIJ* a1, ::RPG::GameCore::TaskConfig* a2)
		{
			return ((::DJPBAKPBELL*(*)(::PAPOPANPGIJ*, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + GALKDOMHJPJ_CCLOABELDPG_OFFSET))(a1, a2);
		}

		static ::RPG::Client::LittleGameShare::TaskState IOJMJBCAADB(::DJPBAKPBELL* a1)
		{
			return ((::RPG::Client::LittleGameShare::TaskState(*)(::DJPBAKPBELL*))((::PBYTE)hIl2Cpp + GALKDOMHJPJ_IOJMJBCAADB_OFFSET))(a1);
		}

	};
