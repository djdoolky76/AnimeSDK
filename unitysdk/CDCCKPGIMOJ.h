#pragma once
#include "unitysdk/unitysdk.h"
class DOAPHOAMCDH;
namespace RPG::GameCore { class TaskContext; }

#define CDCCKPGIMOJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC761C70)
#define CDCCKPGIMOJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC761CA0)

	class CDCCKPGIMOJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DOAPHOAMCDH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DOAPHOAMCDH*))((::PBYTE)hIl2Cpp + CDCCKPGIMOJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCCKPGIMOJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
