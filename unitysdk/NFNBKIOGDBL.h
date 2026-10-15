#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GELIALJDFBL;
namespace RPG::GameCore { class MakeSuccess; }
namespace RPG::GameCore { class TaskContext; }

#define NFNBKIOGDBL_CTOR_OFFSET UNITYSDK_OFFSET(0xBB9BE50)
#define NFNBKIOGDBL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB9BF10)
#define NFNBKIOGDBL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB9BFE0)
#define NFNBKIOGDBL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBB9C2C0)
#define NFNBKIOGDBL_TICK_OFFSET UNITYSDK_OFFSET(0xBB9C520)

inline static constexpr unsigned int NFNBKIOGDBL_TypeDefinitionIndex = 55167;

	class NFNBKIOGDBL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::MakeSuccess* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::GELIALJDFBL* LFONBBDGMEN; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MakeSuccess* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MakeSuccess*))((::PBYTE)hIl2Cpp + NFNBKIOGDBL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNBKIOGDBL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNBKIOGDBL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNBKIOGDBL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NFNBKIOGDBL_TICK_OFFSET))(this, a1);
		}

	};
