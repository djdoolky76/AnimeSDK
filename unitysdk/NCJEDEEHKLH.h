#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define NCJEDEEHKLH_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xE731840)
#define NCJEDEEHKLH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE731E00)
#define NCJEDEEHKLH_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE731950)
#define NCJEDEEHKLH_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xE732390)
#define NCJEDEEHKLH_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xE731940)
#define NCJEDEEHKLH_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xE732230)
#define NCJEDEEHKLH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xE731E60)
#define NCJEDEEHKLH_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0xE7321A0)
#define NCJEDEEHKLH_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0xE731630)
#define NCJEDEEHKLH_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xE7317A0)
#define NCJEDEEHKLH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xE7319D0)
#define NCJEDEEHKLH__CTOR_OFFSET UNITYSDK_OFFSET(0xE732110)

inline static constexpr unsigned int NCJEDEEHKLH_TypeDefinitionIndex = 60831;

class NCJEDEEHKLH : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* MOOHFHCPOIE; // 0x30
	::HBIBNDIOKPG* ODBPLMMLIEO; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCJEDEEHKLH__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCJEDEEHKLH_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NCJEDEEHKLH_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCJEDEEHKLH_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCJEDEEHKLH_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NCJEDEEHKLH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NCJEDEEHKLH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCJEDEEHKLH_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NCJEDEEHKLH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::NCJEDEEHKLH* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::NCJEDEEHKLH*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NCJEDEEHKLH_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NCJEDEEHKLH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::NCJEDEEHKLH* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::NCJEDEEHKLH*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NCJEDEEHKLH_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
