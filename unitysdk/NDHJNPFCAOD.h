#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HJIOMFDJLLA.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class GFKHDOCGBJE;
class JHIGAEIELKO;

#define NDHJNPFCAOD_APPLYVALUERULE_OFFSET UNITYSDK_OFFSET(0xBB29DD0)
#define NDHJNPFCAOD_CREATE_OFFSET UNITYSDK_OFFSET(0xBB29D40)
#define NDHJNPFCAOD_CTOR_OFFSET UNITYSDK_OFFSET(0xBB29E50)

	class NDHJNPFCAOD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHJNPFCAOD_CTOR_OFFSET))(this);
		}

		::GFKHDOCGBJE* Create(::JHIGAEIELKO* a1)
		{
			return ((::GFKHDOCGBJE*(*)(::PVOID, ::JHIGAEIELKO*))((::PBYTE)hIl2Cpp + NDHJNPFCAOD_CREATE_OFFSET))(this, a1);
		}

		::System::Void ApplyValueRule(::JHIGAEIELKO* a1, ::RPG::GameCore::FixPoint a2, ::HJIOMFDJLLA a3)
		{
			return ((::System::Void(*)(::PVOID, ::JHIGAEIELKO*, ::RPG::GameCore::FixPoint, ::HJIOMFDJLLA))((::PBYTE)hIl2Cpp + NDHJNPFCAOD_APPLYVALUERULE_OFFSET))(this, a1, a2, a3);
		}

	};
