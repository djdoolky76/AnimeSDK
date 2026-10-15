#pragma once
#include "unitysdk/unitysdk.h"
class OHONOHOIOJA;
namespace RPG::GameCore { class TaskContext; }

#define IHHADMBEKAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1641EE60)
#define IHHADMBEKAK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1641EE90)

	class IHHADMBEKAK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OHONOHOIOJA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OHONOHOIOJA*))((::PBYTE)hIl2Cpp + IHHADMBEKAK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHADMBEKAK_ONTASKBEGIN_OFFSET))(this);
		}

	};
