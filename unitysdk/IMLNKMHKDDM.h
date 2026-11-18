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

#define IMLNKMHKDDM_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15C20540)
#define IMLNKMHKDDM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15C20C00)
#define IMLNKMHKDDM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15C20650)
#define IMLNKMHKDDM_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15C21010)
#define IMLNKMHKDDM_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15C20640)
#define IMLNKMHKDDM_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15C211C0)
#define IMLNKMHKDDM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15C20C60)
#define IMLNKMHKDDM_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x15C20F80)
#define IMLNKMHKDDM_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x15C202E0)
#define IMLNKMHKDDM_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15C204B0)
#define IMLNKMHKDDM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15C206D0)
#define IMLNKMHKDDM__CTOR_OFFSET UNITYSDK_OFFSET(0x15C20EF0)

inline static constexpr unsigned int IMLNKMHKDDM_TypeDefinitionIndex = 64294;

class IMLNKMHKDDM : public ::KHFGGFPIAOM
{
public:
	::FOBNALGHPPD_1<::UnityEngine::Vector3> KDLNKNDCPAB; // 0x30
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::System::Single> HBADNCJHEOJ; // 0x50
	::System::Byte _padding1[0x18];
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMLNKMHKDDM__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMLNKMHKDDM_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + IMLNKMHKDDM_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMLNKMHKDDM_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMLNKMHKDDM_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IMLNKMHKDDM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IMLNKMHKDDM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + IMLNKMHKDDM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMLNKMHKDDM_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IMLNKMHKDDM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::IMLNKMHKDDM* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::IMLNKMHKDDM*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IMLNKMHKDDM_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::IMLNKMHKDDM* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::IMLNKMHKDDM*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IMLNKMHKDDM_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
