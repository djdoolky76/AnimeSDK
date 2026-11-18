#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EIOKLKEJAME;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define DODHDNJCLCI_COKNIICCODC_1_OFFSET UNITYSDK_OFFSET(0x13E5C5A0)
#define DODHDNJCLCI_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x13E5C390)
#define DODHDNJCLCI_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0x13E5C080)
#define DODHDNJCLCI_GET_SOUNDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x13E5C070)
#define DODHDNJCLCI_POLISH_OFFSET UNITYSDK_OFFSET(0x13E5C330)
#define DODHDNJCLCI_RECYCLE_OFFSET UNITYSDK_OFFSET(0x13E5C260)
#define DODHDNJCLCI__CTOR_OFFSET UNITYSDK_OFFSET(0x13E5C380)

inline static constexpr unsigned int DODHDNJCLCI_TypeDefinitionIndex = 84499;

class DODHDNJCLCI : public ::System::Object
{
public:
	::UnityEngine::GameObject* JEIDPPCEHLD; // 0x10
	::System::String* MJEEGEKDHMI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DODHDNJCLCI__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* get_soundGameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + DODHDNJCLCI_GET_SOUNDGAMEOBJECT_OFFSET))(this);
	}

	::System::String* get_soundActionSourceHint()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DODHDNJCLCI_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
	}

	::System::Void Recycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DODHDNJCLCI_RECYCLE_OFFSET))(this);
	}

	::System::Void Polish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DODHDNJCLCI_POLISH_OFFSET))(this);
	}

	static ::DODHDNJCLCI* COKNIICCODC(::EIOKLKEJAME* LIBPKNHDIGP)
	{
		return ((::DODHDNJCLCI*(*)(::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + DODHDNJCLCI_COKNIICCODC_OFFSET))(LIBPKNHDIGP);
	}

	static ::DODHDNJCLCI* COKNIICCODC_1(::UnityEngine::GameObject* JEIDPPCEHLD, ::System::String* MJEEGEKDHMI)
	{
		return ((::DODHDNJCLCI*(*)(::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + DODHDNJCLCI_COKNIICCODC_1_OFFSET))(JEIDPPCEHLD, MJEEGEKDHMI);
	}
};
