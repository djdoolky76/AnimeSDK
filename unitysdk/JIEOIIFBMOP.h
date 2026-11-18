#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EIIJFDEMGEG.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/LFGBJHCEJID.h"

class FKNIEPCILLG;
class JCADHFOKIHK;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JIEOIIFBMOP_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x18A183D0)
#define JIEOIIFBMOP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A19400)
#define JIEOIIFBMOP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18A184E0)
#define JIEOIIFBMOP_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x18A19AE0)
#define JIEOIIFBMOP_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x18A184D0)
#define JIEOIIFBMOP_HEJIGKHPNNP_OFFSET UNITYSDK_OFFSET(0x18A17A50)
#define JIEOIIFBMOP_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x18A19C90)
#define JIEOIIFBMOP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x18A19460)
#define JIEOIIFBMOP_IKNPBCGFILP_OFFSET UNITYSDK_OFFSET(0x18A199B0)
#define JIEOIIFBMOP_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x18A18360)
#define JIEOIIFBMOP_OCLGMLLFIKN_OFFSET UNITYSDK_OFFSET(0x18A182D0)
#define JIEOIIFBMOP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x18A18560)
#define JIEOIIFBMOP__CTOR_OFFSET UNITYSDK_OFFSET(0x18A199A0)

inline static constexpr unsigned int JIEOIIFBMOP_TypeDefinitionIndex = 43177;

class JIEOIIFBMOP : public ::EIIJFDEMGEG
{
public:
	::MoleMole::Config::ConfigPosRot* OBPCBCNOLJN; // 0x10
	::MoleMole::Config::ConfigPosRot* MCOGMBGBBPF; // 0x18
	::UnityEngine::Vector3 MJJIIDAMMHA; // 0x20
	::System::Single PGGHGJFPIJO; // 0x2C
	::System::Single HDMAGAEPIPG; // 0x30
	::System::Single BEFKKPHLIJB; // 0x34
	::System::Single JDKGCMEHIJK; // 0x38
	::System::Single KKPOCACPFDA; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIEOIIFBMOP__CTOR_OFFSET))(this);
	}

	::System::Void HEJIGKHPNNP(::MoleMole::Battle::Entity* PNJNAAHKAIB, ::JCADHFOKIHK* GKLACFFMCCN, ::System::Collections::Generic::List_1<::LFGBJHCEJID>*& PILELGPBCLL, ::UnityEngine::Vector3 LPOIBLLILAA, ::UnityEngine::Vector3 CFJFMMGPGKE, ::System::Int32 AIALJPFNOHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*, ::System::Collections::Generic::List_1<::LFGBJHCEJID>*&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + JIEOIIFBMOP_HEJIGKHPNNP_OFFSET))(this, PNJNAAHKAIB, GKLACFFMCCN, PILELGPBCLL, LPOIBLLILAA, CFJFMMGPGKE, AIALJPFNOHN);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + JIEOIIFBMOP_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::EIIJFDEMGEG* DGNAAPGKIPL()
	{
		return ((::EIIJFDEMGEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIEOIIFBMOP_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIEOIIFBMOP_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JIEOIIFBMOP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JIEOIIFBMOP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void IKNPBCGFILP(::MoleMole::Battle::Entity* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::System::Collections::Generic::List_1<::LFGBJHCEJID>*& FDHMCIFPNCK, ::UnityEngine::Vector3 MPBJAGIKPJM, ::UnityEngine::Vector3 DDMDINPGCFI, ::System::Int32 CEIDLKIHMLC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*, ::System::Collections::Generic::List_1<::LFGBJHCEJID>*&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + JIEOIIFBMOP_IKNPBCGFILP_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	static ::JIEOIIFBMOP* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::JIEOIIFBMOP*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JIEOIIFBMOP_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean OCLGMLLFIKN(::System::Single ELHMOANKHFM, ::System::Single MMBBJMNJLOD)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JIEOIIFBMOP_OCLGMLLFIKN_OFFSET))(this, ELHMOANKHFM, MMBBJMNJLOD);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JIEOIIFBMOP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + JIEOIIFBMOP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::JIEOIIFBMOP* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::JIEOIIFBMOP*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JIEOIIFBMOP_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
