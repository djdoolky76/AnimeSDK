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

#define GKFFPJMBMGE_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x10FE5140)
#define GKFFPJMBMGE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10FE5800)
#define GKFFPJMBMGE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10FE5250)
#define GKFFPJMBMGE_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x10FE5CE0)
#define GKFFPJMBMGE_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x10FE5240)
#define GKFFPJMBMGE_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x10FE5B80)
#define GKFFPJMBMGE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x10FE5860)
#define GKFFPJMBMGE_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x10FE5E90)
#define GKFFPJMBMGE_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x10FE4F30)
#define GKFFPJMBMGE_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x10FE50B0)
#define GKFFPJMBMGE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x10FE52D0)
#define GKFFPJMBMGE__CTOR_OFFSET UNITYSDK_OFFSET(0x10FE5AF0)

inline static constexpr unsigned int GKFFPJMBMGE_TypeDefinitionIndex = 38962;

class GKFFPJMBMGE : public ::KHFGGFPIAOM
{
public:
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x30
	::FOBNALGHPPD_1<::System::Single> HFGOOECLHDD; // 0x38
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::System::Single> LMIBEHAAIIB; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFFPJMBMGE__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFFPJMBMGE_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GKFFPJMBMGE_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFFPJMBMGE_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFFPJMBMGE_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GKFFPJMBMGE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GKFFPJMBMGE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::GKFFPJMBMGE* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::GKFFPJMBMGE*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GKFFPJMBMGE_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GKFFPJMBMGE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::GKFFPJMBMGE* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::GKFFPJMBMGE*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GKFFPJMBMGE_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GKFFPJMBMGE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFFPJMBMGE_JFLMLBMNFFK_OFFSET))(this);
	}
};
