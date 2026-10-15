#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMMNJAMJJCN.h"
#include "unitysdk/RPG/GameCore/GridFightPrepWaitCustomTimeType.h"
namespace RPG::GameCore { class GridFightPrepWaitCustomTime; }
namespace RPG::GameCore { class TaskContext; }

#define LOLPJPHDKAL_BIPBKHDOEPL_OFFSET UNITYSDK_OFFSET(0xB80D170)
#define LOLPJPHDKAL_CTOR_OFFSET UNITYSDK_OFFSET(0xB80CAC0)
#define LOLPJPHDKAL_DKPDGPKOHBF_OFFSET UNITYSDK_OFFSET(0xB80CB20)
#define LOLPJPHDKAL_KOHOGMCJHBH_OFFSET UNITYSDK_OFFSET(0xB80CAD0)
#define LOLPJPHDKAL_ONDGGNCOOFH_OFFSET UNITYSDK_OFFSET(0xB80D1C0)
#define LOLPJPHDKAL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB80CD20)
#define LOLPJPHDKAL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB80D270)

	class LOLPJPHDKAL : public ::CMMNJAMJJCN
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28
		::RPG::GameCore::GridFightPrepWaitCustomTime* IGHAHBNLIJA; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightPrepWaitCustomTime* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightPrepWaitCustomTime*))((::PBYTE)hIl2Cpp + LOLPJPHDKAL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KOHOGMCJHBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOLPJPHDKAL_KOHOGMCJHBH_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOLPJPHDKAL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void ONDGGNCOOFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOLPJPHDKAL_ONDGGNCOOFH_OFFSET))(this);
		}

		::System::Void DKPDGPKOHBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOLPJPHDKAL_DKPDGPKOHBF_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOLPJPHDKAL_ONTASKRESET_OFFSET))(this);
		}

		::RPG::GameCore::GridFightPrepWaitCustomTimeType BIPBKHDOEPL()
		{
			return ((::RPG::GameCore::GridFightPrepWaitCustomTimeType(*)(::PVOID))((::PBYTE)hIl2Cpp + LOLPJPHDKAL_BIPBKHDOEPL_OFFSET))(this);
		}

	};
