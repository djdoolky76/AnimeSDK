#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OCBJEIHKMBE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole { class HackerGameBaseDamage; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define DMAPFLAJJOD_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x19D78980)
#define DMAPFLAJJOD_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x19D78480)
#define DMAPFLAJJOD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19D787C0)
#define DMAPFLAJJOD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19D785A0)
#define DMAPFLAJJOD_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x19D78C00)
#define DMAPFLAJJOD_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x19D78580)
#define DMAPFLAJJOD_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x19D78AA0)
#define DMAPFLAJJOD_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x19D78820)
#define DMAPFLAJJOD_IGCGENIMIIP_OFFSET UNITYSDK_OFFSET(0x19D78590)
#define DMAPFLAJJOD_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x19D78470)
#define DMAPFLAJJOD_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x19D78620)
#define DMAPFLAJJOD_PPFAELPEMPE_OFFSET UNITYSDK_OFFSET(0x19D78A10)
#define DMAPFLAJJOD__CTOR_OFFSET UNITYSDK_OFFSET(0x19D78A00)

inline static constexpr unsigned int DMAPFLAJJOD_TypeDefinitionIndex = 78822;

class DMAPFLAJJOD : public ::OCBJEIHKMBE
{
public:
	::System::Single CJLKFOGFONE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMAPFLAJJOD__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DMAPFLAJJOD_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OCBJEIHKMBE* DGNAAPGKIPL()
	{
		return ((::OCBJEIHKMBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMAPFLAJJOD_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMAPFLAJJOD_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Void IGCGENIMIIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMAPFLAJJOD_IGCGENIMIIP_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DMAPFLAJJOD_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DMAPFLAJJOD_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::MoleMole::HackerGameBaseDamage* COKNIICCODC()
	{
		return ((::MoleMole::HackerGameBaseDamage*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMAPFLAJJOD_COKNIICCODC_OFFSET))(this);
	}

	::MoleMole::HackerGameBaseDamage* PPFAELPEMPE()
	{
		return ((::MoleMole::HackerGameBaseDamage*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMAPFLAJJOD_PPFAELPEMPE_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DMAPFLAJJOD_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DMAPFLAJJOD* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DMAPFLAJJOD*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DMAPFLAJJOD_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DMAPFLAJJOD_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::DMAPFLAJJOD* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DMAPFLAJJOD*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DMAPFLAJJOD_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
