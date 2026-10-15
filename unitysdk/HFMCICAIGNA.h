#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class IDNEFFCGFFL;
namespace RPG::GameCore { class TaskContext; }

#define HFMCICAIGNA_CTOR_OFFSET UNITYSDK_OFFSET(0x15C8BBC0)
#define HFMCICAIGNA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C8BCA0)

	class HFMCICAIGNA
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IDNEFFCGFFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IDNEFFCGFFL*))((::PBYTE)hIl2Cpp + HFMCICAIGNA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFMCICAIGNA_ONTASKBEGIN_OFFSET))(this);
		}

	};
