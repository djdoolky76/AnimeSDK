#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class BAJEFKOPOPL;
class CENEFPOMFKG;
class CKMLAGBDPIL;
class EICKJNMDHOC;
class EPEBKCOIKNK;
class ILMMNCLCDIM;
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class GameWorld; }

#define HHPNMFABCEI_CTOR_OFFSET UNITYSDK_OFFSET(0x15CD75F0)
#define HHPNMFABCEI_JPKEFHAMAPB_OFFSET UNITYSDK_OFFSET(0x15CD72F0)
#define HHPNMFABCEI_LAEHKGNMOMG_OFFSET UNITYSDK_OFFSET(0x15CD6B60)
#define HHPNMFABCEI_LNBBIGFDAEH_1_OFFSET UNITYSDK_OFFSET(0x15CD6DF0)
#define HHPNMFABCEI_LNBBIGFDAEH_OFFSET UNITYSDK_OFFSET(0x15CD6BE0)
#define HHPNMFABCEI_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x15CD74E0)
#define HHPNMFABCEI_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x15CD7580)

	class HHPNMFABCEI : public ::System::Object
	{
	public:
		::ILMMNCLCDIM* FIDOJLHKINO; // 0x10
		::EPEBKCOIKNK* CIDKIGENIFM; // 0x18
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x20
		::EICKJNMDHOC* NNHPEBIINBM; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHPNMFABCEI_CTOR_OFFSET))(this);
		}

		::System::Boolean LAEHKGNMOMG(::CKMLAGBDPIL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CKMLAGBDPIL*))((::PBYTE)hIl2Cpp + HHPNMFABCEI_LAEHKGNMOMG_OFFSET))(this, a1);
		}

		::CKMLAGBDPIL* LNBBIGFDAEH(::BAJEFKOPOPL* a1)
		{
			return ((::CKMLAGBDPIL*(*)(::PVOID, ::BAJEFKOPOPL*))((::PBYTE)hIl2Cpp + HHPNMFABCEI_LNBBIGFDAEH_OFFSET))(this, a1);
		}

		::CKMLAGBDPIL* LNBBIGFDAEH_1(::CENEFPOMFKG* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::CKMLAGBDPIL*(*)(::PVOID, ::CENEFPOMFKG*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + HHPNMFABCEI_LNBBIGFDAEH_1_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntityList* JPKEFHAMAPB(::CENEFPOMFKG* a1)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::CENEFPOMFKG*))((::PBYTE)hIl2Cpp + HHPNMFABCEI_JPKEFHAMAPB_OFFSET))(this, a1);
		}

		::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + HHPNMFABCEI_ONPLUGININIT_OFFSET))(this, a1);
		}

		::System::Void OnPluginUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHPNMFABCEI_ONPLUGINUNINIT_OFFSET))(this);
		}

	};
