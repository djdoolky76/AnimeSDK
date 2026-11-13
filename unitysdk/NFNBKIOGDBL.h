#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GELIALJDFBL;
namespace RPG::GameCore { class MakeSuccess; }
namespace RPG::GameCore { class TaskContext; }

#define NFNBKIOGDBL_CTOR_OFFSET UNITYSDK_OFFSET(0x18E7DB10)
#define NFNBKIOGDBL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18E7DBD0)
#define NFNBKIOGDBL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18E7DCA0)
#define NFNBKIOGDBL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18E7DED0)
#define NFNBKIOGDBL_TICK_OFFSET UNITYSDK_OFFSET(0x18E7E0C0)

inline static constexpr unsigned int NFNBKIOGDBL_TypeDefinitionIndex = 56348;

	class NFNBKIOGDBL : public ::GELIALJDFBL
	{
	public:
		::GELIALJDFBL* LFONBBDGMEN; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::MakeSuccess* OFKGLJOAMLD; // 0x28
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
