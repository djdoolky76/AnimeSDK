#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCMDBHOPKKP.h"
#include "unitysdk/DJFEAPLNLNA.h"
#include "unitysdk/MoleMole/MiniUIGame/SimpleParkour/ETrackType.h"
#include "unitysdk/System/Nullable_1.h"

class AJJOBDLJOPM;
class FNJCJNFMPON;
class PAFFKGCGNBD;

#define KIJHKJDBBGJ_EPEJAMLKIAI_OFFSET UNITYSDK_OFFSET(0x1862C730)
#define KIJHKJDBBGJ_LGPCPOKHEFB_OFFSET UNITYSDK_OFFSET(0x1862C6D0)
#define KIJHKJDBBGJ_PDLLNENDMNH_OFFSET UNITYSDK_OFFSET(0x1862C890)
#define KIJHKJDBBGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1862C5A0)

inline static constexpr unsigned int KIJHKJDBBGJ_TypeDefinitionIndex = 50800;

class KIJHKJDBBGJ : public ::CCMDBHOPKKP
{
public:
	::System::Void _ctor(::FNJCJNFMPON* DFMKILICPFB, ::System::Single ONEFBCAPDPP)
	{
		return ((::System::Void(*)(::PVOID, ::FNJCJNFMPON*, ::System::Single))((::PBYTE)hIl2Cpp + KIJHKJDBBGJ__CTOR_OFFSET))(this, DFMKILICPFB, ONEFBCAPDPP);
	}

	::AJJOBDLJOPM* LGPCPOKHEFB(::PAFFKGCGNBD* LEHKNMPECHE)
	{
		return ((::AJJOBDLJOPM*(*)(::PVOID, ::PAFFKGCGNBD*))((::PBYTE)hIl2Cpp + KIJHKJDBBGJ_LGPCPOKHEFB_OFFSET))(this, LEHKNMPECHE);
	}

	::System::Nullable_1<::DJFEAPLNLNA> EPEJAMLKIAI(::System::Single ANODOLODNLJ, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType PPPNLFFEPHO, ::PAFFKGCGNBD* LEHKNMPECHE, ::System::Boolean GDECGONPELC)
	{
		return ((::System::Nullable_1<::DJFEAPLNLNA>(*)(::PVOID, ::System::Single, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType, ::PAFFKGCGNBD*, ::System::Boolean))((::PBYTE)hIl2Cpp + KIJHKJDBBGJ_EPEJAMLKIAI_OFFSET))(this, ANODOLODNLJ, PPPNLFFEPHO, LEHKNMPECHE, GDECGONPELC);
	}

	::System::Nullable_1<::DJFEAPLNLNA> PDLLNENDMNH(::System::Single MIALFKCCCPI, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType KMGKAIDEIBA, ::PAFFKGCGNBD* FDHMCIFPNCK, ::System::Boolean MPBJAGIKPJM)
	{
		return ((::System::Nullable_1<::DJFEAPLNLNA>(*)(::PVOID, ::System::Single, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType, ::PAFFKGCGNBD*, ::System::Boolean))((::PBYTE)hIl2Cpp + KIJHKJDBBGJ_PDLLNENDMNH_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}
};
