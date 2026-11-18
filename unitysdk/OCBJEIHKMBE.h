#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole { class HackerGameBaseDamage; }
namespace System { template <typename T> class Action_1; }

#define OCBJEIHKMBE_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0xF174A10)
#define OCBJEIHKMBE_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xF174860)
#define OCBJEIHKMBE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xF1749F0)
#define OCBJEIHKMBE_FROMFLX_OFFSET UNITYSDK_OFFSET(0xF174980)
#define OCBJEIHKMBE_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xF174B30)
#define OCBJEIHKMBE_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xF174960)
#define OCBJEIHKMBE_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xF174A60)
#define OCBJEIHKMBE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xF174A00)
#define OCBJEIHKMBE_IGCGENIMIIP_OFFSET UNITYSDK_OFFSET(0xF174970)
#define OCBJEIHKMBE_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xF174850)
#define OCBJEIHKMBE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xF1749E0)
#define OCBJEIHKMBE__CTOR_OFFSET UNITYSDK_OFFSET(0xF174A50)

inline static constexpr unsigned int OCBJEIHKMBE_TypeDefinitionIndex = 69801;

class OCBJEIHKMBE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBJEIHKMBE__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OCBJEIHKMBE_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OCBJEIHKMBE* DGNAAPGKIPL()
	{
		return ((::OCBJEIHKMBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBJEIHKMBE_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBJEIHKMBE_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Void IGCGENIMIIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBJEIHKMBE_IGCGENIMIIP_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OCBJEIHKMBE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OCBJEIHKMBE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::MoleMole::HackerGameBaseDamage* COKNIICCODC()
	{
		return ((::MoleMole::HackerGameBaseDamage*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBJEIHKMBE_COKNIICCODC_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OCBJEIHKMBE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::OCBJEIHKMBE* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::OCBJEIHKMBE*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OCBJEIHKMBE_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + OCBJEIHKMBE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::OCBJEIHKMBE* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::OCBJEIHKMBE*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OCBJEIHKMBE_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
