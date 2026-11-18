#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define FOOJJGCPBIF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x14115F10)
#define FOOJJGCPBIF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14116270)
#define FOOJJGCPBIF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14116020)
#define FOOJJGCPBIF_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x14116520)
#define FOOJJGCPBIF_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x14116010)
#define FOOJJGCPBIF_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x14116760)
#define FOOJJGCPBIF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x141162D0)
#define FOOJJGCPBIF_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x141166D0)
#define FOOJJGCPBIF_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x14115C50)
#define FOOJJGCPBIF_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x14115E80)
#define FOOJJGCPBIF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x141160A0)
#define FOOJJGCPBIF__CTOR_OFFSET UNITYSDK_OFFSET(0x14116490)

inline static constexpr unsigned int FOOJJGCPBIF_TypeDefinitionIndex = 57803;

class FOOJJGCPBIF : public ::HDJJJGCHLEE
{
public:
	::GPIOLGMOBLJ* CPLFOFKKGGO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOJJGCPBIF__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOJJGCPBIF_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FOOJJGCPBIF_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOJJGCPBIF_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOJJGCPBIF_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FOOJJGCPBIF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FOOJJGCPBIF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::FOOJJGCPBIF* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FOOJJGCPBIF*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FOOJJGCPBIF_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOJJGCPBIF_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::FOOJJGCPBIF* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FOOJJGCPBIF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FOOJJGCPBIF_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FOOJJGCPBIF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FOOJJGCPBIF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
