#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IEKAMJMDCJG.h"
#include "unitysdk/NFLMPIHFBGP.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/GMMHNODILFH.h"
#include "unitysdk/JPOLPIJCJIJ.h"
#include "unitysdk/KMLHCDIGMGH.h"
#include "unitysdk/MoleMole/Config/ConfigInteractionFanCylinder.h"

namespace System { class String; }

#define EDIGCNEBNIN_AENGBFIDDBN_OFFSET UNITYSDK_OFFSET(0x16132750)
#define EDIGCNEBNIN_BGHLDANKAAJ_OFFSET UNITYSDK_OFFSET(0x16132EF0)
#define EDIGCNEBNIN_BKMIHBFLGAB_OFFSET UNITYSDK_OFFSET(0x16132B40)
#define EDIGCNEBNIN_DADFIPAFKNC_OFFSET UNITYSDK_OFFSET(0x16133100)
#define EDIGCNEBNIN_JGECEJIHMLG_OFFSET UNITYSDK_OFFSET(0x16132620)
#define EDIGCNEBNIN_JNDAJLMDEPA_OFFSET UNITYSDK_OFFSET(0x16132FB0)
#define EDIGCNEBNIN_JOKDMOCFMED_OFFSET UNITYSDK_OFFSET(0x16132860)
#define EDIGCNEBNIN_NGDEIDOPENB_OFFSET UNITYSDK_OFFSET(0x161326B0)
#define EDIGCNEBNIN_NOAOBMMHHGP_OFFSET UNITYSDK_OFFSET(0x16132A60)

inline static constexpr unsigned int EDIGCNEBNIN_TypeDefinitionIndex = 39675;

class EDIGCNEBNIN : public ::System::Object
{
public:
	// static const ::System::Int32 FIEACKDEPLA = 0x5; // 0x0
	// static const ::System::String* IPMAMILNJFD; // 0x0
	// static const ::System::Int32 OKJLINABMML = 0x1; // 0x0
	// static const ::System::Int32 JPOFNPAEPHB = 0x2; // 0x0

	static ::GMMHNODILFH JGECEJIHMLG(::KMLHCDIGMGH& EPHGGFOBFHI)
	{
		return ((::GMMHNODILFH(*)(::KMLHCDIGMGH&))((::PBYTE)hIl2Cpp + EDIGCNEBNIN_JGECEJIHMLG_OFFSET))(EPHGGFOBFHI);
	}

	static ::System::String* NOAOBMMHHGP(::System::Single EGEGIMGMJHN)
	{
		return ((::System::String*(*)(::System::Single))((::PBYTE)hIl2Cpp + EDIGCNEBNIN_NOAOBMMHHGP_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Boolean BKMIHBFLGAB(::System::String* BMGONJBEIHC, ::MoleMole::Config::ConfigInteractionFanCylinder& HODAIDNDKHD, ::IEKAMJMDCJG& FBCHENDDHHK)
	{
		return ((::System::Boolean(*)(::System::String*, ::MoleMole::Config::ConfigInteractionFanCylinder&, ::IEKAMJMDCJG&))((::PBYTE)hIl2Cpp + EDIGCNEBNIN_BKMIHBFLGAB_OFFSET))(BMGONJBEIHC, HODAIDNDKHD, FBCHENDDHHK);
	}

	static ::System::String* NGDEIDOPENB(::NFLMPIHFBGP KPGAOGDHNOM)
	{
		return ((::System::String*(*)(::NFLMPIHFBGP))((::PBYTE)hIl2Cpp + EDIGCNEBNIN_NGDEIDOPENB_OFFSET))(KPGAOGDHNOM);
	}

	static ::System::String* AENGBFIDDBN(::JPOLPIJCJIJ& AEFBPLEGCJJ)
	{
		return ((::System::String*(*)(::JPOLPIJCJIJ&))((::PBYTE)hIl2Cpp + EDIGCNEBNIN_AENGBFIDDBN_OFFSET))(AEFBPLEGCJJ);
	}

	static ::System::Boolean JNDAJLMDEPA(::GMMHNODILFH& EMMFPJBCAFI, ::KMLHCDIGMGH& ECCGHEFMJDA, ::IEKAMJMDCJG& FBCHENDDHHK)
	{
		return ((::System::Boolean(*)(::GMMHNODILFH&, ::KMLHCDIGMGH&, ::IEKAMJMDCJG&))((::PBYTE)hIl2Cpp + EDIGCNEBNIN_JNDAJLMDEPA_OFFSET))(EMMFPJBCAFI, ECCGHEFMJDA, FBCHENDDHHK);
	}

	static ::System::String* JOKDMOCFMED(::MoleMole::Config::ConfigInteractionFanCylinder& HODAIDNDKHD)
	{
		return ((::System::String*(*)(::MoleMole::Config::ConfigInteractionFanCylinder&))((::PBYTE)hIl2Cpp + EDIGCNEBNIN_JOKDMOCFMED_OFFSET))(HODAIDNDKHD);
	}

	static ::System::Boolean DADFIPAFKNC(::System::String* NCPCMEFNENP, ::System::String* EOGBOKFFNDF, ::JPOLPIJCJIJ& AEFBPLEGCJJ, ::IEKAMJMDCJG& FBCHENDDHHK)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*, ::JPOLPIJCJIJ&, ::IEKAMJMDCJG&))((::PBYTE)hIl2Cpp + EDIGCNEBNIN_DADFIPAFKNC_OFFSET))(NCPCMEFNENP, EOGBOKFFNDF, AEFBPLEGCJJ, FBCHENDDHHK);
	}

	static ::System::Boolean BGHLDANKAAJ(::System::String* EGEGIMGMJHN, ::System::Single& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + EDIGCNEBNIN_BGHLDANKAAJ_OFFSET))(EGEGIMGMJHN, IGAAKDOIPNN);
	}
};
