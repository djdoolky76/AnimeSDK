#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PAMIGLDMHFH.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
class BBOFEHOPCEC;
class FHLBIPIKFEJ;
class NAKCADNKBCK;
namespace RPG::GameCore { class StateTreeReactionStateConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PJKPAPOHCJA_CTOR_OFFSET UNITYSDK_OFFSET(0xC299080)
#define PJKPAPOHCJA_GAHIJOOEMFF_OFFSET UNITYSDK_OFFSET(0xC2994C0)
#define PJKPAPOHCJA_JAENAEMJIOC_OFFSET UNITYSDK_OFFSET(0xC299990)
#define PJKPAPOHCJA_NFANNGGMHAI_OFFSET UNITYSDK_OFFSET(0xC299240)
#define PJKPAPOHCJA_OBAOGFHPPFC_OFFSET UNITYSDK_OFFSET(0xC299A10)

	class PJKPAPOHCJA : public ::PAMIGLDMHFH
	{
	public:
		::NAKCADNKBCK* PKEILLOHGFC; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::BBOFEHOPCEC*>* FFFLIDJBKBI; // 0x78
		::System::Void _ctor(::RPG::GameCore::StateTreeReactionStateConfig* a1, ::RPG::GameCore::TaskContext* a2, ::FHLBIPIKFEJ* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StateTreeReactionStateConfig*, ::RPG::GameCore::TaskContext*, ::FHLBIPIKFEJ*, ::System::Int32))((::PBYTE)hIl2Cpp + PJKPAPOHCJA_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NFANNGGMHAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJKPAPOHCJA_NFANNGGMHAI_OFFSET))(this);
		}

		::System::Void GAHIJOOEMFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJKPAPOHCJA_GAHIJOOEMFF_OFFSET))(this);
		}

		::RPG::GameCore::TaskState JAENAEMJIOC(::System::Single a1)
		{
			return ((::RPG::GameCore::TaskState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PJKPAPOHCJA_JAENAEMJIOC_OFFSET))(this, a1);
		}

		::System::Void OBAOGFHPPFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJKPAPOHCJA_OBAOGFHPPFC_OFFSET))(this);
		}

	};
