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

#define FCMDLLDBKLK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x14ABB970)
#define FCMDLLDBKLK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14ABC030)
#define FCMDLLDBKLK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14ABBA80)
#define FCMDLLDBKLK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x14ABC5A0)
#define FCMDLLDBKLK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x14ABBA70)
#define FCMDLLDBKLK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x14ABC440)
#define FCMDLLDBKLK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14ABC090)
#define FCMDLLDBKLK_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x14ABC3B0)
#define FCMDLLDBKLK_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x14ABB6D0)
#define FCMDLLDBKLK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x14ABB8E0)
#define FCMDLLDBKLK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14ABBB00)
#define FCMDLLDBKLK__CTOR_OFFSET UNITYSDK_OFFSET(0x14ABC320)

inline static constexpr unsigned int FCMDLLDBKLK_TypeDefinitionIndex = 55726;

class FCMDLLDBKLK : public ::KHFGGFPIAOM
{
public:
	::FOBNALGHPPD_1<::UnityEngine::Vector3> KDLNKNDCPAB; // 0x30
	::System::Byte _padding0[0x18];
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x50
	::FOBNALGHPPD_1<::UnityEngine::Vector3> DEIPJONPFNG; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCMDLLDBKLK__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCMDLLDBKLK_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FCMDLLDBKLK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCMDLLDBKLK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCMDLLDBKLK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FCMDLLDBKLK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FCMDLLDBKLK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCMDLLDBKLK_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FCMDLLDBKLK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FCMDLLDBKLK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::FCMDLLDBKLK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FCMDLLDBKLK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FCMDLLDBKLK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::FCMDLLDBKLK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FCMDLLDBKLK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FCMDLLDBKLK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
