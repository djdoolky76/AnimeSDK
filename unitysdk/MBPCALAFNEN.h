#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCMDBHOPKKP.h"
#include "unitysdk/DJFEAPLNLNA.h"
#include "unitysdk/MoleMole/MiniUIGame/SimpleParkour/ETrackType.h"
#include "unitysdk/System/Nullable_1.h"

class AJJOBDLJOPM;
class FNJCJNFMPON;
class PAFFKGCGNBD;

#define MBPCALAFNEN_AHAJOICAADK_OFFSET UNITYSDK_OFFSET(0x18525210)
#define MBPCALAFNEN_CJLIFJNDNGN_OFFSET UNITYSDK_OFFSET(0x18525220)
#define MBPCALAFNEN_KLFBDIBAALC_OFFSET UNITYSDK_OFFSET(0x18525070)
#define MBPCALAFNEN_LGPCPOKHEFB_OFFSET UNITYSDK_OFFSET(0x18525010)
#define MBPCALAFNEN_OMLMLKFGODN_OFFSET UNITYSDK_OFFSET(0x18525140)
#define MBPCALAFNEN__CTOR_OFFSET UNITYSDK_OFFSET(0x18524EE0)

inline static constexpr unsigned int MBPCALAFNEN_TypeDefinitionIndex = 40543;

class MBPCALAFNEN : public ::CCMDBHOPKKP
{
public:
	::System::Void _ctor(::FNJCJNFMPON* DFMKILICPFB, ::System::Single ONEFBCAPDPP)
	{
		return ((::System::Void(*)(::PVOID, ::FNJCJNFMPON*, ::System::Single))((::PBYTE)hIl2Cpp + MBPCALAFNEN__CTOR_OFFSET))(this, DFMKILICPFB, ONEFBCAPDPP);
	}

	::AJJOBDLJOPM* LGPCPOKHEFB(::PAFFKGCGNBD* LEHKNMPECHE)
	{
		return ((::AJJOBDLJOPM*(*)(::PVOID, ::PAFFKGCGNBD*))((::PBYTE)hIl2Cpp + MBPCALAFNEN_LGPCPOKHEFB_OFFSET))(this, LEHKNMPECHE);
	}

	::System::Nullable_1<::DJFEAPLNLNA> KLFBDIBAALC(::System::Single ANODOLODNLJ, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType PPPNLFFEPHO, ::AJJOBDLJOPM* BLOLHKKFHBP, ::System::Boolean GDECGONPELC)
	{
		return ((::System::Nullable_1<::DJFEAPLNLNA>(*)(::PVOID, ::System::Single, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType, ::AJJOBDLJOPM*, ::System::Boolean))((::PBYTE)hIl2Cpp + MBPCALAFNEN_KLFBDIBAALC_OFFSET))(this, ANODOLODNLJ, PPPNLFFEPHO, BLOLHKKFHBP, GDECGONPELC);
	}

	::System::Nullable_1<::DJFEAPLNLNA> OMLMLKFGODN(::System::Single ANODOLODNLJ, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType PPPNLFFEPHO, ::AJJOBDLJOPM* BLOLHKKFHBP, ::System::Boolean GDECGONPELC)
	{
		return ((::System::Nullable_1<::DJFEAPLNLNA>(*)(::PVOID, ::System::Single, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType, ::AJJOBDLJOPM*, ::System::Boolean))((::PBYTE)hIl2Cpp + MBPCALAFNEN_OMLMLKFGODN_OFFSET))(this, ANODOLODNLJ, PPPNLFFEPHO, BLOLHKKFHBP, GDECGONPELC);
	}

	::System::Nullable_1<::DJFEAPLNLNA> AHAJOICAADK(::System::Single MIALFKCCCPI, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType KMGKAIDEIBA, ::AJJOBDLJOPM* FDHMCIFPNCK, ::System::Boolean MPBJAGIKPJM)
	{
		return ((::System::Nullable_1<::DJFEAPLNLNA>(*)(::PVOID, ::System::Single, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType, ::AJJOBDLJOPM*, ::System::Boolean))((::PBYTE)hIl2Cpp + MBPCALAFNEN_AHAJOICAADK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}

	::System::Nullable_1<::DJFEAPLNLNA> CJLIFJNDNGN(::System::Single MIALFKCCCPI, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType KMGKAIDEIBA, ::AJJOBDLJOPM* FDHMCIFPNCK, ::System::Boolean MPBJAGIKPJM)
	{
		return ((::System::Nullable_1<::DJFEAPLNLNA>(*)(::PVOID, ::System::Single, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType, ::AJJOBDLJOPM*, ::System::Boolean))((::PBYTE)hIl2Cpp + MBPCALAFNEN_CJLIFJNDNGN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}
};
