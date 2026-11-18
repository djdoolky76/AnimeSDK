#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Text; }

#define DEBUGFORCPINSPECTOR_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1EF26950)
#define DEBUGFORCPINSPECTOR_RESETDATA_OFFSET UNITYSDK_OFFSET(0x1EF26900)
#define DEBUGFORCPINSPECTOR_START_OFFSET UNITYSDK_OFFSET(0x1EF25F20)
#define DEBUGFORCPINSPECTOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF285B0)
#define DEBUGFORCPINSPECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF283C0)

inline static constexpr unsigned int DebugForCPInspector_TypeDefinitionIndex = 96427;

class DebugForCPInspector : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Comparison_1<::System::Object*>** StaticGet_CompareMethord()
	{
		return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(DebugForCPInspector_TypeDefinitionIndex)->GetStaticField(0x52E90);
	}
	static ::System::Comparison_1<::System::Object*>** StaticGet_CompareBuffMethord()
	{
		return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(DebugForCPInspector_TypeDefinitionIndex)->GetStaticField(0x52E98);
	}
	::UnityEngine::UI::Text* entityText; // 0x18
	::UnityEngine::UI::Text* cpText; // 0x20
	::UnityEngine::UI::Text* monsterText; // 0x28
	::UnityEngine::UI::Text* bulletText; // 0x30
	::UnityEngine::UI::Text* effectsText; // 0x38
	::UnityEngine::UI::Text* buffText; // 0x40
	::UnityEngine::UI::Text* lootsText; // 0x48
	::UnityEngine::UI::Text* buffContext; // 0x50
	::UnityEngine::UI::Text* effectsContext; // 0x58
	::System::Int32 entityCount; // 0x60
	::System::Int32 cpCount; // 0x64
	::System::Int32 monsterCount; // 0x68
	::System::Int32 bulletCount; // 0x6C
	::System::Int32 effectCount; // 0x70
	::System::Int32 buffCount; // 0x74
	::System::Int32 lootsCount; // 0x78
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::System::Object*>* effectSort; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* effectsDict; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* globalBuffsDict; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* buffsDict; // 0x98
	::System::Collections::Generic::List_1<::System::Object*>* buffInfosSort; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGFORCPINSPECTOR__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEBUGFORCPINSPECTOR__CCTOR_OFFSET))();
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGFORCPINSPECTOR_START_OFFSET))(this);
	}

	::System::Void ResetData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGFORCPINSPECTOR_RESETDATA_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGFORCPINSPECTOR_LATEUPDATE_OFFSET))(this);
	}
};
