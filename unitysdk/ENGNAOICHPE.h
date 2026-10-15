#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENGNAOICHPE;
namespace RPG::Client { class GridFightGameSession; }
namespace RPG::Client { class GridFightTraitBuffEffect; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENGNAOICHPE_CTOR_OFFSET UNITYSDK_OFFSET(0x155AD050)
#define ENGNAOICHPE_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x155ACFB0)
#define ENGNAOICHPE_GNECBOAAIFJ_OFFSET UNITYSDK_OFFSET(0x155AD120)

	class ENGNAOICHPE : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitBuffEffect*>* APPIAANONPF; // 0x10
		static ::ENGNAOICHPE** StaticGet_FLMODBLFAGD()
		{
			return (::ENGNAOICHPE**)UnitySDK::FromName("", "ENGNAOICHPE")->GetStaticField(0x517A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGNAOICHPE_CTOR_OFFSET))(this);
		}

		static ::ENGNAOICHPE* GGBLHEHJBDO()
		{
			return ((::ENGNAOICHPE*(*)())((::PBYTE)hIl2Cpp + ENGNAOICHPE_GGBLHEHJBDO_OFFSET))();
		}

		::System::Void GNECBOAAIFJ(::RPG::Client::GridFightGameSession* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameSession*))((::PBYTE)hIl2Cpp + ENGNAOICHPE_GNECBOAAIFJ_OFFSET))(this, a1);
		}

	};
