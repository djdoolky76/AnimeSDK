#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class EMHHFLMIMKI;
namespace RPG::GameCore { class TaskContext; }

#define CMEBOMFCENJ_CTOR_OFFSET UNITYSDK_OFFSET(0xDA29170)
#define CMEBOMFCENJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDA29250)

inline static constexpr unsigned int CMEBOMFCENJ_TypeDefinitionIndex = 54170;

	class CMEBOMFCENJ
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EMHHFLMIMKI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EMHHFLMIMKI*))((::PBYTE)hIl2Cpp + CMEBOMFCENJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMEBOMFCENJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
