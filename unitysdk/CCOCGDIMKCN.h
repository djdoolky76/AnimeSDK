#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EIIJFDEMGEG.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/LFGBJHCEJID.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FKNIEPCILLG;
class JCADHFOKIHK;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CCOCGDIMKCN_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x199F45B0)
#define CCOCGDIMKCN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x199F4F10)
#define CCOCGDIMKCN_FROMFLX_OFFSET UNITYSDK_OFFSET(0x199F46C0)
#define CCOCGDIMKCN_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x199F55F0)
#define CCOCGDIMKCN_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x199F46B0)
#define CCOCGDIMKCN_HEJIGKHPNNP_OFFSET UNITYSDK_OFFSET(0x199F3DF0)
#define CCOCGDIMKCN_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x199F5490)
#define CCOCGDIMKCN_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x199F4F70)
#define CCOCGDIMKCN_IKNPBCGFILP_OFFSET UNITYSDK_OFFSET(0x199F57A0)
#define CCOCGDIMKCN_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x199F4540)
#define CCOCGDIMKCN_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x199F4740)
#define CCOCGDIMKCN__CTOR_OFFSET UNITYSDK_OFFSET(0x199F5480)

inline static constexpr unsigned int CCOCGDIMKCN_TypeDefinitionIndex = 48477;

class CCOCGDIMKCN : public ::EIIJFDEMGEG
{
public:
	::MoleMole::Config::ConfigPosRot* MCOGMBGBBPF; // 0x10
	::MoleMole::Config::ConfigPosRot* OBPCBCNOLJN; // 0x18
	::System::Int32 NKMFHKDPFPD; // 0x20
	::System::Single AFIKJAIPLNG; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOCGDIMKCN__CTOR_OFFSET))(this);
	}

	::System::Void HEJIGKHPNNP(::MoleMole::Battle::Entity* PNJNAAHKAIB, ::JCADHFOKIHK* GKLACFFMCCN, ::System::Collections::Generic::List_1<::LFGBJHCEJID>*& PILELGPBCLL, ::UnityEngine::Vector3 LPOIBLLILAA, ::UnityEngine::Vector3 CFJFMMGPGKE, ::System::Int32 AIALJPFNOHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*, ::System::Collections::Generic::List_1<::LFGBJHCEJID>*&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + CCOCGDIMKCN_HEJIGKHPNNP_OFFSET))(this, PNJNAAHKAIB, GKLACFFMCCN, PILELGPBCLL, LPOIBLLILAA, CFJFMMGPGKE, AIALJPFNOHN);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CCOCGDIMKCN_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::EIIJFDEMGEG* DGNAAPGKIPL()
	{
		return ((::EIIJFDEMGEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOCGDIMKCN_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOCGDIMKCN_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CCOCGDIMKCN_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CCOCGDIMKCN_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CCOCGDIMKCN_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::CCOCGDIMKCN* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::CCOCGDIMKCN*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CCOCGDIMKCN_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::CCOCGDIMKCN* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::CCOCGDIMKCN*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CCOCGDIMKCN_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void IKNPBCGFILP(::MoleMole::Battle::Entity* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::System::Collections::Generic::List_1<::LFGBJHCEJID>*& FDHMCIFPNCK, ::UnityEngine::Vector3 MPBJAGIKPJM, ::UnityEngine::Vector3 DDMDINPGCFI, ::System::Int32 CEIDLKIHMLC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*, ::System::Collections::Generic::List_1<::LFGBJHCEJID>*&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + CCOCGDIMKCN_IKNPBCGFILP_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CCOCGDIMKCN_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
