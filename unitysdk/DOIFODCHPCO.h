#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPCMGFKAGD.h"
#include "unitysdk/JOGAEECNPAA.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class BIPBNDIFDOL;
class ENGKPGFGGLM;
class FKNIEPCILLG;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DOIFODCHPCO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16BC4370)
#define DOIFODCHPCO_FBLIIDOEHIJ_OFFSET UNITYSDK_OFFSET(0x16BC4CD0)
#define DOIFODCHPCO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16BC4820)
#define DOIFODCHPCO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16BC4480)
#define DOIFODCHPCO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16BC4B20)
#define DOIFODCHPCO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16BC4470)
#define DOIFODCHPCO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16BC4D80)
#define DOIFODCHPCO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16BC4880)
#define DOIFODCHPCO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16BC4320)
#define DOIFODCHPCO_MBGCBDBNPFE_OFFSET UNITYSDK_OFFSET(0x16BC40D0)
#define DOIFODCHPCO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16BC4500)
#define DOIFODCHPCO__CTOR_OFFSET UNITYSDK_OFFSET(0x16BC4050)

inline static constexpr unsigned int DOIFODCHPCO_TypeDefinitionIndex = 59547;

class DOIFODCHPCO : public ::GJPCMGFKAGD
{
public:
	::System::Collections::Generic::List_1<::System::String*>* DDHJAHBNKNI; // 0x10
	::JOGAEECNPAA GOGEGNAHDBF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIFODCHPCO__CTOR_OFFSET))(this);
	}

	::System::Boolean MBGCBDBNPFE(::BIPBNDIFDOL* HHIJHDFHPOI, ::MoleMole::Battle::Entity* KHGFAKJKDGG, ::MoleMole::Battle::Entity* HODAIDNDKHD, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::BIPBNDIFDOL*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DOIFODCHPCO_MBGCBDBNPFE_OFFSET))(this, HHIJHDFHPOI, KHGFAKJKDGG, HODAIDNDKHD, FFNKDGGHBPP);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DOIFODCHPCO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::GJPCMGFKAGD* DGNAAPGKIPL()
	{
		return ((::GJPCMGFKAGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIFODCHPCO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIFODCHPCO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DOIFODCHPCO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DOIFODCHPCO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DOIFODCHPCO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DOIFODCHPCO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DOIFODCHPCO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FBLIIDOEHIJ(::BIPBNDIFDOL* MIALFKCCCPI, ::MoleMole::Battle::Entity* KMGKAIDEIBA, ::MoleMole::Battle::Entity* FDHMCIFPNCK, ::ENGKPGFGGLM* MPBJAGIKPJM)
	{
		return ((::System::Boolean(*)(::PVOID, ::BIPBNDIFDOL*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + DOIFODCHPCO_FBLIIDOEHIJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DOIFODCHPCO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DOIFODCHPCO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DOIFODCHPCO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DOIFODCHPCO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DOIFODCHPCO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
