#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNJDGHBEMLK;
namespace UnityEngine { class AnimationCurve; }

#define PNJDGHBEMLK_IGCHKDIBCPK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x178EDE50)
#define PNJDGHBEMLK_IGCHKDIBCPK_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EBBCFF0)
#define PNJDGHBEMLK_IGCHKDIBCPK_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EBBD050)
#define PNJDGHBEMLK_IGCHKDIBCPK_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1EBBD000)
#define PNJDGHBEMLK_IGCHKDIBCPK_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x178EDE40)
#define PNJDGHBEMLK_IGCHKDIBCPK__CTOR_OFFSET UNITYSDK_OFFSET(0x178EDE30)

inline static constexpr unsigned int PNJDGHBEMLK_IGCHKDIBCPK_TypeDefinitionIndex = 64983;

class PNJDGHBEMLK_IGCHKDIBCPK : public ::System::Object
{
public:
	::System::Object* IDBEJJEKGDI; // 0x10
	::UnityEngine::AnimationCurve* MCDKFDCDJPP; // 0x18
	::PNJDGHBEMLK* KLHPEBKNIFB; // 0x20
	::System::Single IGEDHCLLJNN; // 0x28
	::System::Single DOBFFIICAII; // 0x2C
	::System::Int32 MDPILDGFNHN; // 0x30
	::System::Single DLBFEAOALML; // 0x34
	::System::Single GIAEPMKCBIB; // 0x38
	::System::Single MDPPNMIPDMP; // 0x3C

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_IGCHKDIBCPK__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_IGCHKDIBCPK_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_IGCHKDIBCPK_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_IGCHKDIBCPK_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_IGCHKDIBCPK_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_IGCHKDIBCPK_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
