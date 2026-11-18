#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define LDKAJKFFOED___C_FCJKJLOLEEK_OFFSET UNITYSDK_OFFSET(0x15181E20)
#define LDKAJKFFOED___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15181DD0)
#define LDKAJKFFOED___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15181E10)

inline static constexpr unsigned int LDKAJKFFOED___c_TypeDefinitionIndex = 90511;

class LDKAJKFFOED___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LDKAJKFFOED___c_TypeDefinitionIndex)->GetStaticField(0x4E700);
	}
	static ::UnityEngine::Events::UnityAction_1<::System::Int32>** StaticGet___9__48_0()
	{
		return (::UnityEngine::Events::UnityAction_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LDKAJKFFOED___c_TypeDefinitionIndex)->GetStaticField(0x4E708);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDKAJKFFOED___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDKAJKFFOED___C__CTOR_OFFSET))(this);
	}

	::System::Void FCJKJLOLEEK(::System::Int32 PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDKAJKFFOED___C_FCJKJLOLEEK_OFFSET))(this, PIIPCLCCOIG);
	}
};
