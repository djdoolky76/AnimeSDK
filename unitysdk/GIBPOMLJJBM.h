#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCMDBHOPKKP.h"
#include "unitysdk/DJFEAPLNLNA.h"
#include "unitysdk/MoleMole/MiniUIGame/SimpleParkour/ETrackType.h"
#include "unitysdk/System/Nullable_1.h"

class AJJOBDLJOPM;
class FNJCJNFMPON;
class PAFFKGCGNBD;

#define GIBPOMLJJBM_CJLIFJNDNGN_OFFSET UNITYSDK_OFFSET(0x10EF65C0)
#define GIBPOMLJJBM_KLFBDIBAALC_OFFSET UNITYSDK_OFFSET(0x10EF6520)
#define GIBPOMLJJBM_LGPCPOKHEFB_OFFSET UNITYSDK_OFFSET(0x10EF64C0)
#define GIBPOMLJJBM__CTOR_OFFSET UNITYSDK_OFFSET(0x10EF6390)

inline static constexpr unsigned int GIBPOMLJJBM_TypeDefinitionIndex = 84678;

class GIBPOMLJJBM : public ::CCMDBHOPKKP
{
public:
	::System::Void _ctor(::FNJCJNFMPON* DFMKILICPFB, ::System::Single ONEFBCAPDPP)
	{
		return ((::System::Void(*)(::PVOID, ::FNJCJNFMPON*, ::System::Single))((::PBYTE)hIl2Cpp + GIBPOMLJJBM__CTOR_OFFSET))(this, DFMKILICPFB, ONEFBCAPDPP);
	}

	::AJJOBDLJOPM* LGPCPOKHEFB(::PAFFKGCGNBD* LEHKNMPECHE)
	{
		return ((::AJJOBDLJOPM*(*)(::PVOID, ::PAFFKGCGNBD*))((::PBYTE)hIl2Cpp + GIBPOMLJJBM_LGPCPOKHEFB_OFFSET))(this, LEHKNMPECHE);
	}

	::System::Nullable_1<::DJFEAPLNLNA> KLFBDIBAALC(::System::Single ANODOLODNLJ, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType PPPNLFFEPHO, ::AJJOBDLJOPM* BLOLHKKFHBP, ::System::Boolean GDECGONPELC)
	{
		return ((::System::Nullable_1<::DJFEAPLNLNA>(*)(::PVOID, ::System::Single, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType, ::AJJOBDLJOPM*, ::System::Boolean))((::PBYTE)hIl2Cpp + GIBPOMLJJBM_KLFBDIBAALC_OFFSET))(this, ANODOLODNLJ, PPPNLFFEPHO, BLOLHKKFHBP, GDECGONPELC);
	}

	::System::Nullable_1<::DJFEAPLNLNA> CJLIFJNDNGN(::System::Single MIALFKCCCPI, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType KMGKAIDEIBA, ::AJJOBDLJOPM* FDHMCIFPNCK, ::System::Boolean MPBJAGIKPJM)
	{
		return ((::System::Nullable_1<::DJFEAPLNLNA>(*)(::PVOID, ::System::Single, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType, ::AJJOBDLJOPM*, ::System::Boolean))((::PBYTE)hIl2Cpp + GIBPOMLJJBM_CJLIFJNDNGN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}
};
