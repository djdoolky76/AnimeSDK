#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/KHFGGFPIAOM.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HDJJJGCHLEE;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define ACHJANEKDPG_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16462940)
#define ACHJANEKDPG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16463000)
#define ACHJANEKDPG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16462A50)
#define ACHJANEKDPG_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16463570)
#define ACHJANEKDPG_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16462A40)
#define ACHJANEKDPG_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16463380)
#define ACHJANEKDPG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16463060)
#define ACHJANEKDPG_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x164634E0)
#define ACHJANEKDPG_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x16462690)
#define ACHJANEKDPG_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x164628B0)
#define ACHJANEKDPG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16462AD0)
#define ACHJANEKDPG__CTOR_OFFSET UNITYSDK_OFFSET(0x164632F0)

inline static constexpr unsigned int ACHJANEKDPG_TypeDefinitionIndex = 44240;

class ACHJANEKDPG : public ::KHFGGFPIAOM
{
public:
	::FOBNALGHPPD_1<::UnityEngine::Vector3> HNNMABFMCBL; // 0x30
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::UnityEngine::Vector3> JPGOMOGGDCH; // 0x50
	::System::Byte _padding1[0x18];
	::GPIOLGMOBLJ* HACHJLCBGJP; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHJANEKDPG__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHJANEKDPG_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ACHJANEKDPG_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHJANEKDPG_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHJANEKDPG_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ACHJANEKDPG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ACHJANEKDPG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::ACHJANEKDPG* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::ACHJANEKDPG*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ACHJANEKDPG_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHJANEKDPG_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ACHJANEKDPG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ACHJANEKDPG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::ACHJANEKDPG* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::ACHJANEKDPG*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ACHJANEKDPG_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
