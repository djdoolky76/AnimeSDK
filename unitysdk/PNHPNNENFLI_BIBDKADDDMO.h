#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNHPNNENFLI;
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define PNHPNNENFLI_BIBDKADDDMO_ILKKGKCMANN_OFFSET UNITYSDK_OFFSET(0x1C698FF0)
#define PNHPNNENFLI_BIBDKADDDMO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C698FE0)

inline static constexpr unsigned int PNHPNNENFLI_BIBDKADDDMO_TypeDefinitionIndex = 67268;

class PNHPNNENFLI_BIBDKADDDMO : public ::System::Object
{
public:
	::PNHPNNENFLI* KLHPEBKNIFB; // 0x10
	::System::Action_1<::System::Boolean>* EJGDHCIBCJH; // 0x18
	::System::Int32 IFGMFALNKOH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHPNNENFLI_BIBDKADDDMO__CTOR_OFFSET))(this);
	}

	::System::Void ILKKGKCMANN(::System::Boolean EBAJLMBGMFE, ::UnityEngine::GameObject* ILOAGIIOHDI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + PNHPNNENFLI_BIBDKADDDMO_ILKKGKCMANN_OFFSET))(this, EBAJLMBGMFE, ILOAGIIOHDI);
	}
};
