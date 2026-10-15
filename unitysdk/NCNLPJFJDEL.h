#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class AddDynamicEntityParam; }
namespace RPG::GameCore { class TaskContext; }

#define NCNLPJFJDEL_CTOR_OFFSET UNITYSDK_OFFSET(0xBB17430)
#define NCNLPJFJDEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB17500)
#define NCNLPJFJDEL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB17540)
#define NCNLPJFJDEL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBB17970)
#define NCNLPJFJDEL_TICK_OFFSET UNITYSDK_OFFSET(0xBB179C0)

inline static constexpr unsigned int NCNLPJFJDEL_TypeDefinitionIndex = 54810;

	class NCNLPJFJDEL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::AddDynamicEntityParam* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::StringHash IMCFADGAEIN; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddDynamicEntityParam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddDynamicEntityParam*))((::PBYTE)hIl2Cpp + NCNLPJFJDEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCNLPJFJDEL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCNLPJFJDEL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCNLPJFJDEL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NCNLPJFJDEL_TICK_OFFSET))(this, a1);
		}

	};
