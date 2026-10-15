#pragma once
#include "unitysdk/unitysdk.h"
class APFIHNDDPIO;
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }

#define LOLIACIGHAE_CTOR_OFFSET UNITYSDK_OFFSET(0xB80BE90)
#define LOLIACIGHAE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB80BFB0)
#define LOLIACIGHAE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB80C110)

	class LOLIACIGHAE
	{
	public:
		::KFELGAIGHAP* HGJLJCFHOIH; // 0x28
		::KFELGAIGHAP* IOJBMHGLOFP; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::APFIHNDDPIO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::APFIHNDDPIO*))((::PBYTE)hIl2Cpp + LOLIACIGHAE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOLIACIGHAE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOLIACIGHAE_ONTASKBEGIN_OFFSET))(this);
		}

	};
