#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetFloatingTextInfo; }
namespace RPG::GameCore { class TaskContext; }

#define BINJDAPMGGP_CTOR_OFFSET UNITYSDK_OFFSET(0xB7943A0)
#define BINJDAPMGGP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7943D0)

	class BINJDAPMGGP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetFloatingTextInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetFloatingTextInfo*))((::PBYTE)hIl2Cpp + BINJDAPMGGP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINJDAPMGGP_ONTASKBEGIN_OFFSET))(this);
		}

	};
