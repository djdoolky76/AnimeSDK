#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class NBLICBHDAFM;
namespace RPG::GameCore { class TaskContext; }

#define IFKKNKNHAPM_CTOR_OFFSET UNITYSDK_OFFSET(0x15F1F410)
#define IFKKNKNHAPM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15F1F4F0)

	class IFKKNKNHAPM
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NBLICBHDAFM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NBLICBHDAFM*))((::PBYTE)hIl2Cpp + IFKKNKNHAPM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFKKNKNHAPM_ONTASKBEGIN_OFFSET))(this);
		}

	};
