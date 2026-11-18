#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

class KPNIFGIKELE;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MAEIAEHPCIF_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x17CF98A0)
#define MAEIAEHPCIF_DHHOKBFFLFG_OFFSET UNITYSDK_OFFSET(0x17CF9750)
#define MAEIAEHPCIF_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x17CF9A60)
#define MAEIAEHPCIF_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x17CF9810)
#define MAEIAEHPCIF_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x17CF9AF0)
#define MAEIAEHPCIF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17CF9660)
#define MAEIAEHPCIF__CCTOR_OFFSET UNITYSDK_OFFSET(0x17CF9790)
#define MAEIAEHPCIF__CTOR_OFFSET UNITYSDK_OFFSET(0x17CF9800)

inline static constexpr unsigned int MAEIAEHPCIF_TypeDefinitionIndex = 44226;

class MAEIAEHPCIF : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xEE; // 0x0
	::System::Collections::Generic::HashSet_1<::System::String*>* JGDNPNNNDFD; // 0x20
	::KPNIFGIKELE* CMAOBDOAKEI; // 0x28
	::System::Boolean BAHFJKGJDBM; // 0x30
	::System::Byte _padding0[0x3];
	::System::UInt32 NMPJMCCBNLO; // 0x34

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAEIAEHPCIF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAEIAEHPCIF__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAEIAEHPCIF_PHOADBJGFBE_OFFSET))(this);
	}

	::KPNIFGIKELE* DHHOKBFFLFG()
	{
		return ((::KPNIFGIKELE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAEIAEHPCIF_DHHOKBFFLFG_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAEIAEHPCIF_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JEPPCAFLJJK, ::System::UInt32 HBFCDLLPFGK, ::KPNIFGIKELE* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + MAEIAEHPCIF_CNHBDOMKKDE_OFFSET))(this, JEPPCAFLJJK, HBFCDLLPFGK, IGAAKDOIPNN);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAEIAEHPCIF_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAEIAEHPCIF_OHFHFOHMBJH_OFFSET))(this);
	}
};
