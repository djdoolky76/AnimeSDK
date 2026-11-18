#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CHFJLNEHAAF_LNKGCGDKHHA;
class CHFJLNEHAAF_PNEJDCLKPKF;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CHFJLNEHAAF_MNHCCEECAAH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16957070)
#define CHFJLNEHAAF_MNHCCEECAAH_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x169579A0)
#define CHFJLNEHAAF_MNHCCEECAAH_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16957A00)
#define CHFJLNEHAAF_MNHCCEECAAH_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x169579B0)
#define CHFJLNEHAAF_MNHCCEECAAH_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16957060)
#define CHFJLNEHAAF_MNHCCEECAAH__CTOR_OFFSET UNITYSDK_OFFSET(0x16957050)

inline static constexpr unsigned int CHFJLNEHAAF_MNHCCEECAAH_TypeDefinitionIndex = 87344;

class CHFJLNEHAAF_MNHCCEECAAH : public ::System::Object
{
public:
	::System::String* MMILEEAPHFN; // 0x10
	::CHFJLNEHAAF_PNEJDCLKPKF* ECLMJPIDCNF; // 0x18
	::System::Action_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* KCNFHMFDOHI; // 0x20
	::System::Object* IDBEJJEKGDI; // 0x28
	::System::Action_2<::System::String*, ::System::Object*>* DFCFINCHHDH; // 0x30
	::CHFJLNEHAAF_LNKGCGDKHHA* GJMBPLNNNAM; // 0x38
	::System::Boolean IAKJAPGHLPE; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 ECFNDKAGFEM; // 0x44
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_MNHCCEECAAH__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_MNHCCEECAAH_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_MNHCCEECAAH_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_MNHCCEECAAH_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_MNHCCEECAAH_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_MNHCCEECAAH_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
