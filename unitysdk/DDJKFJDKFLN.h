#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/KHFGGFPIAOM.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HDJJJGCHLEE;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define DDJKFJDKFLN_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x19D58A20)
#define DDJKFJDKFLN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19D58FE0)
#define DDJKFJDKFLN_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19D58B30)
#define DDJKFJDKFLN_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x19D59350)
#define DDJKFJDKFLN_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x19D58B20)
#define DDJKFJDKFLN_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x19D59590)
#define DDJKFJDKFLN_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x19D59040)
#define DDJKFJDKFLN_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x19D59500)
#define DDJKFJDKFLN_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x19D587C0)
#define DDJKFJDKFLN_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x19D58990)
#define DDJKFJDKFLN_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x19D58BB0)
#define DDJKFJDKFLN__CTOR_OFFSET UNITYSDK_OFFSET(0x19D592C0)

inline static constexpr unsigned int DDJKFJDKFLN_TypeDefinitionIndex = 42007;

class DDJKFJDKFLN : public ::KHFGGFPIAOM
{
public:
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x30
	::FOBNALGHPPD_1<::System::String*> OFCPMNEOELH; // 0x38
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::System::String*> DOKMGJBJJHE; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJKFJDKFLN__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJKFJDKFLN_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DDJKFJDKFLN_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJKFJDKFLN_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJKFJDKFLN_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DDJKFJDKFLN_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DDJKFJDKFLN_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DDJKFJDKFLN_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DDJKFJDKFLN* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DDJKFJDKFLN*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DDJKFJDKFLN_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DDJKFJDKFLN_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJKFJDKFLN_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::DDJKFJDKFLN* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DDJKFJDKFLN*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DDJKFJDKFLN_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
