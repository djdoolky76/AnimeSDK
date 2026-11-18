#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LCGECCIBBDI_AIPNHAECBAG.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/BNLPFMIBLLJ.h"

class FGCOIBFFCHB;
class LCGECCIBBDI;
class NBGCHNKOMGP_LKCCFDBGGMK;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LCGECCIBBDI_FKJFNDMLCFE_ABDLEONNPAJ_OFFSET UNITYSDK_OFFSET(0x1997AEC0)
#define LCGECCIBBDI_FKJFNDMLCFE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1997AE80)
#define LCGECCIBBDI_FKJFNDMLCFE__CTOR_OFFSET UNITYSDK_OFFSET(0x1997B300)

inline static constexpr unsigned int LCGECCIBBDI_FKJFNDMLCFE_TypeDefinitionIndex = 56785;

class LCGECCIBBDI_FKJFNDMLCFE : public ::LCGECCIBBDI_AIPNHAECBAG
{
public:
	// static const ::System::String* DNKOBILAPLG; // 0x0
	::System::Collections::Generic::List_1<::FGCOIBFFCHB*>* EALFHGPFFGD; // 0x60
	::NBGCHNKOMGP_LKCCFDBGGMK* AEJAMJDBHAM; // 0x68
	::UnityEngine::Color ODMCAHPFEJA; // 0x70
	::System::Int32 KMFHKEBMGIE; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGECCIBBDI_FKJFNDMLCFE__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGECCIBBDI_FKJFNDMLCFE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void ABDLEONNPAJ(::LCGECCIBBDI* IPMMCGDMODG, ::BNLPFMIBLLJ& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::LCGECCIBBDI*, ::BNLPFMIBLLJ&))((::PBYTE)hIl2Cpp + LCGECCIBBDI_FKJFNDMLCFE_ABDLEONNPAJ_OFFSET))(this, IPMMCGDMODG, AAOCANGHBDG);
	}
};
