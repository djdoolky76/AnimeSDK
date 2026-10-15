#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class HDODANAJKGC;
namespace RPG::GameCore { class TaskContext; }

#define OIDLPGNODAF_CTOR_OFFSET UNITYSDK_OFFSET(0xBE7AB90)
#define OIDLPGNODAF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE7AC70)

	class OIDLPGNODAF
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HDODANAJKGC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HDODANAJKGC*))((::PBYTE)hIl2Cpp + OIDLPGNODAF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDLPGNODAF_ONTASKBEGIN_OFFSET))(this);
		}

	};
