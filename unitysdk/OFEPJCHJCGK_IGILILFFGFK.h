#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class OFEPJCHJCGK;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OFEPJCHJCGK_IGILILFFGFK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16C07490)
#define OFEPJCHJCGK_IGILILFFGFK_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16C07D60)
#define OFEPJCHJCGK_IGILILFFGFK_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16C07DC0)
#define OFEPJCHJCGK_IGILILFFGFK_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16C07D70)
#define OFEPJCHJCGK_IGILILFFGFK_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16C07480)
#define OFEPJCHJCGK_IGILILFFGFK__CTOR_OFFSET UNITYSDK_OFFSET(0x16C07470)

inline static constexpr unsigned int OFEPJCHJCGK_IGILILFFGFK_TypeDefinitionIndex = 70711;

class OFEPJCHJCGK_IGILILFFGFK : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* NLBLIFMHAKK; // 0x10
	::System::Collections::Generic::List_1<::System::Boolean>* AHMILNMLPIC; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* LCFIGCPKBGN; // 0x20
	::System::Action_1<::System::Single>* FOAHOFIHCCO; // 0x28
	::System::Object* IDBEJJEKGDI; // 0x30
	::OFEPJCHJCGK* KLHPEBKNIFB; // 0x38
	::Foundation::AssetRequestHandle DKOINHHABKI; // 0x40
	::System::String* GDLOCGDAJGL; // 0x60
	::System::Int32 DIBFFOBLAIP; // 0x68
	::System::Int32 LPDPDDOKLDI; // 0x6C
	::System::Int32 MDPILDGFNHN; // 0x70
	::System::Single ONFAMNDIKMG; // 0x74
	::System::Single FNGGJOBOFOE; // 0x78

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_IGILILFFGFK__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_IGILILFFGFK_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_IGILILFFGFK_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_IGILILFFGFK_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_IGILILFFGFK_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_IGILILFFGFK_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
