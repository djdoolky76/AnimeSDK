#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define BIFGMDNGLLE_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xFF79060)
#define BIFGMDNGLLE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFF79450)
#define BIFGMDNGLLE_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFF79170)
#define BIFGMDNGLLE_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xFF79940)
#define BIFGMDNGLLE_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xFF79160)
#define BIFGMDNGLLE_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xFF797E0)
#define BIFGMDNGLLE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xFF794B0)
#define BIFGMDNGLLE_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0xFF79750)
#define BIFGMDNGLLE_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0xFF78DB0)
#define BIFGMDNGLLE_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xFF78FD0)
#define BIFGMDNGLLE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xFF791F0)
#define BIFGMDNGLLE__CTOR_OFFSET UNITYSDK_OFFSET(0xFF796C0)

inline static constexpr unsigned int BIFGMDNGLLE_TypeDefinitionIndex = 56324;

class BIFGMDNGLLE : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* PBANCBCAMOI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIFGMDNGLLE__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIFGMDNGLLE_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BIFGMDNGLLE_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIFGMDNGLLE_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIFGMDNGLLE_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BIFGMDNGLLE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BIFGMDNGLLE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BIFGMDNGLLE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIFGMDNGLLE_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::BIFGMDNGLLE* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BIFGMDNGLLE*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BIFGMDNGLLE_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::BIFGMDNGLLE* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BIFGMDNGLLE*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BIFGMDNGLLE_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BIFGMDNGLLE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
