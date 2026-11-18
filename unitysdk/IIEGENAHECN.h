#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NOMPBCHLIBN.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IIEGENAHECN_DFIOLLHIJFP_OFFSET UNITYSDK_OFFSET(0x15EBF350)
#define IIEGENAHECN_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x15EBF310)
#define IIEGENAHECN_GHEKCHPEHCA_OFFSET UNITYSDK_OFFSET(0x15EBF480)
#define IIEGENAHECN_KJGFHDAMHGO_OFFSET UNITYSDK_OFFSET(0x15EBF3E0)
#define IIEGENAHECN_NGFKBKCFPLK_OFFSET UNITYSDK_OFFSET(0x15EBF3C0)
#define IIEGENAHECN_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MOLEMOLE_ZIPLINE_ZIPLINEINPUTCOMMAND__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15EBF110)
#define IIEGENAHECN_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15EBF1B0)
#define IIEGENAHECN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15EBEDB0)
#define IIEGENAHECN__CTOR_OFFSET UNITYSDK_OFFSET(0x15EBF2B0)

inline static constexpr unsigned int IIEGENAHECN_TypeDefinitionIndex = 48396;

class IIEGENAHECN : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::NOMPBCHLIBN>* IKKMMKPHPHN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEGENAHECN__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEGENAHECN_TOSTRING_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::NOMPBCHLIBN>* System_Collections_Generic_IEnumerable_MoleMole_ZipLine_ZipLineInputCommand__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::NOMPBCHLIBN>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEGENAHECN_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MOLEMOLE_ZIPLINE_ZIPLINEINPUTCOMMAND__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEGENAHECN_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEGENAHECN_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void DFIOLLHIJFP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEGENAHECN_DFIOLLHIJFP_OFFSET))(this);
	}

	::System::Int32 NGFKBKCFPLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEGENAHECN_NGFKBKCFPLK_OFFSET))(this);
	}

	::System::Object* KJGFHDAMHGO()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIEGENAHECN_KJGFHDAMHGO_OFFSET))(this);
	}

	::System::Void GHEKCHPEHCA(::NOMPBCHLIBN HNOGOACBONK)
	{
		return ((::System::Void(*)(::PVOID, ::NOMPBCHLIBN))((::PBYTE)hIl2Cpp + IIEGENAHECN_GHEKCHPEHCA_OFFSET))(this, HNOGOACBONK);
	}
};
