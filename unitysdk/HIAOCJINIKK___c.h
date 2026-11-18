#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define HIAOCJINIKK___C_MDGOOKKBNIG_OFFSET UNITYSDK_OFFSET(0x146FCBE0)
#define HIAOCJINIKK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x146FCB90)
#define HIAOCJINIKK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x146FCBD0)

inline static constexpr unsigned int HIAOCJINIKK___c_TypeDefinitionIndex = 60135;

class HIAOCJINIKK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HIAOCJINIKK___c_TypeDefinitionIndex)->GetStaticField(0x4BAC0);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__11_1()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(HIAOCJINIKK___c_TypeDefinitionIndex)->GetStaticField(0x4BAC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIAOCJINIKK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAOCJINIKK___C__CTOR_OFFSET))(this);
	}

	::System::Void MDGOOKKBNIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAOCJINIKK___C_MDGOOKKBNIG_OFFSET))(this);
	}
};
