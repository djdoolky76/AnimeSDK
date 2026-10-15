#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByStatusCount; }
namespace RPG::GameCore { class TaskContext; }

#define NPHCDDPKFAC_CTOR_OFFSET UNITYSDK_OFFSET(0xBCFD9B0)
#define NPHCDDPKFAC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBCFDA90)

	class NPHCDDPKFAC
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByStatusCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByStatusCount*))((::PBYTE)hIl2Cpp + NPHCDDPKFAC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHCDDPKFAC_ONTASKBEGIN_OFFSET))(this);
		}

	};
