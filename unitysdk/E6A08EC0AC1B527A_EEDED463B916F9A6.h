#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E6A08EC0AC1B527A_E3AB53EF614F9284;
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class GameObject; }

#define E6A08EC0AC1B527A_EEDED463B916F9A6_AEA2AEFB045C52DE_OFFSET UNITYSDK_OFFSET(0x43CADC0)
#define E6A08EC0AC1B527A_EEDED463B916F9A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x43CAE30)
#define E6A08EC0AC1B527A_EEDED463B916F9A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E6A08EC0AC1B527A_EEDED463B916F9A6_TypeDefinitionIndex = 18652;

class E6A08EC0AC1B527A_EEDED463B916F9A6 : public ::System::Object
{
public:
	static ::E6A08EC0AC1B527A_E3AB53EF614F9284** StaticGet_EF2E6918210D1E4E()
	{
		return (::E6A08EC0AC1B527A_E3AB53EF614F9284**)Il2CppClass::FromTypeDefinitionIndex(E6A08EC0AC1B527A_EEDED463B916F9A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	::UnityEngine::GameObject* AEA2AEFB045C52DE(::System::String* F79B4D487F303AB2, ::Il2CppArray<::System::Type*>* FF63FAF59D531C28)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + E6A08EC0AC1B527A_EEDED463B916F9A6_AEA2AEFB045C52DE_OFFSET))(this, F79B4D487F303AB2, FF63FAF59D531C28);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E6A08EC0AC1B527A_EEDED463B916F9A6__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E6A08EC0AC1B527A_EEDED463B916F9A6__CCTOR_OFFSET))();
	}
};
