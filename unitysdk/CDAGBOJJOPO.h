#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
#include "unitysdk/RPG/GameCore/GridFightNodeType.h"
class NJKFOJJDGGG;

#define CDAGBOJJOPO_CTOR_OFFSET UNITYSDK_OFFSET(0xC75E210)
#define CDAGBOJJOPO_DCEEFFIBNOE_OFFSET UNITYSDK_OFFSET(0xC75E2C0)
#define CDAGBOJJOPO_GPJEMEIKEPC_OFFSET UNITYSDK_OFFSET(0xC75E220)
#define CDAGBOJJOPO_HPKBOOIGILK_OFFSET UNITYSDK_OFFSET(0xC75E360)
#define CDAGBOJJOPO_MGEIPEOOFEO_OFFSET UNITYSDK_OFFSET(0xC75E4A0)
#define CDAGBOJJOPO_OJIOFLCLDDH_OFFSET UNITYSDK_OFFSET(0xC75E400)

	class CDAGBOJJOPO : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + CDAGBOJJOPO_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightNodeType GPJEMEIKEPC()
		{
			return ((::RPG::GameCore::GridFightNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CDAGBOJJOPO_GPJEMEIKEPC_OFFSET))(this);
		}

		::RPG::GameCore::GridFightNodeType DCEEFFIBNOE()
		{
			return ((::RPG::GameCore::GridFightNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CDAGBOJJOPO_DCEEFFIBNOE_OFFSET))(this);
		}

		::System::UInt32 HPKBOOIGILK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDAGBOJJOPO_HPKBOOIGILK_OFFSET))(this);
		}

		::System::UInt32 OJIOFLCLDDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDAGBOJJOPO_OJIOFLCLDDH_OFFSET))(this);
		}

		::System::Boolean MGEIPEOOFEO(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::GridFightNodeType a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::GridFightNodeType))((::PBYTE)hIl2Cpp + CDAGBOJJOPO_MGEIPEOOFEO_OFFSET))(this, a1, a2, a3);
		}

	};
