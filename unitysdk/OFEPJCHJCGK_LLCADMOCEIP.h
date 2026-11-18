#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class OFEPJCHJCGK;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ShaderVariantCollection; }

#define OFEPJCHJCGK_LLCADMOCEIP_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16F71120)
#define OFEPJCHJCGK_LLCADMOCEIP_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16F71630)
#define OFEPJCHJCGK_LLCADMOCEIP_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16F71690)
#define OFEPJCHJCGK_LLCADMOCEIP_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16F71640)
#define OFEPJCHJCGK_LLCADMOCEIP_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16F71110)
#define OFEPJCHJCGK_LLCADMOCEIP__CTOR_OFFSET UNITYSDK_OFFSET(0x16F71100)

inline static constexpr unsigned int OFEPJCHJCGK_LLCADMOCEIP_TypeDefinitionIndex = 70716;

class OFEPJCHJCGK_LLCADMOCEIP : public ::System::Object
{
public:
	::UnityEngine::ShaderVariantCollection* GOOKMGGLHHH; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* LCFIGCPKBGN; // 0x18
	::OFEPJCHJCGK* KLHPEBKNIFB; // 0x20
	::Foundation::AssetRequestHandle EEJGGIENJCH; // 0x28
	::System::Object* IDBEJJEKGDI; // 0x48
	::System::Action_1<::System::Single>* FOAHOFIHCCO; // 0x50
	::System::Int32 MGHFJBAAABI; // 0x58
	::System::Int32 MDPILDGFNHN; // 0x5C
	::System::Int32 FEMAKAKHOJH; // 0x60
	::System::Int32 CNFJHJMICPB; // 0x64

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_LLCADMOCEIP__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_LLCADMOCEIP_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_LLCADMOCEIP_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_LLCADMOCEIP_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_LLCADMOCEIP_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_LLCADMOCEIP_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
