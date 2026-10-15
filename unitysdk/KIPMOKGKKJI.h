#pragma once
#include "unitysdk/unitysdk.h"
class FOANFBELJLK;
namespace RPG::GameCore { class ShowBattleWhiteboxImage; }
namespace RPG::GameCore { class TaskContext; }

#define KIPMOKGKKJI_CTOR_OFFSET UNITYSDK_OFFSET(0xB432EA0)
#define KIPMOKGKKJI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB432ED0)

inline static constexpr unsigned int KIPMOKGKKJI_TypeDefinitionIndex = 58618;

	class KIPMOKGKKJI
	{
	public:
		::FOANFBELJLK* DMFEKIIDMFL; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleWhiteboxImage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleWhiteboxImage*))((::PBYTE)hIl2Cpp + KIPMOKGKKJI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIPMOKGKKJI_ONTASKBEGIN_OFFSET))(this);
		}

	};
