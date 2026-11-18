#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FGCEGMGDIJO;
namespace System { template <typename T> class Action_1; }

#define HKGPHAMAJOG___C_NEKLEBEIMNP_OFFSET UNITYSDK_OFFSET(0x16F420A0)
#define HKGPHAMAJOG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F42050)
#define HKGPHAMAJOG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16F42090)

inline static constexpr unsigned int HKGPHAMAJOG___c_TypeDefinitionIndex = 58661;

class HKGPHAMAJOG___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HKGPHAMAJOG___c_TypeDefinitionIndex)->GetStaticField(0x37B30);
	}
	static ::System::Action_1<::FGCEGMGDIJO*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::FGCEGMGDIJO*>**)Il2CppClass::FromTypeDefinitionIndex(HKGPHAMAJOG___c_TypeDefinitionIndex)->GetStaticField(0x37B38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKGPHAMAJOG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKGPHAMAJOG___C__CTOR_OFFSET))(this);
	}

	::System::Void NEKLEBEIMNP(::FGCEGMGDIJO* DPGFPHIMDEL)
	{
		return ((::System::Void(*)(::PVOID, ::FGCEGMGDIJO*))((::PBYTE)hIl2Cpp + HKGPHAMAJOG___C_NEKLEBEIMNP_OFFSET))(this, DPGFPHIMDEL);
	}
};
