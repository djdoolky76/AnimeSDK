#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define APBJECGCLHI_BJNCNCHJDKE_OFFSET UNITYSDK_OFFSET(0x138711E0)
#define APBJECGCLHI_EOIFFGAEPBE_OFFSET UNITYSDK_OFFSET(0x138714D0)
#define APBJECGCLHI_FABBOGDLKIJ_OFFSET UNITYSDK_OFFSET(0x13871100)
#define APBJECGCLHI_MLJOBECHHAC_OFFSET UNITYSDK_OFFSET(0x138712D0)

inline static constexpr unsigned int APBJECGCLHI_TypeDefinitionIndex = 69096;

class APBJECGCLHI : public ::System::Object
{
public:
	static ::UnityEngine::Vector3 FABBOGDLKIJ(::System::Int32 ONGKNJDGBLJ, ::System::Int32 JOGJHDBEDPN, ::System::Int32 FDFEDLFEIIN, ::System::Single KEFMPOMFNIB, ::System::Single BHHEKLPDEHC)
	{
		return ((::UnityEngine::Vector3(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + APBJECGCLHI_FABBOGDLKIJ_OFFSET))(ONGKNJDGBLJ, JOGJHDBEDPN, FDFEDLFEIIN, KEFMPOMFNIB, BHHEKLPDEHC);
	}

	static ::System::Void BJNCNCHJDKE(::UnityEngine::Vector3 GADABMPMNEM, ::System::Single KIMGDIHCLOP, ::System::Single KIHHIPJMNDN, ::System::UInt16& ONGKNJDGBLJ, ::System::UInt16& JOGJHDBEDPN, ::System::UInt16& FDFEDLFEIIN)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::UInt16&, ::System::UInt16&, ::System::UInt16&))((::PBYTE)hIl2Cpp + APBJECGCLHI_BJNCNCHJDKE_OFFSET))(GADABMPMNEM, KIMGDIHCLOP, KIHHIPJMNDN, ONGKNJDGBLJ, JOGJHDBEDPN, FDFEDLFEIIN);
	}

	static ::System::Int64 MLJOBECHHAC(::UnityEngine::Vector3 GADABMPMNEM, ::System::Single KIMGDIHCLOP, ::System::Single KIHHIPJMNDN)
	{
		return ((::System::Int64(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + APBJECGCLHI_MLJOBECHHAC_OFFSET))(GADABMPMNEM, KIMGDIHCLOP, KIHHIPJMNDN);
	}

	static ::System::Int64 EOIFFGAEPBE(::System::UInt16 HAAEBCOBKFF, ::System::UInt16 BFMMEICFNCD, ::System::UInt16 GNHOCNHLCCA)
	{
		return ((::System::Int64(*)(::System::UInt16, ::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + APBJECGCLHI_EOIFFGAEPBE_OFFSET))(HAAEBCOBKFF, BFMMEICFNCD, GNHOCNHLCCA);
	}
};
