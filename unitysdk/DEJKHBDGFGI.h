#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_Main_TeleportToBornPos; }
namespace RPG::GameCore { class TaskContext; }

#define DEJKHBDGFGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1B376FD0)
#define DEJKHBDGFGI_JHFFJOELFJA_OFFSET UNITYSDK_OFFSET(0x1B377270)
#define DEJKHBDGFGI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B377000)
#define DEJKHBDGFGI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1B3772C0)

inline static constexpr unsigned int DEJKHBDGFGI_TypeDefinitionIndex = 53328;

	class DEJKHBDGFGI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_TeleportToBornPos* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_TeleportToBornPos*))((::PBYTE)hIl2Cpp + DEJKHBDGFGI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJKHBDGFGI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void JHFFJOELFJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJKHBDGFGI_JHFFJOELFJA_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJKHBDGFGI_ONTASKRESET_OFFSET))(this);
		}

	};
