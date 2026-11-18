#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/KHFGGFPIAOM.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HBIBNDIOKPG;
class HDJJJGCHLEE;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define PJBBENDCMPF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x11981DB0)
#define PJBBENDCMPF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11982660)
#define PJBBENDCMPF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11981EC0)
#define PJBBENDCMPF_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x11982B60)
#define PJBBENDCMPF_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x11981EB0)
#define PJBBENDCMPF_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x11982D10)
#define PJBBENDCMPF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x119826C0)
#define PJBBENDCMPF_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x11982AD0)
#define PJBBENDCMPF_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x11981B50)
#define PJBBENDCMPF_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x11981CF0)
#define PJBBENDCMPF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x11981F40)
#define PJBBENDCMPF__CTOR_OFFSET UNITYSDK_OFFSET(0x11982A40)

inline static constexpr unsigned int PJBBENDCMPF_TypeDefinitionIndex = 67980;

class PJBBENDCMPF : public ::KHFGGFPIAOM
{
public:
	::HBIBNDIOKPG* NKJHEHEBLAI; // 0x30
	::HBIBNDIOKPG* EBCJFMEDHHJ; // 0x38
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x40
	::FOBNALGHPPD_1<::System::Boolean> IMNCEDALMHB; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBBENDCMPF__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBBENDCMPF_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PJBBENDCMPF_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBBENDCMPF_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBBENDCMPF_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PJBBENDCMPF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PJBBENDCMPF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PJBBENDCMPF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBBENDCMPF_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PJBBENDCMPF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::PJBBENDCMPF* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PJBBENDCMPF*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PJBBENDCMPF_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::PJBBENDCMPF* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PJBBENDCMPF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PJBBENDCMPF_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
