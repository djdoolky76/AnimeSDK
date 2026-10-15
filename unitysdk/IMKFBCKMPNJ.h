#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MainMissionData; }

#define IMKFBCKMPNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x164DD820)
#define IMKFBCKMPNJ_HDILBJHMBMF_OFFSET UNITYSDK_OFFSET(0x164DD350)

	class IMKFBCKMPNJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMKFBCKMPNJ_CTOR_OFFSET))(this);
		}

		::System::Boolean HDILBJHMBMF(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + IMKFBCKMPNJ_HDILBJHMBMF_OFFSET))(this, a1);
		}

	};
