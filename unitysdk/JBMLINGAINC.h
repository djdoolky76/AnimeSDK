#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENFMBFIKKNH;
class FKNIEPCILLG;
class GJEHPOHGIIP;
class NAIIOGFMJAN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JBMLINGAINC_FKHFKMDLHCO_OFFSET UNITYSDK_OFFSET(0x160D4360)
#define JBMLINGAINC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x160D37D0)
#define JBMLINGAINC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x160D2990)
#define JBMLINGAINC_HPMGOCNFIEE_OFFSET UNITYSDK_OFFSET(0x160D4240)
#define JBMLINGAINC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x160D3830)
#define JBMLINGAINC_NPJJMEBAGCC_OFFSET UNITYSDK_OFFSET(0x160D4080)
#define JBMLINGAINC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x160D2A10)
#define JBMLINGAINC__CTOR_OFFSET UNITYSDK_OFFSET(0x160D4070)

inline static constexpr unsigned int JBMLINGAINC_TypeDefinitionIndex = 72265;

class JBMLINGAINC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* CFMEBIFLHAG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::NAIIOGFMJAN*>* BBDBNJCFJKE; // 0x18
	::System::Collections::Generic::List_1<::NAIIOGFMJAN*>* DIAAPNBEFAA; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* FINHJPKEGEL; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* IALMEDAILMC; // 0x30
	::System::Collections::Generic::List_1<::System::String*>* AGGIJPGKEMN; // 0x38
	::System::Collections::Generic::List_1<::ENFMBFIKKNH*>* IKCIHFLLMJC; // 0x40
	::GJEHPOHGIIP* IFEKOLAODJJ; // 0x48
	::System::Int32 BELNJJKMMJP; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBMLINGAINC__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JBMLINGAINC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JBMLINGAINC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JBMLINGAINC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + JBMLINGAINC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void NPJJMEBAGCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBMLINGAINC_NPJJMEBAGCC_OFFSET))(this);
	}

	::System::Boolean HPMGOCNFIEE(::System::Int32 CLACNEMIOBA, ::NAIIOGFMJAN*& DFMKILICPFB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NAIIOGFMJAN*&))((::PBYTE)hIl2Cpp + JBMLINGAINC_HPMGOCNFIEE_OFFSET))(this, CLACNEMIOBA, DFMKILICPFB);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::NAIIOGFMJAN*>* FKHFKMDLHCO()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::NAIIOGFMJAN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBMLINGAINC_FKHFKMDLHCO_OFFSET))(this);
	}
};
