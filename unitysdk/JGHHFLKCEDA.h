#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
namespace System { class Object; }

#define JGHHFLKCEDA_CTOR_OFFSET UNITYSDK_OFFSET(0xB19A7A0)
#define JGHHFLKCEDA_INIT_OFFSET UNITYSDK_OFFSET(0xB19A6C0)
#define JGHHFLKCEDA_KGCLCONPPNF_OFFSET UNITYSDK_OFFSET(0xB19A750)
#define JGHHFLKCEDA__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB19A710)

	class JGHHFLKCEDA : public ::RPG::Client::BaseModule
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHHFLKCEDA_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHHFLKCEDA_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHHFLKCEDA__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void KGCLCONPPNF(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + JGHHFLKCEDA_KGCLCONPPNF_OFFSET))(this, a1, a2);
		}

	};
