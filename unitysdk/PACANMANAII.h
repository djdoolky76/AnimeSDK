#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PlayMissionTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PACANMANAII_BFFIPFJOGGC_OFFSET UNITYSDK_OFFSET(0xBFC5B10)
#define PACANMANAII_CJAOFBMLBIG_OFFSET UNITYSDK_OFFSET(0xBFC5330)
#define PACANMANAII_CTOR_OFFSET UNITYSDK_OFFSET(0xBFC4FE0)
#define PACANMANAII_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFC4FF0)
#define PACANMANAII_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xBFC51C0)
#define PACANMANAII_GMDBIMNLHKA_OFFSET UNITYSDK_OFFSET(0xBFC5040)
#define PACANMANAII_IEBLGFIKOME_OFFSET UNITYSDK_OFFSET(0xBFC5370)
#define PACANMANAII_KDCDKIMPGGE_OFFSET UNITYSDK_OFFSET(0xBFC5680)
#define PACANMANAII_MOENHPPCBIG_OFFSET UNITYSDK_OFFSET(0xBFC5BC0)
#define PACANMANAII_ONSKIP_OFFSET UNITYSDK_OFFSET(0xBFC5AC0)
#define PACANMANAII_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFC51D0)
#define PACANMANAII_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBFC5A10)
#define PACANMANAII_TICK_OFFSET UNITYSDK_OFFSET(0xBFC5A60)

	class PACANMANAII : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PlayMissionTalk* OFKGLJOAMLD; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* BMDHEPMLBGJ; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		// static const ::System::String* ENEFLIPMBOK; // 0x0
		// static const ::System::String* PFDEFDGCFEB; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayMissionTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayMissionTalk*))((::PBYTE)hIl2Cpp + PACANMANAII_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACANMANAII_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PACANMANAII_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACANMANAII_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACANMANAII_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PACANMANAII_TICK_OFFSET))(this, a1);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACANMANAII_ONSKIP_OFFSET))(this);
		}

		::System::Void CJAOFBMLBIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACANMANAII_CJAOFBMLBIG_OFFSET))(this);
		}

		::System::Void IEBLGFIKOME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACANMANAII_IEBLGFIKOME_OFFSET))(this);
		}

		::System::Void KDCDKIMPGGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACANMANAII_KDCDKIMPGGE_OFFSET))(this);
		}

		::System::Void MOENHPPCBIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACANMANAII_MOENHPPCBIG_OFFSET))(this);
		}

		::System::Void GMDBIMNLHKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PACANMANAII_GMDBIMNLHKA_OFFSET))(this);
		}

		::System::Boolean BFFIPFJOGGC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PACANMANAII_BFFIPFJOGGC_OFFSET))(this);
		}

	};
