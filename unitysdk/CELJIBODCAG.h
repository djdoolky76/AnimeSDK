#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CloudUIBattlePosRegion.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class CloudUIPosReporterMono; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CELJIBODCAG_CTOR_OFFSET UNITYSDK_OFFSET(0xC9E5D90)
#define CELJIBODCAG_DNLHBKDMIHI_OFFSET UNITYSDK_OFFSET(0xC9E5B60)

	class CELJIBODCAG : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::CloudUIBattlePosRegion, ::System::Object*>* EFMNDLPBIFF; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CELJIBODCAG_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* DNLHBKDMIHI(::RPG::Client::CloudUIPosReporterMono* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::RPG::Client::CloudUIPosReporterMono*))((::PBYTE)hIl2Cpp + CELJIBODCAG_DNLHBKDMIHI_OFFSET))(this, a1);
		}

	};
