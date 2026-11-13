#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RefreshMazeBuffTime; }
namespace RPG::GameCore { class TaskContext; }

#define IKFALCKOJPE_CTOR_OFFSET UNITYSDK_OFFSET(0x18078270)
#define IKFALCKOJPE_KAMHHLHACNC_OFFSET UNITYSDK_OFFSET(0x180782F0)
#define IKFALCKOJPE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x180782A0)

inline static constexpr unsigned int IKFALCKOJPE_TypeDefinitionIndex = 59632;

	class IKFALCKOJPE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RefreshMazeBuffTime* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RefreshMazeBuffTime*))((::PBYTE)hIl2Cpp + IKFALCKOJPE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFALCKOJPE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void KAMHHLHACNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFALCKOJPE_KAMHHLHACNC_OFFSET))(this);
		}

	};
