#pragma once
#include "unitysdk/unitysdk.h"
class CEGJADNLKED;
namespace RPG::GameCore { class ST_Side_SearchSmartObject; }
namespace RPG::GameCore { class TaskContext; }

#define BKEAFMFOAPH_CTOR_OFFSET UNITYSDK_OFFSET(0xB7AE000)
#define BKEAFMFOAPH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7AE0C0)
#define BKEAFMFOAPH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB7AE230)
#define BKEAFMFOAPH_TICK_OFFSET UNITYSDK_OFFSET(0xB7AE120)

	class BKEAFMFOAPH
	{
	public:
		::CEGJADNLKED* DOCOOLBBMJM; // 0x28
		::System::Single PGMIOKKLHIE; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_SearchSmartObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_SearchSmartObject*))((::PBYTE)hIl2Cpp + BKEAFMFOAPH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKEAFMFOAPH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BKEAFMFOAPH_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKEAFMFOAPH_ONTASKRESET_OFFSET))(this);
		}

	};
