#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class FlipEraRegion; }
namespace RPG::GameCore { class TaskContext; }

#define ADKAEGOCBON_CTOR_OFFSET UNITYSDK_OFFSET(0xB142AA0)
#define ADKAEGOCBON_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB142AD0)

	class ADKAEGOCBON
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FlipEraRegion* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FlipEraRegion*))((::PBYTE)hIl2Cpp + ADKAEGOCBON_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKAEGOCBON_ONTASKBEGIN_OFFSET))(this);
		}

	};
