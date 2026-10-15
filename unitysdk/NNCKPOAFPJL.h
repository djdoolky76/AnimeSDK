#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::GameCore { class ActiveTrackCamera; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define NNCKPOAFPJL_ADCMNCCCGPM_OFFSET UNITYSDK_OFFSET(0xBC9F2B0)
#define NNCKPOAFPJL_CTOR_OFFSET UNITYSDK_OFFSET(0xBC9ED50)
#define NNCKPOAFPJL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC9ED80)
#define NNCKPOAFPJL_JMCNOJFBBEB_OFFSET UNITYSDK_OFFSET(0xBC9FBA0)
#define NNCKPOAFPJL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC9EF40)

	class NNCKPOAFPJL
	{
	public:
		::System::String* CENMHIGCEDG; // 0x28
		::System::String* MLHHKCCAOJK; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ActiveTrackCamera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ActiveTrackCamera*))((::PBYTE)hIl2Cpp + NNCKPOAFPJL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCKPOAFPJL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCKPOAFPJL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void JMCNOJFBBEB(::RPG::Client::CameraDataAndFlags* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + NNCKPOAFPJL_JMCNOJFBBEB_OFFSET))(this, a1);
		}

		::System::Void ADCMNCCCGPM(::RPG::Client::CameraDataAndFlags* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + NNCKPOAFPJL_ADCMNCCCGPM_OFFSET))(this, a1);
		}

	};
