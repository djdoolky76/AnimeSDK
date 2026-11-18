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

#define BIGFDINOEGJ_AKJOGEFOLKC_OFFSET UNITYSDK_OFFSET(0x13967EB0)
#define BIGFDINOEGJ_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x13967630)
#define BIGFDINOEGJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13967B40)
#define BIGFDINOEGJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13967740)
#define BIGFDINOEGJ_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13968020)
#define BIGFDINOEGJ_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x13967730)
#define BIGFDINOEGJ_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x139681D0)
#define BIGFDINOEGJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13967BA0)
#define BIGFDINOEGJ_LBCHANCGLPD_OFFSET UNITYSDK_OFFSET(0x13967F90)
#define BIGFDINOEGJ_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13967590)
#define BIGFDINOEGJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x139677C0)
#define BIGFDINOEGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13967F80)

inline static constexpr unsigned int BIGFDINOEGJ_TypeDefinitionIndex = 83773;

class BIGFDINOEGJ : public ::BBINMPMDFHC
{
public:
	::System::String* AEOBMELIFHJ; // 0x18
	::Il2CppArray<::System::String*>* LLKJGPKCIAF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGFDINOEGJ__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BIGFDINOEGJ_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::BBINMPMDFHC* DGNAAPGKIPL()
	{
		return ((::BBINMPMDFHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGFDINOEGJ_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGFDINOEGJ_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BIGFDINOEGJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BIGFDINOEGJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::BBNKLHCDAGB* AKJOGEFOLKC()
	{
		return ((::BBNKLHCDAGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGFDINOEGJ_AKJOGEFOLKC_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BIGFDINOEGJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::BBNKLHCDAGB* LBCHANCGLPD()
	{
		return ((::BBNKLHCDAGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGFDINOEGJ_LBCHANCGLPD_OFFSET))(this);
	}

	static ::BIGFDINOEGJ* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BIGFDINOEGJ*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BIGFDINOEGJ_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::BIGFDINOEGJ* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BIGFDINOEGJ*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BIGFDINOEGJ_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BIGFDINOEGJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
