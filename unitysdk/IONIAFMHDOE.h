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

#define IONIAFMHDOE_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x13AB2040)
#define IONIAFMHDOE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13AB2390)
#define IONIAFMHDOE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13AB2150)
#define IONIAFMHDOE_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13AB2710)
#define IONIAFMHDOE_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x13AB2140)
#define IONIAFMHDOE_HEJIGKHPNNP_OFFSET UNITYSDK_OFFSET(0x13AB1D80)
#define IONIAFMHDOE_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x13AB25B0)
#define IONIAFMHDOE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13AB23F0)
#define IONIAFMHDOE_IKNPBCGFILP_OFFSET UNITYSDK_OFFSET(0x13AB28C0)
#define IONIAFMHDOE_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13AB1FF0)
#define IONIAFMHDOE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13AB21D0)
#define IONIAFMHDOE__CTOR_OFFSET UNITYSDK_OFFSET(0x13AB25A0)

inline static constexpr unsigned int IONIAFMHDOE_TypeDefinitionIndex = 65569;

class IONIAFMHDOE : public ::EIIJFDEMGEG
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigPosRot*>* HCOMPLFIIGH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IONIAFMHDOE__CTOR_OFFSET))(this);
	}

	::System::Void HEJIGKHPNNP(::MoleMole::Battle::Entity* PNJNAAHKAIB, ::JCADHFOKIHK* GKLACFFMCCN, ::System::Collections::Generic::List_1<::LFGBJHCEJID>*& PILELGPBCLL, ::UnityEngine::Vector3 LPOIBLLILAA, ::UnityEngine::Vector3 CFJFMMGPGKE, ::System::Int32 AIALJPFNOHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*, ::System::Collections::Generic::List_1<::LFGBJHCEJID>*&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + IONIAFMHDOE_HEJIGKHPNNP_OFFSET))(this, PNJNAAHKAIB, GKLACFFMCCN, PILELGPBCLL, LPOIBLLILAA, CFJFMMGPGKE, AIALJPFNOHN);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + IONIAFMHDOE_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::EIIJFDEMGEG* DGNAAPGKIPL()
	{
		return ((::EIIJFDEMGEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IONIAFMHDOE_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IONIAFMHDOE_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IONIAFMHDOE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IONIAFMHDOE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::IONIAFMHDOE* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::IONIAFMHDOE*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IONIAFMHDOE_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IONIAFMHDOE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::IONIAFMHDOE* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::IONIAFMHDOE*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IONIAFMHDOE_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + IONIAFMHDOE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void IKNPBCGFILP(::MoleMole::Battle::Entity* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::System::Collections::Generic::List_1<::LFGBJHCEJID>*& FDHMCIFPNCK, ::UnityEngine::Vector3 MPBJAGIKPJM, ::UnityEngine::Vector3 DDMDINPGCFI, ::System::Int32 CEIDLKIHMLC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*, ::System::Collections::Generic::List_1<::LFGBJHCEJID>*&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + IONIAFMHDOE_IKNPBCGFILP_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}
};
