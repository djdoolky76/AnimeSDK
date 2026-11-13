#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class CCMNOOILJFM;
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DKGPCBDCEBL_CTOR_OFFSET UNITYSDK_OFFSET(0x18C14200)
#define DKGPCBDCEBL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18C14290)
#define DKGPCBDCEBL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18C142F0)
#define DKGPCBDCEBL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18C14450)
#define DKGPCBDCEBL_TICK_OFFSET UNITYSDK_OFFSET(0x18C144A0)

inline static constexpr unsigned int DKGPCBDCEBL_TypeDefinitionIndex = 59410;

	class DKGPCBDCEBL : public ::GELIALJDFBL
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* JICPMFEHCHN; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CCMNOOILJFM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CCMNOOILJFM*))((::PBYTE)hIl2Cpp + DKGPCBDCEBL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKGPCBDCEBL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKGPCBDCEBL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKGPCBDCEBL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DKGPCBDCEBL_TICK_OFFSET))(this, a1);
		}

	};
