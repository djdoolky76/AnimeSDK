#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CHFJLNEHAAF_IABIGFFPHOK;
class CHFJLNEHAAF_LNKGCGDKHHA;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CHFJLNEHAAF_HHGDGELONGK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x14F29AE0)
#define CHFJLNEHAAF_HHGDGELONGK_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14F2A2E0)
#define CHFJLNEHAAF_HHGDGELONGK_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14F2A340)
#define CHFJLNEHAAF_HHGDGELONGK_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x14F2A2F0)
#define CHFJLNEHAAF_HHGDGELONGK_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14F29AD0)
#define CHFJLNEHAAF_HHGDGELONGK__CTOR_OFFSET UNITYSDK_OFFSET(0x14F29AC0)

inline static constexpr unsigned int CHFJLNEHAAF_HHGDGELONGK_TypeDefinitionIndex = 87342;

class CHFJLNEHAAF_HHGDGELONGK : public ::System::Object
{
public:
	::System::String* APJMDPEMFLJ; // 0x10
	::CHFJLNEHAAF_LNKGCGDKHHA* GJMBPLNNNAM; // 0x18
	::System::Action_2<::System::String*, ::System::Object*>* DFCFINCHHDH; // 0x20
	::System::Action_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* KCNFHMFDOHI; // 0x28
	::CHFJLNEHAAF_IABIGFFPHOK* ECLMJPIDCNF; // 0x30
	::System::String* MGJEACGMHGB; // 0x38
	::System::Object* IDBEJJEKGDI; // 0x40
	::System::Int32 LCCCIMFPGLB; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x4C
	::System::Int32 LHBHBGMBKLF; // 0x50
	::System::Boolean HOFNECHLPLH; // 0x54

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_HHGDGELONGK__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_HHGDGELONGK_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_HHGDGELONGK_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_HHGDGELONGK_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_HHGDGELONGK_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_HHGDGELONGK_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
