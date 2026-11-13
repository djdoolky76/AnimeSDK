#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropCurveMovePause; }
namespace RPG::GameCore { class TaskContext; }

#define OMHINGEKCBC_CTOR_OFFSET UNITYSDK_OFFSET(0x17D543E0)
#define OMHINGEKCBC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17D54410)

inline static constexpr unsigned int OMHINGEKCBC_TypeDefinitionIndex = 59563;

	class OMHINGEKCBC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropCurveMovePause* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropCurveMovePause*))((::PBYTE)hIl2Cpp + OMHINGEKCBC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHINGEKCBC_ONTASKBEGIN_OFFSET))(this);
		}

	};
