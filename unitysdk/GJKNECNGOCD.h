#pragma once
#include "unitysdk/unitysdk.h"
class JKHKKELCKDJ;
namespace RPG::GameCore { class TaskContext; }

#define GJKNECNGOCD_CTOR_OFFSET UNITYSDK_OFFSET(0x15A6B990)
#define GJKNECNGOCD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A6B9C0)

	class GJKNECNGOCD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JKHKKELCKDJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JKHKKELCKDJ*))((::PBYTE)hIl2Cpp + GJKNECNGOCD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJKNECNGOCD_ONTASKBEGIN_OFFSET))(this);
		}

	};
