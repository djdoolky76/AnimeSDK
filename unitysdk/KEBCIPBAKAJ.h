#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GELIALJDFBL;
namespace RPG::GameCore { class PlayOrigamiTraceTalk; }
namespace RPG::GameCore { class TaskContext; }

#define KEBCIPBAKAJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB36FFF0)
#define KEBCIPBAKAJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB370010)
#define KEBCIPBAKAJ_FCGNLKCKNNE_OFFSET UNITYSDK_OFFSET(0xB3703C0)
#define KEBCIPBAKAJ_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB370000)
#define KEBCIPBAKAJ_ONSKIP_OFFSET UNITYSDK_OFFSET(0xB370B60)
#define KEBCIPBAKAJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB3700F0)
#define KEBCIPBAKAJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB370940)
#define KEBCIPBAKAJ_TICK_OFFSET UNITYSDK_OFFSET(0xB370A20)

	class KEBCIPBAKAJ : public ::GELIALJDFBL
	{
	public:
		::GELIALJDFBL* OBHCKPLBLGK; // 0x18
		::RPG::GameCore::PlayOrigamiTraceTalk* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::UInt32 KGGMOFBNALD; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayOrigamiTraceTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayOrigamiTraceTalk*))((::PBYTE)hIl2Cpp + KEBCIPBAKAJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KEBCIPBAKAJ_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEBCIPBAKAJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEBCIPBAKAJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEBCIPBAKAJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KEBCIPBAKAJ_TICK_OFFSET))(this, a1);
		}

		::System::UInt32 FCGNLKCKNNE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEBCIPBAKAJ_FCGNLKCKNNE_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEBCIPBAKAJ_ONSKIP_OFFSET))(this);
		}

	};
