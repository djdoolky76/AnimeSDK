#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKMOOLIDNKF.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define PLODHCGAKMI_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1D1F20D0)
#define PLODHCGAKMI_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1F35F0)
#define PLODHCGAKMI_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1D1F21E0)
#define PLODHCGAKMI_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1D1F3B60)
#define PLODHCGAKMI_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1D1F21D0)
#define PLODHCGAKMI_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1D1F3DA0)
#define PLODHCGAKMI_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1D1F3650)
#define PLODHCGAKMI_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1D1F3D10)
#define PLODHCGAKMI_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1D1F0A90)
#define PLODHCGAKMI_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1D1F1FF0)
#define PLODHCGAKMI_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1D1F2260)
#define PLODHCGAKMI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F3AC0)

inline static constexpr unsigned int PLODHCGAKMI_TypeDefinitionIndex = 90506;

class PLODHCGAKMI : public ::HDJJJGCHLEE
{
public:
	::FOBNALGHPPD_1<::System::Boolean> DPDFCMBJPBO; // 0x30
	::System::Byte _padding0[0x18];
	::GPIOLGMOBLJ* EFONIMGOHFK; // 0x50
	::GPIOLGMOBLJ* JJBJAHCALBE; // 0x58
	::FOBNALGHPPD_1<::UnityEngine::Vector3> ACMBMOFFOHO; // 0x60
	::System::Byte _padding1[0x18];
	::FOBNALGHPPD_1<::System::Boolean> EGLHGJNCINO; // 0x80
	::System::Byte _padding2[0x18];
	::FOBNALGHPPD_1<::System::Boolean> NDMDHNOFHKO; // 0xA0
	::System::Byte _padding3[0x18];
	::GPIOLGMOBLJ* CPLFOFKKGGO; // 0xC0
	::FOBNALGHPPD_1<::System::Boolean> IIEFPHPKGGP; // 0xC8
	::System::Byte _padding4[0x18];
	::FOBNALGHPPD_1<::System::Boolean> GDHCNEFBNIJ; // 0xE8
	::System::Byte _padding5[0x18];
	::GPIOLGMOBLJ* DEIPJONPFNG; // 0x108
	::FOBNALGHPPD_1<::UnityEngine::Vector3> LHNDLGEHPFB; // 0x110
	::System::Byte _padding6[0x18];
	::DKMOOLIDNKF OGFDEOPLJAH; // 0x130

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLODHCGAKMI__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLODHCGAKMI_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PLODHCGAKMI_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLODHCGAKMI_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLODHCGAKMI_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PLODHCGAKMI_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PLODHCGAKMI_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PLODHCGAKMI_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::PLODHCGAKMI* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PLODHCGAKMI*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PLODHCGAKMI_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLODHCGAKMI_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PLODHCGAKMI_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::PLODHCGAKMI* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PLODHCGAKMI*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PLODHCGAKMI_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
