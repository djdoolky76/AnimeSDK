#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BKPBNBFHLNL;
namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define BKPBNBFHLNL_NCGEMAANAEK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1397ADF0)
#define BKPBNBFHLNL_NCGEMAANAEK_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1397AF40)
#define BKPBNBFHLNL_NCGEMAANAEK_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1397AFA0)
#define BKPBNBFHLNL_NCGEMAANAEK_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1397AF50)
#define BKPBNBFHLNL_NCGEMAANAEK_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1397ADE0)
#define BKPBNBFHLNL_NCGEMAANAEK__CTOR_OFFSET UNITYSDK_OFFSET(0x1397ADD0)

inline static constexpr unsigned int BKPBNBFHLNL_NCGEMAANAEK_TypeDefinitionIndex = 75470;

class BKPBNBFHLNL_NCGEMAANAEK : public ::System::Object
{
public:
	::BKPBNBFHLNL* KLHPEBKNIFB; // 0x10
	::UnityEngine::UI::Text* HIAOFPBCBHP; // 0x18
	::System::String* MIDLNNFPBCL; // 0x20
	::UnityEngine::UI::Text* KFGFLNMNELA; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x30
	::System::Single IDBEJJEKGDI; // 0x34

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BKPBNBFHLNL_NCGEMAANAEK__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPBNBFHLNL_NCGEMAANAEK_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPBNBFHLNL_NCGEMAANAEK_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPBNBFHLNL_NCGEMAANAEK_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPBNBFHLNL_NCGEMAANAEK_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPBNBFHLNL_NCGEMAANAEK_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
