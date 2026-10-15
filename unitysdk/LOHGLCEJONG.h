#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ReactionItemConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define LOHGLCEJONG_CTOR_OFFSET UNITYSDK_OFFSET(0xB803790)
#define LOHGLCEJONG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB803980)
#define LOHGLCEJONG_GBBFDDCBHFC_OFFSET UNITYSDK_OFFSET(0xB803B60)
#define LOHGLCEJONG_GHDIJCNKKOM_OFFSET UNITYSDK_OFFSET(0xB803BD0)
#define LOHGLCEJONG_MBMHBAKGLBP_OFFSET UNITYSDK_OFFSET(0xB803AE0)

inline static constexpr unsigned int LOHGLCEJONG_TypeDefinitionIndex = 52100;

	class LOHGLCEJONG : public ::System::Object
	{
	public:
		::System::String* NLCHCOEHFDH; // 0x10
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::KFELGAIGHAP* PEIHJAEIGHK; // 0x20
		::KFELGAIGHAP* OLPNJHPNJNG; // 0x28
		::System::String* MCFBLJDBCAC; // 0x30
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
