#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

#define BECODHGIKMH_CTOR_OFFSET UNITYSDK_OFFSET(0xB7C8290)
#define BECODHGIKMH_INIT_OFFSET UNITYSDK_OFFSET(0xB7C81C0)
#define BECODHGIKMH__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB7C8250)
#define BECODHGIKMH__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB7C8210)

inline static constexpr unsigned int BECODHGIKMH_TypeDefinitionIndex = 63419;

	class BECODHGIKMH : public ::RPG::Client::BaseModule
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BECODHGIKMH_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BECODHGIKMH_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BECODHGIKMH__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BECODHGIKMH__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

	};
