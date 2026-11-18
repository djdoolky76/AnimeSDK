#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBINMPMDFHC.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class BBNKLHCDAGB;
class FKNIEPCILLG;
class LBGOAJOFOIO;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define GBPFAOBMOJD_AKJOGEFOLKC_OFFSET UNITYSDK_OFFSET(0x1751DD00)
#define GBPFAOBMOJD_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1751CB10)
#define GBPFAOBMOJD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1751D610)
#define GBPFAOBMOJD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1751CC20)
#define GBPFAOBMOJD_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1751DDE0)
#define GBPFAOBMOJD_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1751CC10)
#define GBPFAOBMOJD_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1751E020)
#define GBPFAOBMOJD_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1751D670)
#define GBPFAOBMOJD_LBCHANCGLPD_OFFSET UNITYSDK_OFFSET(0x1751DF90)
#define GBPFAOBMOJD_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1751CA40)
#define GBPFAOBMOJD_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1751CCA0)
#define GBPFAOBMOJD__CTOR_OFFSET UNITYSDK_OFFSET(0x1751DDD0)

inline static constexpr unsigned int GBPFAOBMOJD_TypeDefinitionIndex = 63745;

class GBPFAOBMOJD : public ::BBINMPMDFHC
{
public:
	::Il2CppArray<::System::String*>* AFCLJHCNFAC; // 0x18
	::Il2CppArray<::LBGOAJOFOIO*>* AMBLIPDBHEK; // 0x20
	::Il2CppArray<::System::String*>* GDJDAMEBNKL; // 0x28
	::System::String* KJFNDEPLIPA; // 0x30
	::System::Int32 IMPKJEIGIFD; // 0x38
	::System::Int32 IMGCKFPEMHB; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPFAOBMOJD__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GBPFAOBMOJD_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::BBINMPMDFHC* DGNAAPGKIPL()
	{
		return ((::BBINMPMDFHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPFAOBMOJD_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPFAOBMOJD_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GBPFAOBMOJD_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GBPFAOBMOJD_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::BBNKLHCDAGB* AKJOGEFOLKC()
	{
		return ((::BBNKLHCDAGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPFAOBMOJD_AKJOGEFOLKC_OFFSET))(this);
	}

	static ::GBPFAOBMOJD* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::GBPFAOBMOJD*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GBPFAOBMOJD_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::BBNKLHCDAGB* LBCHANCGLPD()
	{
		return ((::BBNKLHCDAGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPFAOBMOJD_LBCHANCGLPD_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GBPFAOBMOJD_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GBPFAOBMOJD_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::GBPFAOBMOJD* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::GBPFAOBMOJD*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GBPFAOBMOJD_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
