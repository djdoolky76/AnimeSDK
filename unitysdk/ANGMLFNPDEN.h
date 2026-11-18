#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAMHFBEPBED.h"
#include "unitysdk/GMEJNIOLAFH.h"
#include "unitysdk/JFANFMFNHHB.h"
#include "unitysdk/LHHNKBDEMGO.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/LMFHKFOKACD.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
class MGBBDIIJPFJ;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define ANGMLFNPDEN_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x11BC9430)
#define ANGMLFNPDEN_DNMJDLHHEGL_OFFSET UNITYSDK_OFFSET(0x11BC8A70)
#define ANGMLFNPDEN_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x11BCA690)
#define ANGMLFNPDEN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11BC8DC0)
#define ANGMLFNPDEN_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11BC9540)
#define ANGMLFNPDEN_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x11BCA3C0)
#define ANGMLFNPDEN_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x11BC9530)
#define ANGMLFNPDEN_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x11BCA760)
#define ANGMLFNPDEN_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x11BC8E20)
#define ANGMLFNPDEN_KDJODLGHLFI_OFFSET UNITYSDK_OFFSET(0x11BC8B90)
#define ANGMLFNPDEN_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x11BC9390)
#define ANGMLFNPDEN_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x11BC85C0)
#define ANGMLFNPDEN_MEAKFPGOCCK_OFFSET UNITYSDK_OFFSET(0x11BC8B40)
#define ANGMLFNPDEN_NOPBLOAKGFH_OFFSET UNITYSDK_OFFSET(0x11BCA570)
#define ANGMLFNPDEN_ODOINLKECLG_OFFSET UNITYSDK_OFFSET(0x11BC8AC0)
#define ANGMLFNPDEN_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x11BC95C0)
#define ANGMLFNPDEN__CTOR_OFFSET UNITYSDK_OFFSET(0x11BCA3A0)

inline static constexpr unsigned int ANGMLFNPDEN_TypeDefinitionIndex = 51669;

class ANGMLFNPDEN : public ::LHHNKBDEMGO
{
public:
	::MoleMole::Config::DynamicFloat* JCDCDECIPDJ; // 0x40
	::System::String* HCCNIEBENIH; // 0x48
	::JFANFMFNHHB JBDIJHCHCND; // 0x50
	::GMEJNIOLAFH GPLGMEIGIJL; // 0x54
	::MoleMole::Config::ValueCompareType BJKJBFGGHKA; // 0x58
	::System::Boolean KMPCGFGELML; // 0x5C
	::System::Boolean IKNGJPEBFLE; // 0x5D
	::System::Boolean OBIPNBDNGGC; // 0x5E
	::System::Byte _padding0[0x1];
	::JFANFMFNHHB PFGEEBHKCDG; // 0x60
	::GMEJNIOLAFH MHNGBNECBFB; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANGMLFNPDEN__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + ANGMLFNPDEN_MBGCBDBNPFE_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, HODAIDNDKHD, LIBPKNHDIGP, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ANGMLFNPDEN_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ANGMLFNPDEN_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LHHNKBDEMGO* DGNAAPGKIPL()
	{
		return ((::LHHNKBDEMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANGMLFNPDEN_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANGMLFNPDEN_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ANGMLFNPDEN_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::ANGMLFNPDEN* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::ANGMLFNPDEN*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ANGMLFNPDEN_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ANGMLFNPDEN_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::System::Boolean KDJODLGHLFI(::LMFHKFOKACD AEJAMJDBHAM, ::GMEJNIOLAFH KHGFAKJKDGG, ::UnityEngine::Vector3& JBCNPOHMGPE)
	{
		return ((::System::Boolean(*)(::LMFHKFOKACD, ::GMEJNIOLAFH, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + ANGMLFNPDEN_KDJODLGHLFI_OFFSET))(AEJAMJDBHAM, KHGFAKJKDGG, JBCNPOHMGPE);
	}

	static ::System::Boolean MEAKFPGOCCK(::System::Boolean OKACAIHPCBK, ::System::Boolean DJGHKCGNLHA)
	{
		return ((::System::Boolean(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ANGMLFNPDEN_MEAKFPGOCCK_OFFSET))(OKACAIHPCBK, DJGHKCGNLHA);
	}

	static ::System::Boolean NOPBLOAKGFH(::MoleMole::Battle::Entity* KECKGDFIALJ, ::UnityEngine::Vector3& JBCNPOHMGPE)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + ANGMLFNPDEN_NOPBLOAKGFH_OFFSET))(KECKGDFIALJ, JBCNPOHMGPE);
	}

	::System::Boolean FBLIIDOEHIJ(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::MoleMole::Battle::Entity* MPBJAGIKPJM, ::MoleMole::Battle::Entity* DDMDINPGCFI, ::ENGKPGFGGLM* CEIDLKIHMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + ANGMLFNPDEN_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::System::Boolean ODOINLKECLG(::System::String* KDPCIAPDOLK, ::MGBBDIIJPFJ* PHBJOENDAHL)
	{
		return ((::System::Boolean(*)(::System::String*, ::MGBBDIIJPFJ*))((::PBYTE)hIl2Cpp + ANGMLFNPDEN_ODOINLKECLG_OFFSET))(KDPCIAPDOLK, PHBJOENDAHL);
	}

	static ::ANGMLFNPDEN* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::ANGMLFNPDEN*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ANGMLFNPDEN_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::System::Boolean DNMJDLHHEGL(::JFANFMFNHHB PCBICNPNEDJ, ::FAMHFBEPBED JDEAMDKDHNN)
	{
		return ((::System::Boolean(*)(::JFANFMFNHHB, ::FAMHFBEPBED))((::PBYTE)hIl2Cpp + ANGMLFNPDEN_DNMJDLHHEGL_OFFSET))(PCBICNPNEDJ, JDEAMDKDHNN);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ANGMLFNPDEN_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
