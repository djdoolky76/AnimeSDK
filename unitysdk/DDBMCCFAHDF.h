#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RefreshMunicipalPedestrian; }
namespace RPG::GameCore { class TaskContext; }

#define DDBMCCFAHDF_CTOR_OFFSET UNITYSDK_OFFSET(0xE25CBA0)
#define DDBMCCFAHDF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE25CBD0)

	class DDBMCCFAHDF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RefreshMunicipalPedestrian* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RefreshMunicipalPedestrian*))((::PBYTE)hIl2Cpp + DDBMCCFAHDF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDBMCCFAHDF_ONTASKBEGIN_OFFSET))(this);
		}

	};
