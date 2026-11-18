#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PICPGIFICCC.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class DEMAADPOPGM;
class ENGKPGFGGLM;
class FKNIEPCILLG;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }

#define LDANPMBGPLH_APMEMOKDGOI_OFFSET UNITYSDK_OFFSET(0x1997BFD0)
#define LDANPMBGPLH_CABMHMLLIOP_OFFSET UNITYSDK_OFFSET(0x1997C970)
#define LDANPMBGPLH_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1997C340)
#define LDANPMBGPLH_DHILGBEMIAM_OFFSET UNITYSDK_OFFSET(0x1997BE40)
#define LDANPMBGPLH_FBAIJFMFALK_OFFSET UNITYSDK_OFFSET(0x1997CB60)
#define LDANPMBGPLH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1997C060)
#define LDANPMBGPLH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1997C450)
#define LDANPMBGPLH_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1997C7C0)
#define LDANPMBGPLH_GHLNDEIPLDN_OFFSET UNITYSDK_OFFSET(0x1997BE90)
#define LDANPMBGPLH_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1997C440)
#define LDANPMBGPLH_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1997CA00)
#define LDANPMBGPLH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1997C0C0)
#define LDANPMBGPLH_KOBPCPEEGOP_OFFSET UNITYSDK_OFFSET(0x1997C730)
#define LDANPMBGPLH_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1997C2A0)
#define LDANPMBGPLH_MPOMBIPGPEM_OFFSET UNITYSDK_OFFSET(0x1997CBF0)
#define LDANPMBGPLH_NPAFNEEBBOL_OFFSET UNITYSDK_OFFSET(0x1997BD90)
#define LDANPMBGPLH_OFLAEIFNHNG_OFFSET UNITYSDK_OFFSET(0x1997BDF0)
#define LDANPMBGPLH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1997C4D0)
#define LDANPMBGPLH__CTOR_OFFSET UNITYSDK_OFFSET(0x1997C6C0)

inline static constexpr unsigned int LDANPMBGPLH_TypeDefinitionIndex = 91748;

class LDANPMBGPLH : public ::PICPGIFICCC
{
public:
	::System::String* OAHLNFFKPGC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDANPMBGPLH__CTOR_OFFSET))(this);
	}

	::System::Type* NPAFNEEBBOL()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDANPMBGPLH_NPAFNEEBBOL_OFFSET))(this);
	}

	::System::Void OFLAEIFNHNG(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LDANPMBGPLH_OFLAEIFNHNG_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void DHILGBEMIAM(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LDANPMBGPLH_DHILGBEMIAM_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Boolean GHLNDEIPLDN(::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + LDANPMBGPLH_GHLNDEIPLDN_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LDANPMBGPLH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + LDANPMBGPLH_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::PICPGIFICCC* DGNAAPGKIPL()
	{
		return ((::PICPGIFICCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDANPMBGPLH_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDANPMBGPLH_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LDANPMBGPLH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Type* KOBPCPEEGOP()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDANPMBGPLH_KOBPCPEEGOP_OFFSET))(this);
	}

	static ::LDANPMBGPLH* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::LDANPMBGPLH*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LDANPMBGPLH_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LDANPMBGPLH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LDANPMBGPLH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void CABMHMLLIOP(::MoleMole::Battle::Entity* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LDANPMBGPLH_CABMHMLLIOP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean APMEMOKDGOI(::DEMAADPOPGM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::DEMAADPOPGM*))((::PBYTE)hIl2Cpp + LDANPMBGPLH_APMEMOKDGOI_OFFSET))(this, FFNKDGGHBPP);
	}

	static ::LDANPMBGPLH* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::LDANPMBGPLH*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LDANPMBGPLH_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void FBAIJFMFALK(::MoleMole::Battle::Entity* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LDANPMBGPLH_FBAIJFMFALK_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean MPOMBIPGPEM(::ENGKPGFGGLM* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + LDANPMBGPLH_MPOMBIPGPEM_OFFSET))(this, MIALFKCCCPI);
	}
};
