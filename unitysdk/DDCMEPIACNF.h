#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define DDCMEPIACNF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x13289230)
#define DDCMEPIACNF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13289760)
#define DDCMEPIACNF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13289340)
#define DDCMEPIACNF_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13289B40)
#define DDCMEPIACNF_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x13289330)
#define DDCMEPIACNF_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x13289CF0)
#define DDCMEPIACNF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x132897C0)
#define DDCMEPIACNF_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x13289AB0)
#define DDCMEPIACNF_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x13289050)
#define DDCMEPIACNF_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13289190)
#define DDCMEPIACNF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x132893C0)
#define DDCMEPIACNF__CTOR_OFFSET UNITYSDK_OFFSET(0x13289A20)

inline static constexpr unsigned int DDCMEPIACNF_TypeDefinitionIndex = 84127;

class DDCMEPIACNF : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* CPLFOFKKGGO; // 0x30
	::GPIOLGMOBLJ* FFCPIEDHBDP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCMEPIACNF__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCMEPIACNF_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DDCMEPIACNF_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCMEPIACNF_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCMEPIACNF_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DDCMEPIACNF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DDCMEPIACNF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DDCMEPIACNF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DDCMEPIACNF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCMEPIACNF_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::DDCMEPIACNF* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DDCMEPIACNF*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DDCMEPIACNF_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DDCMEPIACNF* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DDCMEPIACNF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DDCMEPIACNF_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
