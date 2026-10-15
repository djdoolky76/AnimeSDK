#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HJIOMFDJLLA.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class MOMODPMFIKE;

#define DPFAEIJOIOD_CAGLJEMEJIK_OFFSET UNITYSDK_OFFSET(0x11FFB530)
#define DPFAEIJOIOD_CLEAR_OFFSET UNITYSDK_OFFSET(0x11FFB4E0)
#define DPFAEIJOIOD_CTOR_OFFSET UNITYSDK_OFFSET(0x11FFB5C0)
#define DPFAEIJOIOD_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x11FFB5A0)
#define DPFAEIJOIOD_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x11FFB5B0)

	class DPFAEIJOIOD : public ::System::Object
	{
	public:
		::MOMODPMFIKE* _Owner_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFAEIJOIOD_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFAEIJOIOD_CLEAR_OFFSET))(this);
		}

		::System::Void CAGLJEMEJIK(::RPG::GameCore::FixPoint a1, ::HJIOMFDJLLA a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::HJIOMFDJLLA))((::PBYTE)hIl2Cpp + DPFAEIJOIOD_CAGLJEMEJIK_OFFSET))(this, a1, a2);
		}

		::MOMODPMFIKE* get_Owner()
		{
			return ((::MOMODPMFIKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFAEIJOIOD_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_Owner(::MOMODPMFIKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOMODPMFIKE*))((::PBYTE)hIl2Cpp + DPFAEIJOIOD_SET_OWNER_OFFSET))(this, a1);
		}

	};
