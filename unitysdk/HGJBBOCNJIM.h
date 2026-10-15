#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMMNJAMJJCN.h"
namespace RPG::GameCore { class GridFightWaitDragEquip; }
namespace RPG::GameCore { class TaskContext; }

#define HGJBBOCNJIM_BLBGBLLHDAB_OFFSET UNITYSDK_OFFSET(0x15CA0F10)
#define HGJBBOCNJIM_CTOR_OFFSET UNITYSDK_OFFSET(0x15CA0870)
#define HGJBBOCNJIM_KOHOGMCJHBH_OFFSET UNITYSDK_OFFSET(0x15CA0880)
#define HGJBBOCNJIM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CA09A0)
#define HGJBBOCNJIM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15CA0E70)

inline static constexpr unsigned int HGJBBOCNJIM_TypeDefinitionIndex = 53591;

	class HGJBBOCNJIM : public ::CMMNJAMJJCN
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28
		::RPG::GameCore::GridFightWaitDragEquip* IGHAHBNLIJA; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightWaitDragEquip* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightWaitDragEquip*))((::PBYTE)hIl2Cpp + HGJBBOCNJIM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KOHOGMCJHBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJBBOCNJIM_KOHOGMCJHBH_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJBBOCNJIM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJBBOCNJIM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void BLBGBLLHDAB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HGJBBOCNJIM_BLBGBLLHDAB_OFFSET))(this, a1);
		}

	};
