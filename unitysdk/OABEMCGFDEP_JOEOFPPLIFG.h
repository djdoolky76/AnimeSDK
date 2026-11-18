#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

class OABEMCGFDEP;
namespace System { class Action; }

#define OABEMCGFDEP_JOEOFPPLIFG_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B762910)
#define OABEMCGFDEP_JOEOFPPLIFG_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B762A80)
#define OABEMCGFDEP_JOEOFPPLIFG_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B762AE0)
#define OABEMCGFDEP_JOEOFPPLIFG_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B762A90)
#define OABEMCGFDEP_JOEOFPPLIFG_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B762900)
#define OABEMCGFDEP_JOEOFPPLIFG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B762540)

inline static constexpr unsigned int OABEMCGFDEP_JOEOFPPLIFG_TypeDefinitionIndex = 65520;

class OABEMCGFDEP_JOEOFPPLIFG : public ::System::Object
{
public:
	::System::Action* FKHOJLMBILE; // 0x10
	::OABEMCGFDEP* KLHPEBKNIFB; // 0x18
	::UnityEngine::Color AOEKDFGHJPO; // 0x20
	::System::Int32 MDPILDGFNHN; // 0x30
	::UnityEngine::Color BJCPIOEELOL; // 0x34
	::System::Single IDBEJJEKGDI; // 0x44
	::System::Single MDPPNMIPDMP; // 0x48
	::System::Single IJPJJEDBEBH; // 0x4C

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OABEMCGFDEP_JOEOFPPLIFG__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OABEMCGFDEP_JOEOFPPLIFG_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OABEMCGFDEP_JOEOFPPLIFG_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OABEMCGFDEP_JOEOFPPLIFG_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OABEMCGFDEP_JOEOFPPLIFG_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OABEMCGFDEP_JOEOFPPLIFG_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
