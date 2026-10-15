#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropCurveMoveStop; }
namespace RPG::GameCore { class TaskContext; }

#define GEKPHKPOEBK_CTOR_OFFSET UNITYSDK_OFFSET(0x159E0580)
#define GEKPHKPOEBK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159E05B0)

	class GEKPHKPOEBK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropCurveMoveStop* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropCurveMoveStop*))((::PBYTE)hIl2Cpp + GEKPHKPOEBK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKPHKPOEBK_ONTASKBEGIN_OFFSET))(this);
		}

	};
