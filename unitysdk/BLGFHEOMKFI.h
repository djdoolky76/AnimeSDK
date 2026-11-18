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

#define BLGFHEOMKFI_AKJOGEFOLKC_OFFSET UNITYSDK_OFFSET(0xF7AAF80)
#define BLGFHEOMKFI_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xF7A9FA0)
#define BLGFHEOMKFI_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xF7AA990)
#define BLGFHEOMKFI_FROMFLX_OFFSET UNITYSDK_OFFSET(0xF7AA0B0)
#define BLGFHEOMKFI_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xF7AB250)
#define BLGFHEOMKFI_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xF7AA0A0)
#define BLGFHEOMKFI_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xF7AB0F0)
#define BLGFHEOMKFI_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xF7AA9F0)
#define BLGFHEOMKFI_LBCHANCGLPD_OFFSET UNITYSDK_OFFSET(0xF7AB060)
#define BLGFHEOMKFI_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xF7A9EB0)
#define BLGFHEOMKFI_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xF7AA130)
#define BLGFHEOMKFI__CTOR_OFFSET UNITYSDK_OFFSET(0xF7AB050)

inline static constexpr unsigned int BLGFHEOMKFI_TypeDefinitionIndex = 74599;

class BLGFHEOMKFI : public ::BBINMPMDFHC
{
public:
	::Il2CppArray<::System::String*>* PJBIOEIEOCN; // 0x18
	::System::String* EJIPLNGJLCN; // 0x20
	::Il2CppArray<::System::Int32>* JJOGJCMJJFL; // 0x28
	::Il2CppArray<::System::String*>* IDJOIJNPFDD; // 0x30
	::System::String* PGHPIKOCHFB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLGFHEOMKFI__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BLGFHEOMKFI_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::BBINMPMDFHC* DGNAAPGKIPL()
	{
		return ((::BBINMPMDFHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLGFHEOMKFI_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLGFHEOMKFI_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BLGFHEOMKFI_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BLGFHEOMKFI_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::BBNKLHCDAGB* AKJOGEFOLKC()
	{
		return ((::BBNKLHCDAGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLGFHEOMKFI_AKJOGEFOLKC_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BLGFHEOMKFI_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BLGFHEOMKFI_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::BBNKLHCDAGB* LBCHANCGLPD()
	{
		return ((::BBNKLHCDAGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLGFHEOMKFI_LBCHANCGLPD_OFFSET))(this);
	}

	static ::BLGFHEOMKFI* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BLGFHEOMKFI*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BLGFHEOMKFI_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::BLGFHEOMKFI* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BLGFHEOMKFI*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BLGFHEOMKFI_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
