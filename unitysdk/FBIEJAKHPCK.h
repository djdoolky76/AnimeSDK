#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

class KPNIFGIKELE;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FBIEJAKHPCK_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x11AB4DB0)
#define FBIEJAKHPCK_DHHOKBFFLFG_OFFSET UNITYSDK_OFFSET(0x11AB4BC0)
#define FBIEJAKHPCK_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x11AB4F70)
#define FBIEJAKHPCK_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x11AB4C80)
#define FBIEJAKHPCK_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x11AB4D10)
#define FBIEJAKHPCK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x11AB4AD0)
#define FBIEJAKHPCK__CCTOR_OFFSET UNITYSDK_OFFSET(0x11AB4C00)
#define FBIEJAKHPCK__CTOR_OFFSET UNITYSDK_OFFSET(0x11AB4C70)

inline static constexpr unsigned int FBIEJAKHPCK_TypeDefinitionIndex = 61962;

class FBIEJAKHPCK : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xEF; // 0x0
	::KPNIFGIKELE* CMAOBDOAKEI; // 0x20
	::System::Collections::Generic::HashSet_1<::System::String*>* JGDNPNNNDFD; // 0x28
	::System::Boolean BAHFJKGJDBM; // 0x30
	::System::Byte _padding0[0x3];
	::System::UInt32 NMPJMCCBNLO; // 0x34

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBIEJAKHPCK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIEJAKHPCK__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIEJAKHPCK_PHOADBJGFBE_OFFSET))(this);
	}

	::KPNIFGIKELE* DHHOKBFFLFG()
	{
		return ((::KPNIFGIKELE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIEJAKHPCK_DHHOKBFFLFG_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIEJAKHPCK_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIEJAKHPCK_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JEPPCAFLJJK, ::System::UInt32 HBFCDLLPFGK, ::KPNIFGIKELE* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + FBIEJAKHPCK_CNHBDOMKKDE_OFFSET))(this, JEPPCAFLJJK, HBFCDLLPFGK, IGAAKDOIPNN);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIEJAKHPCK_FIGPAOKNJLN_OFFSET))(this);
	}
};
