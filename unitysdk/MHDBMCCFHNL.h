#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBINMPMDFHC.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class BBNKLHCDAGB;
class FKNIEPCILLG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MHDBMCCFHNL_AKJOGEFOLKC_OFFSET UNITYSDK_OFFSET(0x159325B0)
#define MHDBMCCFHNL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x159315D0)
#define MHDBMCCFHNL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15932170)
#define MHDBMCCFHNL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x159316E0)
#define MHDBMCCFHNL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15932830)
#define MHDBMCCFHNL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x159316D0)
#define MHDBMCCFHNL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x159326D0)
#define MHDBMCCFHNL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x159321D0)
#define MHDBMCCFHNL_LBCHANCGLPD_OFFSET UNITYSDK_OFFSET(0x15932640)
#define MHDBMCCFHNL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x159314D0)
#define MHDBMCCFHNL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15931760)
#define MHDBMCCFHNL__CTOR_OFFSET UNITYSDK_OFFSET(0x15932630)

inline static constexpr unsigned int MHDBMCCFHNL_TypeDefinitionIndex = 90255;

class MHDBMCCFHNL : public ::BBINMPMDFHC
{
public:
	::System::String* KDEJFJIKBHD; // 0x18
	::System::String* EBBCJLFILND; // 0x20
	::System::String* LMNMKFPEBGM; // 0x28
	::System::String* HKLMAKLOAIH; // 0x30
	::System::String* NHHJOONACPP; // 0x38
	::System::String* GLCDOJCCBJK; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHDBMCCFHNL__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MHDBMCCFHNL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::BBINMPMDFHC* DGNAAPGKIPL()
	{
		return ((::BBINMPMDFHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHDBMCCFHNL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHDBMCCFHNL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MHDBMCCFHNL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MHDBMCCFHNL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::BBNKLHCDAGB* AKJOGEFOLKC()
	{
		return ((::BBNKLHCDAGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHDBMCCFHNL_AKJOGEFOLKC_OFFSET))(this);
	}

	::BBNKLHCDAGB* LBCHANCGLPD()
	{
		return ((::BBNKLHCDAGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHDBMCCFHNL_LBCHANCGLPD_OFFSET))(this);
	}

	static ::MHDBMCCFHNL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::MHDBMCCFHNL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MHDBMCCFHNL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::MHDBMCCFHNL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::MHDBMCCFHNL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MHDBMCCFHNL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MHDBMCCFHNL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MHDBMCCFHNL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
