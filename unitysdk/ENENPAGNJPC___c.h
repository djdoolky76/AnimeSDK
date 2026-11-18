#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define ENENPAGNJPC___C_FNKFPOGMBLB_OFFSET UNITYSDK_OFFSET(0x1712FD50)
#define ENENPAGNJPC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1712FD00)
#define ENENPAGNJPC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1712FD40)

inline static constexpr unsigned int ENENPAGNJPC___c_TypeDefinitionIndex = 39893;

class ENENPAGNJPC___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ENENPAGNJPC___c_TypeDefinitionIndex)->GetStaticField(0x40850);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__3_2()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(ENENPAGNJPC___c_TypeDefinitionIndex)->GetStaticField(0x40858);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENENPAGNJPC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENENPAGNJPC___C__CTOR_OFFSET))(this);
	}

	::System::Void FNKFPOGMBLB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENENPAGNJPC___C_FNKFPOGMBLB_OFFSET))(this);
	}
};
