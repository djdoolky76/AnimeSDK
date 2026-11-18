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
namespace System { template <typename T> class Action_1; }

#define CEBHGIFKIHD_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15327AB0)
#define CEBHGIFKIHD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15327FC0)
#define CEBHGIFKIHD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15327BC0)
#define CEBHGIFKIHD_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x153282F0)
#define CEBHGIFKIHD_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15327BB0)
#define CEBHGIFKIHD_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x153284A0)
#define CEBHGIFKIHD_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15328020)
#define CEBHGIFKIHD_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x15328600)
#define CEBHGIFKIHD_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x153278F0)
#define CEBHGIFKIHD_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15327A20)
#define CEBHGIFKIHD_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15327C40)
#define CEBHGIFKIHD__CTOR_OFFSET UNITYSDK_OFFSET(0x15328260)

inline static constexpr unsigned int CEBHGIFKIHD_TypeDefinitionIndex = 48450;

class CEBHGIFKIHD : public ::KHFGGFPIAOM
{
public:
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x30
	::FOBNALGHPPD_1<::System::Single> KLBGAHPJAJO; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBHGIFKIHD__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBHGIFKIHD_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CEBHGIFKIHD_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBHGIFKIHD_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBHGIFKIHD_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CEBHGIFKIHD_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CEBHGIFKIHD_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::CEBHGIFKIHD* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::CEBHGIFKIHD*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CEBHGIFKIHD_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::CEBHGIFKIHD* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::CEBHGIFKIHD*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CEBHGIFKIHD_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CEBHGIFKIHD_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CEBHGIFKIHD_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBHGIFKIHD_JFLMLBMNFFK_OFFSET))(this);
	}
};
