#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class OFEPJCHJCGK;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ShaderVariantCollection; }

#define OFEPJCHJCGK_FBAIJKELBPG_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B77D660)
#define OFEPJCHJCGK_FBAIJKELBPG_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B77DF50)
#define OFEPJCHJCGK_FBAIJKELBPG_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B77DFB0)
#define OFEPJCHJCGK_FBAIJKELBPG_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B77DF60)
#define OFEPJCHJCGK_FBAIJKELBPG_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B77D650)
#define OFEPJCHJCGK_FBAIJKELBPG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B77D640)

inline static constexpr unsigned int OFEPJCHJCGK_FBAIJKELBPG_TypeDefinitionIndex = 70710;

class OFEPJCHJCGK_FBAIJKELBPG : public ::System::Object
{
public:
	::OFEPJCHJCGK* KLHPEBKNIFB; // 0x10
	::System::Object* IDBEJJEKGDI; // 0x18
	::UnityEngine::ShaderVariantCollection* LEKMOPABDLJ; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* NLBLIFMHAKK; // 0x28
	::System::String* GDLOCGDAJGL; // 0x30
	::System::Collections::Generic::List_1<::System::String*>* LCFIGCPKBGN; // 0x38
	::System::Action_1<::System::Single>* FOAHOFIHCCO; // 0x40
	::Foundation::AssetRequestHandle DKOINHHABKI; // 0x48
	::System::Collections::Generic::List_1<::System::Boolean>* AHMILNMLPIC; // 0x68
	::System::Int32 PEHPLONGKBK; // 0x70
	::System::Int32 DIBFFOBLAIP; // 0x74
	::System::Int32 MDPILDGFNHN; // 0x78

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_FBAIJKELBPG__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_FBAIJKELBPG_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_FBAIJKELBPG_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_FBAIJKELBPG_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_FBAIJKELBPG_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_FBAIJKELBPG_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
