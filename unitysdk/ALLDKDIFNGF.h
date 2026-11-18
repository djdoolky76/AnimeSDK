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

#define ALLDKDIFNGF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x126685F0)
#define ALLDKDIFNGF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12668CB0)
#define ALLDKDIFNGF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12668700)
#define ALLDKDIFNGF_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x12669190)
#define ALLDKDIFNGF_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x126686F0)
#define ALLDKDIFNGF_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x12669030)
#define ALLDKDIFNGF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x12668D10)
#define ALLDKDIFNGF_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x12669340)
#define ALLDKDIFNGF_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x12668390)
#define ALLDKDIFNGF_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x12668560)
#define ALLDKDIFNGF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x12668780)
#define ALLDKDIFNGF__CTOR_OFFSET UNITYSDK_OFFSET(0x12668FA0)

inline static constexpr unsigned int ALLDKDIFNGF_TypeDefinitionIndex = 59435;

class ALLDKDIFNGF : public ::KHFGGFPIAOM
{
public:
	::GPIOLGMOBLJ* HACHJLCBGJP; // 0x30
	::FOBNALGHPPD_1<::UnityEngine::Vector3> HNNMABFMCBL; // 0x38
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::UnityEngine::Vector3> JPGOMOGGDCH; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLDKDIFNGF__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLDKDIFNGF_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ALLDKDIFNGF_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLDKDIFNGF_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLDKDIFNGF_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ALLDKDIFNGF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ALLDKDIFNGF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::ALLDKDIFNGF* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::ALLDKDIFNGF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ALLDKDIFNGF_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ALLDKDIFNGF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ALLDKDIFNGF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::ALLDKDIFNGF* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::ALLDKDIFNGF*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ALLDKDIFNGF_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALLDKDIFNGF_JFLMLBMNFFK_OFFSET))(this);
	}
};
