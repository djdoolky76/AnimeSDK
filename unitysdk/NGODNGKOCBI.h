#pragma once
#include "unitysdk/unitysdk.h"
class MNAKABIKBLP;
namespace RPG::GameCore { class TaskContext; }

#define NGODNGKOCBI_CTOR_OFFSET UNITYSDK_OFFSET(0xBBB2B00)
#define NGODNGKOCBI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBB2B30)

	class NGODNGKOCBI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MNAKABIKBLP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MNAKABIKBLP*))((::PBYTE)hIl2Cpp + NGODNGKOCBI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGODNGKOCBI_ONTASKBEGIN_OFFSET))(this);
		}

	};
