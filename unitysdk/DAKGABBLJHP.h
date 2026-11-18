#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHFGGFPIAOM.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HBIBNDIOKPG;
class HDJJJGCHLEE;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define DAKGABBLJHP_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x19D4F630)
#define DAKGABBLJHP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19D4FD40)
#define DAKGABBLJHP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19D4F740)
#define DAKGABBLJHP_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x19D50160)
#define DAKGABBLJHP_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x19D4F730)
#define DAKGABBLJHP_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x19D503A0)
#define DAKGABBLJHP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x19D4FDA0)
#define DAKGABBLJHP_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x19D50310)
#define DAKGABBLJHP_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x19D4F1E0)
#define DAKGABBLJHP_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x19D4F570)
#define DAKGABBLJHP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x19D4F7C0)
#define DAKGABBLJHP__CTOR_OFFSET UNITYSDK_OFFSET(0x19D500D0)

inline static constexpr unsigned int DAKGABBLJHP_TypeDefinitionIndex = 70939;

class DAKGABBLJHP : public ::KHFGGFPIAOM
{
public:
	::HBIBNDIOKPG* JPGOMOGGDCH; // 0x30
	::GPIOLGMOBLJ* HACHJLCBGJP; // 0x38
	::HBIBNDIOKPG* HNNMABFMCBL; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAKGABBLJHP__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAKGABBLJHP_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DAKGABBLJHP_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAKGABBLJHP_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAKGABBLJHP_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DAKGABBLJHP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DAKGABBLJHP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DAKGABBLJHP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::DAKGABBLJHP* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DAKGABBLJHP*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DAKGABBLJHP_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAKGABBLJHP_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DAKGABBLJHP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DAKGABBLJHP* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DAKGABBLJHP*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DAKGABBLJHP_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
