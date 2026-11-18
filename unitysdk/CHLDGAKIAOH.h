#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OOHOOAFNBNF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CHLDGAKIAOH_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x14553500)
#define CHLDGAKIAOH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x145531E0)
#define CHLDGAKIAOH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14553610)
#define CHLDGAKIAOH_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x14553A20)
#define CHLDGAKIAOH_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x14553600)
#define CHLDGAKIAOH_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x14553BD0)
#define CHLDGAKIAOH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14553240)
#define CHLDGAKIAOH_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x14553490)
#define CHLDGAKIAOH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14553690)
#define CHLDGAKIAOH__CTOR_OFFSET UNITYSDK_OFFSET(0x14553A10)

inline static constexpr unsigned int CHLDGAKIAOH_TypeDefinitionIndex = 66166;

class CHLDGAKIAOH : public ::OOHOOAFNBNF
{
public:
	::MoleMole::Config::DynamicFloat* OKNBCJGBGKJ; // 0x20
	::MoleMole::Config::DynamicFloat* NIKOAMMLCCC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLDGAKIAOH__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CHLDGAKIAOH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CHLDGAKIAOH_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OOHOOAFNBNF* DGNAAPGKIPL()
	{
		return ((::OOHOOAFNBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLDGAKIAOH_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLDGAKIAOH_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CHLDGAKIAOH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CHLDGAKIAOH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::CHLDGAKIAOH* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::CHLDGAKIAOH*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CHLDGAKIAOH_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::CHLDGAKIAOH* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::CHLDGAKIAOH*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CHLDGAKIAOH_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CHLDGAKIAOH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
