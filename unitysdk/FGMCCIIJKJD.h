#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNIANCLPBMP.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class IHHLJMNJOMK;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FGMCCIIJKJD_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x17142960)
#define FGMCCIIJKJD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x171438B0)
#define FGMCCIIJKJD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17142A70)
#define FGMCCIIJKJD_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x17144210)
#define FGMCCIIJKJD_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x17142A60)
#define FGMCCIIJKJD_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x171440B0)
#define FGMCCIIJKJD_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x17143910)
#define FGMCCIIJKJD_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x171428E0)
#define FGMCCIIJKJD_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x17142AF0)
#define FGMCCIIJKJD__CTOR_OFFSET UNITYSDK_OFFSET(0x171440A0)

inline static constexpr unsigned int FGMCCIIJKJD_TypeDefinitionIndex = 41018;

class FGMCCIIJKJD : public ::DNIANCLPBMP
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* JCAGKJKFKCE; // 0x18
	::System::String* NLHPOPGGNBE; // 0x20
	::System::Collections::Generic::List_1<::IHHLJMNJOMK*>* DHOGAFLADLO; // 0x28
	::System::Int32 BNCHIJNLDGG; // 0x30
	::System::Int32 EIDICIFDMEA; // 0x34
	::System::Int32 OPKBIIHCGLL; // 0x38
	::System::Int32 EOAJBHPLION; // 0x3C
	::System::Int32 DKJEGIBAMDK; // 0x40
	::System::Int32 EDDLHFOMBDH; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMCCIIJKJD__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FGMCCIIJKJD_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::DNIANCLPBMP* DGNAAPGKIPL()
	{
		return ((::DNIANCLPBMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMCCIIJKJD_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGMCCIIJKJD_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FGMCCIIJKJD_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FGMCCIIJKJD_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::FGMCCIIJKJD* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FGMCCIIJKJD*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FGMCCIIJKJD_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::FGMCCIIJKJD* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FGMCCIIJKJD*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FGMCCIIJKJD_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FGMCCIIJKJD_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FGMCCIIJKJD_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
