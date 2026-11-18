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

#define JKOMCJNPBAB_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x13CC9D80)
#define JKOMCJNPBAB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13CCA490)
#define JKOMCJNPBAB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13CC9E90)
#define JKOMCJNPBAB_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13CCA880)
#define JKOMCJNPBAB_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x13CC9E80)
#define JKOMCJNPBAB_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x13CCAA30)
#define JKOMCJNPBAB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13CCA4F0)
#define JKOMCJNPBAB_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x13CCAB90)
#define JKOMCJNPBAB_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x13CC9AC0)
#define JKOMCJNPBAB_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13CC9CC0)
#define JKOMCJNPBAB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13CC9F10)
#define JKOMCJNPBAB__CTOR_OFFSET UNITYSDK_OFFSET(0x13CCA7F0)

inline static constexpr unsigned int JKOMCJNPBAB_TypeDefinitionIndex = 81888;

class JKOMCJNPBAB : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* ODBPLMMLIEO; // 0x30
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x38
	::HBIBNDIOKPG* MOOHFHCPOIE; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKOMCJNPBAB__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKOMCJNPBAB_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + JKOMCJNPBAB_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKOMCJNPBAB_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKOMCJNPBAB_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JKOMCJNPBAB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JKOMCJNPBAB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JKOMCJNPBAB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::JKOMCJNPBAB* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::JKOMCJNPBAB*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JKOMCJNPBAB_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + JKOMCJNPBAB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::JKOMCJNPBAB* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::JKOMCJNPBAB*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JKOMCJNPBAB_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKOMCJNPBAB_JFLMLBMNFFK_OFFSET))(this);
	}
};
