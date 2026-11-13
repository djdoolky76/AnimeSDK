#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class BNBOAMEBAOE;
class GAFMCFPGLCK;
namespace RPG::GameCore { class TaskContext; }

#define HGAHEILLFJL_AKBFGAMFKFB_OFFSET UNITYSDK_OFFSET(0x1C435F10)
#define HGAHEILLFJL_BKPGNCBNMGP_OFFSET UNITYSDK_OFFSET(0x1C435A00)
#define HGAHEILLFJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4359F0)
#define HGAHEILLFJL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C435EC0)
#define HGAHEILLFJL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1C435A50)
#define HGAHEILLFJL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1C435E10)
#define HGAHEILLFJL_TICK_OFFSET UNITYSDK_OFFSET(0x1C435E60)

inline static constexpr unsigned int HGAHEILLFJL_TypeDefinitionIndex = 59391;

	class HGAHEILLFJL : public ::GELIALJDFBL
	{
	public:
		::BNBOAMEBAOE* JLMAKNFAEBH; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::GAFMCFPGLCK* OFKGLJOAMLD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GAFMCFPGLCK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GAFMCFPGLCK*))((::PBYTE)hIl2Cpp + HGAHEILLFJL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void BKPGNCBNMGP(::BNBOAMEBAOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNBOAMEBAOE*))((::PBYTE)hIl2Cpp + HGAHEILLFJL_BKPGNCBNMGP_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAHEILLFJL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAHEILLFJL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HGAHEILLFJL_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAHEILLFJL_DISPOSE_OFFSET))(this);
		}

		::System::Void AKBFGAMFKFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAHEILLFJL_AKBFGAMFKFB_OFFSET))(this);
		}

	};
