#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MKCJKKHODJF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1075E0A0)
#define MKCJKKHODJF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1075E570)
#define MKCJKKHODJF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1075E1B0)
#define MKCJKKHODJF_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1075E9D0)
#define MKCJKKHODJF_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1075E1A0)
#define MKCJKKHODJF_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1075E870)
#define MKCJKKHODJF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1075E5D0)
#define MKCJKKHODJF_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1075EB80)
#define MKCJKKHODJF_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1075D9C0)
#define MKCJKKHODJF_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1075E000)
#define MKCJKKHODJF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1075E230)
#define MKCJKKHODJF__CTOR_OFFSET UNITYSDK_OFFSET(0x1075E7E0)

inline static constexpr unsigned int MKCJKKHODJF_TypeDefinitionIndex = 70399;

class MKCJKKHODJF : public ::HDJJJGCHLEE
{
public:
	::GPIOLGMOBLJ* ILOJFPNKJII; // 0x30
	::GPIOLGMOBLJ* IFEFGIHOKOC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCJKKHODJF__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCJKKHODJF_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MKCJKKHODJF_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCJKKHODJF_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCJKKHODJF_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MKCJKKHODJF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MKCJKKHODJF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MKCJKKHODJF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::MKCJKKHODJF* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::MKCJKKHODJF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MKCJKKHODJF_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::MKCJKKHODJF* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::MKCJKKHODJF*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MKCJKKHODJF_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MKCJKKHODJF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCJKKHODJF_JFLMLBMNFFK_OFFSET))(this);
	}
};
