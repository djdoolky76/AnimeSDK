#pragma once
#include "unitysdk/unitysdk.h"
class NBMCOICMHBC;
namespace RPG::GameCore { class TaskContext; }

#define DHNHPLPJPLF_CTOR_OFFSET UNITYSDK_OFFSET(0xEBEB9A0)
#define DHNHPLPJPLF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEBEB9D0)

	class DHNHPLPJPLF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NBMCOICMHBC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NBMCOICMHBC*))((::PBYTE)hIl2Cpp + DHNHPLPJPLF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNHPLPJPLF_ONTASKBEGIN_OFFSET))(this);
		}

	};
