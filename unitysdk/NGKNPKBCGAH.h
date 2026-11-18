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

#define NGKNPKBCGAH_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xE198020)
#define NGKNPKBCGAH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE1986E0)
#define NGKNPKBCGAH_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE198130)
#define NGKNPKBCGAH_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xE198A60)
#define NGKNPKBCGAH_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xE198120)
#define NGKNPKBCGAH_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xE198C10)
#define NGKNPKBCGAH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xE198740)
#define NGKNPKBCGAH_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0xE198D70)
#define NGKNPKBCGAH_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0xE197DC0)
#define NGKNPKBCGAH_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xE197F90)
#define NGKNPKBCGAH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xE1981B0)
#define NGKNPKBCGAH__CTOR_OFFSET UNITYSDK_OFFSET(0xE1989D0)

inline static constexpr unsigned int NGKNPKBCGAH_TypeDefinitionIndex = 68255;

class NGKNPKBCGAH : public ::KHFGGFPIAOM
{
public:
	::FOBNALGHPPD_1<::UnityEngine::Vector3> HNNMABFMCBL; // 0x30
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::UnityEngine::Vector3> JPGOMOGGDCH; // 0x50
	::System::Byte _padding1[0x18];
	::GPIOLGMOBLJ* HACHJLCBGJP; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKNPKBCGAH__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKNPKBCGAH_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NGKNPKBCGAH_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKNPKBCGAH_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKNPKBCGAH_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NGKNPKBCGAH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NGKNPKBCGAH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NGKNPKBCGAH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::NGKNPKBCGAH* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::NGKNPKBCGAH*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NGKNPKBCGAH_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::NGKNPKBCGAH* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::NGKNPKBCGAH*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NGKNPKBCGAH_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NGKNPKBCGAH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGKNPKBCGAH_JFLMLBMNFFK_OFFSET))(this);
	}
};
