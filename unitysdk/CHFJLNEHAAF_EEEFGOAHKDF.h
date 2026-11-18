#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CHFJLNEHAAF_IABIGFFPHOK;
class CHFJLNEHAAF_LNKGCGDKHHA;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }

#define CHFJLNEHAAF_EEEFGOAHKDF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16A2A6D0)
#define CHFJLNEHAAF_EEEFGOAHKDF_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16A2AF80)
#define CHFJLNEHAAF_EEEFGOAHKDF_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16A2AFE0)
#define CHFJLNEHAAF_EEEFGOAHKDF_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16A2AF90)
#define CHFJLNEHAAF_EEEFGOAHKDF_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16A2A6C0)
#define CHFJLNEHAAF_EEEFGOAHKDF__CTOR_OFFSET UNITYSDK_OFFSET(0x16A2A6B0)

inline static constexpr unsigned int CHFJLNEHAAF_EEEFGOAHKDF_TypeDefinitionIndex = 87340;

class CHFJLNEHAAF_EEEFGOAHKDF : public ::System::Object
{
public:
	::CHFJLNEHAAF_IABIGFFPHOK* ECLMJPIDCNF; // 0x10
	::System::Action_3<::System::String*, ::System::Int32, ::System::String*>* EPDFCHDHEHD; // 0x18
	::System::Object* IDBEJJEKGDI; // 0x20
	::System::String* KGADPBKIGLM; // 0x28
	::System::String* PEIPIMBJHJF; // 0x30
	::System::Action_1<::System::String*>* POCANNAFFOA; // 0x38
	::CHFJLNEHAAF_LNKGCGDKHHA* GGLNPNCAIBE; // 0x40
	::System::Action* BBGBNCDFFLJ; // 0x48
	::System::Int32 NPPDNCDNDDP; // 0x50
	::System::Int32 ECFNDKAGFEM; // 0x54
	::System::Boolean HOFNECHLPLH; // 0x58
	::System::Byte _padding0[0x3];
	::System::Int32 MDPILDGFNHN; // 0x5C

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_EEEFGOAHKDF__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_EEEFGOAHKDF_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_EEEFGOAHKDF_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_EEEFGOAHKDF_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_EEEFGOAHKDF_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_EEEFGOAHKDF_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
