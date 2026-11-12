#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PhotoGraphShowIdentifyResult; }
namespace RPG::GameCore { class TaskContext; }

#define FNEHPMPAOBH_CTOR_OFFSET UNITYSDK_OFFSET(0x167DD5F0)
#define FNEHPMPAOBH_HDNEDLNJHOK_OFFSET UNITYSDK_OFFSET(0x167DD6A0)
#define FNEHPMPAOBH_LMCANKPKLJD_OFFSET UNITYSDK_OFFSET(0x167DD980)
#define FNEHPMPAOBH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x167DD620)

inline static constexpr unsigned int FNEHPMPAOBH_TypeDefinitionIndex = 54254;

	class FNEHPMPAOBH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PhotoGraphShowIdentifyResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphShowIdentifyResult*))((::PBYTE)hIl2Cpp + FNEHPMPAOBH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNEHPMPAOBH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void HDNEDLNJHOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNEHPMPAOBH_HDNEDLNJHOK_OFFSET))(this);
		}

		::System::Void LMCANKPKLJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNEHPMPAOBH_LMCANKPKLJD_OFFSET))(this);
		}

	};
