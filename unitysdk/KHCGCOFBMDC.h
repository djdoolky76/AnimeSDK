#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMJAGGOPGDD;
namespace RPG::Client { class NetPacket; }
namespace RPG::Client::Dev { class VirtualServerLaunchConfig; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KHCGCOFBMDC_CTOR_OFFSET UNITYSDK_OFFSET(0xB3FF630)
#define KHCGCOFBMDC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB3FF550)
#define KHCGCOFBMDC_DLHGEHNNCDA_OFFSET UNITYSDK_OFFSET(0xB3FF590)
#define KHCGCOFBMDC_EJACOFEBELP_OFFSET UNITYSDK_OFFSET(0xB3FF620)
#define KHCGCOFBMDC_EONHLGBKOAC_OFFSET UNITYSDK_OFFSET(0xB3FF5E0)

	class KHCGCOFBMDC : public ::System::Object
	{
	public:
		::RPG::Client::Dev::VirtualServerLaunchConfig* IDNKIOEBEIH; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::LMJAGGOPGDD*>* PPPPOOGFCBG; // 0x18
		::System::Boolean EGGNNPNDIDD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHCGCOFBMDC_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHCGCOFBMDC_DISPOSE_OFFSET))(this);
		}

		::System::Boolean DLHGEHNNCDA(::RPG::Client::NetPacket* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NetPacket*))((::PBYTE)hIl2Cpp + KHCGCOFBMDC_DLHGEHNNCDA_OFFSET))(this, a1);
		}

		::System::Void EONHLGBKOAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHCGCOFBMDC_EONHLGBKOAC_OFFSET))(this);
		}

		::System::Boolean EJACOFEBELP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHCGCOFBMDC_EJACOFEBELP_OFFSET))(this);
		}

	};
