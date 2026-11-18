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

#define BHLCBBEEJIJ_AKJOGEFOLKC_OFFSET UNITYSDK_OFFSET(0x1867BE30)
#define BHLCBBEEJIJ_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1867B690)
#define BHLCBBEEJIJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1867BB90)
#define BHLCBBEEJIJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1867B7A0)
#define BHLCBBEEJIJ_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1867BF10)
#define BHLCBBEEJIJ_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1867B790)
#define BHLCBBEEJIJ_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1867C150)
#define BHLCBBEEJIJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1867BBF0)
#define BHLCBBEEJIJ_LBCHANCGLPD_OFFSET UNITYSDK_OFFSET(0x1867C0C0)
#define BHLCBBEEJIJ_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1867B5F0)
#define BHLCBBEEJIJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1867B820)
#define BHLCBBEEJIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1867BF00)

inline static constexpr unsigned int BHLCBBEEJIJ_TypeDefinitionIndex = 63823;

class BHLCBBEEJIJ : public ::BBINMPMDFHC
{
public:
	::System::String* PCLNDKMEGNO; // 0x18
	::System::String* DGPDHJDPLKK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLCBBEEJIJ__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BHLCBBEEJIJ_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::BBINMPMDFHC* DGNAAPGKIPL()
	{
		return ((::BBINMPMDFHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLCBBEEJIJ_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLCBBEEJIJ_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BHLCBBEEJIJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BHLCBBEEJIJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::BBNKLHCDAGB* AKJOGEFOLKC()
	{
		return ((::BBNKLHCDAGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLCBBEEJIJ_AKJOGEFOLKC_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BHLCBBEEJIJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::BHLCBBEEJIJ* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BHLCBBEEJIJ*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BHLCBBEEJIJ_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::BBNKLHCDAGB* LBCHANCGLPD()
	{
		return ((::BBNKLHCDAGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLCBBEEJIJ_LBCHANCGLPD_OFFSET))(this);
	}

	static ::BHLCBBEEJIJ* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BHLCBBEEJIJ*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BHLCBBEEJIJ_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BHLCBBEEJIJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
