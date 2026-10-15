#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CloudUIBattlePosRegion.h"
#include "unitysdk/System/Object.h"
class MMHPBKNKBGP;
namespace RPG::Client { class CloudUIPosReporterMono; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IEAMIGONODJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15EE7900)
#define IEAMIGONODJ_DNLHBKDMIHI_OFFSET UNITYSDK_OFFSET(0x15EE70E0)
#define IEAMIGONODJ_OOGADPGOAIK_OFFSET UNITYSDK_OFFSET(0x15EE7830)

	class IEAMIGONODJ : public ::System::Object
	{
	public:
		::RPG::Client::CloudUIBattlePosRegion LOJFDBJKOEB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEAMIGONODJ_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* DNLHBKDMIHI(::RPG::Client::CloudUIPosReporterMono* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::RPG::Client::CloudUIPosReporterMono*))((::PBYTE)hIl2Cpp + IEAMIGONODJ_DNLHBKDMIHI_OFFSET))(this, a1);
		}

		::MMHPBKNKBGP* OOGADPGOAIK()
		{
			return ((::MMHPBKNKBGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEAMIGONODJ_OOGADPGOAIK_OFFSET))(this);
		}

	};
