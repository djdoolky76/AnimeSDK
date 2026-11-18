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

#define AKMPHHGAELG_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x14225A20)
#define AKMPHHGAELG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14226280)
#define AKMPHHGAELG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14225B30)
#define AKMPHHGAELG_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x14226640)
#define AKMPHHGAELG_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x14225B20)
#define AKMPHHGAELG_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x14226880)
#define AKMPHHGAELG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x142262E0)
#define AKMPHHGAELG_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x142267F0)
#define AKMPHHGAELG_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x14225730)
#define AKMPHHGAELG_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x14225990)
#define AKMPHHGAELG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14225BB0)
#define AKMPHHGAELG__CTOR_OFFSET UNITYSDK_OFFSET(0x142265B0)

inline static constexpr unsigned int AKMPHHGAELG_TypeDefinitionIndex = 44447;

class AKMPHHGAELG : public ::KHFGGFPIAOM
{
public:
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x30
	::FOBNALGHPPD_1<::System::Single> CNCCEBPMCLG; // 0x38
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::UnityEngine::Vector3> LMIBEHAAIIB; // 0x58
	::System::Byte _padding1[0x18];
	::FOBNALGHPPD_1<::UnityEngine::Vector3> HFGOOECLHDD; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMPHHGAELG__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMPHHGAELG_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + AKMPHHGAELG_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMPHHGAELG_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMPHHGAELG_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + AKMPHHGAELG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AKMPHHGAELG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::AKMPHHGAELG* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::AKMPHHGAELG*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AKMPHHGAELG_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMPHHGAELG_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + AKMPHHGAELG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::AKMPHHGAELG* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::AKMPHHGAELG*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + AKMPHHGAELG_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AKMPHHGAELG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
