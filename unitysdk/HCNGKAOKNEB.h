#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VCameraConfig; }

#define HCNGKAOKNEB_MCNGJFOADFK_OFFSET UNITYSDK_OFFSET(0x15C29B90)

	class HCNGKAOKNEB : public ::System::Object
	{
	public:
		static ::System::Void MCNGJFOADFK(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::VCameraConfig* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::VCameraConfig*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HCNGKAOKNEB_MCNGJFOADFK_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

	};
