#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBINMPMDFHC.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class BBNKLHCDAGB;
class DMHJJMPHHLF;
class FKNIEPCILLG;
class INODGOKJJCE;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KLIGCMBNAJL_AKJOGEFOLKC_OFFSET UNITYSDK_OFFSET(0x17665860)
#define KLIGCMBNAJL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x17664880)
#define KLIGCMBNAJL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17665290)
#define KLIGCMBNAJL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17664990)
#define KLIGCMBNAJL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x17665940)
#define KLIGCMBNAJL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x17664980)
#define KLIGCMBNAJL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x17665AF0)
#define KLIGCMBNAJL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x176652F0)
#define KLIGCMBNAJL_LBCHANCGLPD_OFFSET UNITYSDK_OFFSET(0x17665C50)
#define KLIGCMBNAJL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x17664790)
#define KLIGCMBNAJL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x17664A10)
#define KLIGCMBNAJL__CTOR_OFFSET UNITYSDK_OFFSET(0x17665930)

inline static constexpr unsigned int KLIGCMBNAJL_TypeDefinitionIndex = 66336;

class KLIGCMBNAJL : public ::BBINMPMDFHC
{
public:
	::DMHJJMPHHLF* EOJKOCKJHKA; // 0x18
	::Il2CppArray<::System::String*>* IDJOIJNPFDD; // 0x20
	::DMHJJMPHHLF* IMPOAEMCAJL; // 0x28
	::System::Collections::Generic::List_1<::INODGOKJJCE*>* EJBHLIALIBL; // 0x30
	::Il2CppArray<::System::String*>* PJBIOEIEOCN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIGCMBNAJL__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + KLIGCMBNAJL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::BBINMPMDFHC* DGNAAPGKIPL()
	{
		return ((::BBINMPMDFHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIGCMBNAJL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIGCMBNAJL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KLIGCMBNAJL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KLIGCMBNAJL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::BBNKLHCDAGB* AKJOGEFOLKC()
	{
		return ((::BBNKLHCDAGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIGCMBNAJL_AKJOGEFOLKC_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + KLIGCMBNAJL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KLIGCMBNAJL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::KLIGCMBNAJL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::KLIGCMBNAJL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KLIGCMBNAJL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::KLIGCMBNAJL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::KLIGCMBNAJL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KLIGCMBNAJL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::BBNKLHCDAGB* LBCHANCGLPD()
	{
		return ((::BBNKLHCDAGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIGCMBNAJL_LBCHANCGLPD_OFFSET))(this);
	}
};
