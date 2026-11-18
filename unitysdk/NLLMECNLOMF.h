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

#define NLLMECNLOMF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xE764BC0)
#define NLLMECNLOMF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE765280)
#define NLLMECNLOMF_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE764CD0)
#define NLLMECNLOMF_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xE7657F0)
#define NLLMECNLOMF_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xE764CC0)
#define NLLMECNLOMF_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xE765600)
#define NLLMECNLOMF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xE7652E0)
#define NLLMECNLOMF_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0xE765760)
#define NLLMECNLOMF_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0xE764900)
#define NLLMECNLOMF_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xE764B30)
#define NLLMECNLOMF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xE764D50)
#define NLLMECNLOMF__CTOR_OFFSET UNITYSDK_OFFSET(0xE765570)

inline static constexpr unsigned int NLLMECNLOMF_TypeDefinitionIndex = 83887;

class NLLMECNLOMF : public ::KHFGGFPIAOM
{
public:
	::FOBNALGHPPD_1<::UnityEngine::Vector3> KDLNKNDCPAB; // 0x30
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::UnityEngine::Vector3> DEIPJONPFNG; // 0x50
	::System::Byte _padding1[0x18];
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLLMECNLOMF__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLLMECNLOMF_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NLLMECNLOMF_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLLMECNLOMF_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLLMECNLOMF_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NLLMECNLOMF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NLLMECNLOMF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NLLMECNLOMF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::NLLMECNLOMF* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::NLLMECNLOMF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NLLMECNLOMF_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NLLMECNLOMF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLLMECNLOMF_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::NLLMECNLOMF* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::NLLMECNLOMF*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NLLMECNLOMF_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
