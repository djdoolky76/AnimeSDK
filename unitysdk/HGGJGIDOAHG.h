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

#define HGGJGIDOAHG_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x17A44E00)
#define HGGJGIDOAHG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17A454C0)
#define HGGJGIDOAHG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17A44F10)
#define HGGJGIDOAHG_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x17A45A30)
#define HGGJGIDOAHG_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x17A44F00)
#define HGGJGIDOAHG_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x17A458D0)
#define HGGJGIDOAHG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x17A45520)
#define HGGJGIDOAHG_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x17A45840)
#define HGGJGIDOAHG_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x17A44B60)
#define HGGJGIDOAHG_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x17A44D70)
#define HGGJGIDOAHG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x17A44F90)
#define HGGJGIDOAHG__CTOR_OFFSET UNITYSDK_OFFSET(0x17A457B0)

inline static constexpr unsigned int HGGJGIDOAHG_TypeDefinitionIndex = 78790;

class HGGJGIDOAHG : public ::KHFGGFPIAOM
{
public:
	::FOBNALGHPPD_1<::UnityEngine::Vector3> KDLNKNDCPAB; // 0x30
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::UnityEngine::Vector3> DEIPJONPFNG; // 0x50
	::System::Byte _padding1[0x18];
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGJGIDOAHG__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGJGIDOAHG_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HGGJGIDOAHG_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGJGIDOAHG_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGJGIDOAHG_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HGGJGIDOAHG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HGGJGIDOAHG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGJGIDOAHG_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HGGJGIDOAHG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::HGGJGIDOAHG* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::HGGJGIDOAHG*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HGGJGIDOAHG_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HGGJGIDOAHG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::HGGJGIDOAHG* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::HGGJGIDOAHG*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HGGJGIDOAHG_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
