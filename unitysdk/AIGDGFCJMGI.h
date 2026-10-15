#pragma once
#include "unitysdk/unitysdk.h"
class GELIALJDFBL;
namespace RPG::GameCore { class ConvinceMoveNextTurn; }
namespace RPG::GameCore { class TaskContext; }

#define AIGDGFCJMGI_CTOR_OFFSET UNITYSDK_OFFSET(0xEBA34E0)
#define AIGDGFCJMGI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEBA3510)
#define AIGDGFCJMGI_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0xEBA3700)

	class AIGDGFCJMGI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConvinceMoveNextTurn* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConvinceMoveNextTurn*))((::PBYTE)hIl2Cpp + AIGDGFCJMGI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGDGFCJMGI_ONTASKBEGIN_OFFSET))(this);
		}

		::GELIALJDFBL* SetNextTask(::GELIALJDFBL* a1)
		{
			return ((::GELIALJDFBL*(*)(::PVOID, ::GELIALJDFBL*))((::PBYTE)hIl2Cpp + AIGDGFCJMGI_SETNEXTTASK_OFFSET))(this, a1);
		}

	};
