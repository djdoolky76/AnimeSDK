#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MainMissionData; }

#define AMCPKPPGPAG_CTOR_OFFSET UNITYSDK_OFFSET(0x155778C0)
#define AMCPKPPGPAG_HDILBJHMBMF_OFFSET UNITYSDK_OFFSET(0x155777E0)

	class AMCPKPPGPAG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMCPKPPGPAG_CTOR_OFFSET))(this);
		}

		::System::Boolean HDILBJHMBMF(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + AMCPKPPGPAG_HDILBJHMBMF_OFFSET))(this, a1);
		}

	};
