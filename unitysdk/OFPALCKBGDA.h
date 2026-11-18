#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/PONCHKKAEAG.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HBIBNDIOKPG;
class KFJFPPGCHNA;
class OHEPPDANJKP;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OFPALCKBGDA_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16C0B9D0)
#define OFPALCKBGDA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16C0CAD0)
#define OFPALCKBGDA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16C0BAE0)
#define OFPALCKBGDA_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16C0D460)
#define OFPALCKBGDA_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16C0BAD0)
#define OFPALCKBGDA_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16C0D270)
#define OFPALCKBGDA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16C0CB30)
#define OFPALCKBGDA_IHKPKLBGLOL_OFFSET UNITYSDK_OFFSET(0x16C0B4A0)
#define OFPALCKBGDA_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x16C0D3D0)
#define OFPALCKBGDA_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x16C09C40)
#define OFPALCKBGDA_LIIHFBOKFGD_OFFSET UNITYSDK_OFFSET(0x16C0AA10)
#define OFPALCKBGDA_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16C0B8F0)
#define OFPALCKBGDA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16C0BB60)
#define OFPALCKBGDA__CTOR_OFFSET UNITYSDK_OFFSET(0x16C0D170)

inline static constexpr unsigned int OFPALCKBGDA_TypeDefinitionIndex = 84168;

class OFPALCKBGDA : public ::HDJJJGCHLEE
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::KFJFPPGCHNA*>* MIBEPOPJIBA; // 0x30
	::FOBNALGHPPD_1<::System::Boolean> JOIDKOCKKAD; // 0x38
	::System::Byte _padding0[0x18];
	::System::String* KKLIBHHBNPJ; // 0x58
	::FOBNALGHPPD_1<::UnityEngine::Vector3> ILOJFPNKJII; // 0x60
	::System::Byte _padding1[0x18];
	::GPIOLGMOBLJ* IIGLEOPLFJC; // 0x80
	::HBIBNDIOKPG* IFEFGIHOKOC; // 0x88
	::System::Int32 GCNACHAKEDF; // 0x90
	::System::Int32 DIBHCENFGON; // 0x94
	::System::Boolean CFNHHJNCPCO; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPALCKBGDA__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPALCKBGDA_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OFPALCKBGDA_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPALCKBGDA_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPALCKBGDA_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OFPALCKBGDA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OFPALCKBGDA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LIIHFBOKFGD(::System::Int32 GHCMLMNPLPJ, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* OJBJBOJKFJO, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::PONCHKKAEAG>* ILCCAMMNLAE, ::MoleMole::Battle::Entity* PGJHHABANNC, ::System::Boolean PKGFBAGEHOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::PONCHKKAEAG>*, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + OFPALCKBGDA_LIIHFBOKFGD_OFFSET))(this, GHCMLMNPLPJ, OJBJBOJKFJO, ILCCAMMNLAE, PGJHHABANNC, PKGFBAGEHOM);
	}

	::System::Void IHKPKLBGLOL(::MoleMole::Battle::Entity* JHGPEHNCJID, ::OHEPPDANJKP* HNEOABEOADK, ::System::Collections::Generic::List_1<::System::String*>* HMPKKCKNFIH, ::System::Single MDPPNMIPDMP, ::System::Boolean PKGFBAGEHOM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::OHEPPDANJKP*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + OFPALCKBGDA_IHKPKLBGLOL_OFFSET))(this, JHGPEHNCJID, HNEOABEOADK, HMPKKCKNFIH, MDPPNMIPDMP, PKGFBAGEHOM);
	}

	static ::OFPALCKBGDA* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::OFPALCKBGDA*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OFPALCKBGDA_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPALCKBGDA_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OFPALCKBGDA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + OFPALCKBGDA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::OFPALCKBGDA* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::OFPALCKBGDA*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OFPALCKBGDA_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
