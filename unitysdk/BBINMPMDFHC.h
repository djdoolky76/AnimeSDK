#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class BBNKLHCDAGB;
class FKNIEPCILLG;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BBINMPMDFHC_AKJOGEFOLKC_OFFSET UNITYSDK_OFFSET(0x13610970)
#define BBINMPMDFHC_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x136103C0)
#define BBINMPMDFHC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13610780)
#define BBINMPMDFHC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13610530)
#define BBINMPMDFHC_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13610A90)
#define BBINMPMDFHC_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x136104C0)
#define BBINMPMDFHC_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x136109C0)
#define BBINMPMDFHC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x136107E0)
#define BBINMPMDFHC_IGCGENIMIIP_OFFSET UNITYSDK_OFFSET(0x136104D0)
#define BBINMPMDFHC_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13610370)
#define BBINMPMDFHC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x136105B0)
#define BBINMPMDFHC__CTOR_OFFSET UNITYSDK_OFFSET(0x136109B0)

inline static constexpr unsigned int BBINMPMDFHC_TypeDefinitionIndex = 84874;

class BBINMPMDFHC : public ::System::Object
{
public:
	::System::String* PIBDDAFBCHN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBINMPMDFHC__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BBINMPMDFHC_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::BBINMPMDFHC* DGNAAPGKIPL()
	{
		return ((::BBINMPMDFHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBINMPMDFHC_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBINMPMDFHC_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Void IGCGENIMIIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBINMPMDFHC_IGCGENIMIIP_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BBINMPMDFHC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BBINMPMDFHC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::BBNKLHCDAGB* AKJOGEFOLKC()
	{
		return ((::BBNKLHCDAGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBINMPMDFHC_AKJOGEFOLKC_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BBINMPMDFHC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::BBINMPMDFHC* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BBINMPMDFHC*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BBINMPMDFHC_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BBINMPMDFHC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::BBINMPMDFHC* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BBINMPMDFHC*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BBINMPMDFHC_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
