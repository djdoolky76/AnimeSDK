#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ReactionItemConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define LOHGLCEJONG_CTOR_OFFSET UNITYSDK_OFFSET(0xC064570)
#define LOHGLCEJONG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC064750)
#define LOHGLCEJONG_GBBFDDCBHFC_OFFSET UNITYSDK_OFFSET(0xC064930)
#define LOHGLCEJONG_GHDIJCNKKOM_OFFSET UNITYSDK_OFFSET(0xC0649A0)
#define LOHGLCEJONG_MBMHBAKGLBP_OFFSET UNITYSDK_OFFSET(0xC0648B0)

inline static constexpr unsigned int LOHGLCEJONG_TypeDefinitionIndex = 53205;

	class LOHGLCEJONG : public ::System::Object
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x10
		::System::String* NLCHCOEHFDH; // 0x18
		::KFELGAIGHAP* OLPNJHPNJNG; // 0x20
		::System::String* MCFBLJDBCAC; // 0x28
		::KFELGAIGHAP* PEIHJAEIGHK; // 0x30
		::System::Void _ctor(::RPG::GameCore::ReactionItemConfig* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ReactionItemConfig*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LOHGLCEJONG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHGLCEJONG_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MBMHBAKGLBP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHGLCEJONG_MBMHBAKGLBP_OFFSET))(this);
		}

		::System::Void GBBFDDCBHFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHGLCEJONG_GBBFDDCBHFC_OFFSET))(this);
		}

		::RPG::GameCore::TaskContext* GHDIJCNKKOM()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHGLCEJONG_GHDIJCNKKOM_OFFSET))(this);
		}

	};
