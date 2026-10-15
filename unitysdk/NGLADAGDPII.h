#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GELIALJDFBL;
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class Retarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NGLADAGDPII_CTOR_OFFSET UNITYSDK_OFFSET(0xBBAC2F0)
#define NGLADAGDPII_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBAC450)
#define NGLADAGDPII_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBAC550)
#define NGLADAGDPII_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBBACD00)
#define NGLADAGDPII_TICK_OFFSET UNITYSDK_OFFSET(0xBBACD50)

	class NGLADAGDPII : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* FNLJDEPHGFK; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Collections::Generic::List_1<::KFELGAIGHAP*>* FBAGEMHGIIB; // 0x28
		::GELIALJDFBL* LLHKOFLJFCH; // 0x30
		::RPG::GameCore::Retarget* OFKGLJOAMLD; // 0x38
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* BLOMOEJJCIK; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::Retarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::Retarget*))((::PBYTE)hIl2Cpp + NGLADAGDPII_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLADAGDPII_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLADAGDPII_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLADAGDPII_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NGLADAGDPII_TICK_OFFSET))(this, a1);
		}

	};
