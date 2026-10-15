#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChimeraTeamData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ILEPNPGJBMB_CTOR_OFFSET UNITYSDK_OFFSET(0x164B0260)
#define ILEPNPGJBMB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164AFFB0)
#define ILEPNPGJBMB_IPPMJHAPKLD_OFFSET UNITYSDK_OFFSET(0x164B0220)
#define ILEPNPGJBMB_PKALFLHMICO_OFFSET UNITYSDK_OFFSET(0x164B0020)

	class ILEPNPGJBMB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChimeraTeamData*>* NGPGDNHGPPD; // 0x10
		::System::UInt32 PPGBOMAHHEO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEPNPGJBMB_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEPNPGJBMB_DISPOSE_OFFSET))(this);
		}

		::System::Void PKALFLHMICO(::System::Collections::Generic::List_1<::RPG::Client::ChimeraTeamData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraTeamData*>*))((::PBYTE)hIl2Cpp + ILEPNPGJBMB_PKALFLHMICO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChimeraTeamData*>* IPPMJHAPKLD()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraTeamData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEPNPGJBMB_IPPMJHAPKLD_OFFSET))(this);
		}

	};
