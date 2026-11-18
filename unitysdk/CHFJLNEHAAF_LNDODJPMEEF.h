#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CHFJLNEHAAF_LNKGCGDKHHA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class WWW; }

#define CHFJLNEHAAF_LNDODJPMEEF_JPCPBBAMDGJ_OFFSET UNITYSDK_OFFSET(0x1479D3D0)
#define CHFJLNEHAAF_LNDODJPMEEF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1479D410)
#define CHFJLNEHAAF_LNDODJPMEEF_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1479D840)
#define CHFJLNEHAAF_LNDODJPMEEF_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1479D8A0)
#define CHFJLNEHAAF_LNDODJPMEEF_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1479D850)
#define CHFJLNEHAAF_LNDODJPMEEF_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1479D390)
#define CHFJLNEHAAF_LNDODJPMEEF__CTOR_OFFSET UNITYSDK_OFFSET(0x1479D380)

inline static constexpr unsigned int CHFJLNEHAAF_LNDODJPMEEF_TypeDefinitionIndex = 87337;

class CHFJLNEHAAF_LNDODJPMEEF : public ::System::Object
{
public:
	::System::String* OLOMNNBBHPJ; // 0x10
	::CHFJLNEHAAF_LNKGCGDKHHA* BCBPKKCOJHB; // 0x18
	::UnityEngine::WWW* PLAOEBNPMLG; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* CNKKDKEAEHG; // 0x28
	::System::Object* IDBEJJEKGDI; // 0x30
	::System::Single DBOOIOLEPOJ; // 0x38
	::System::Single FNMLPBCPEKK; // 0x3C
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_LNDODJPMEEF__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_LNDODJPMEEF_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_LNDODJPMEEF_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_LNDODJPMEEF_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_LNDODJPMEEF_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_LNDODJPMEEF_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Void JPCPBBAMDGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_LNDODJPMEEF_JPCPBBAMDGJ_OFFSET))(this);
	}
};
