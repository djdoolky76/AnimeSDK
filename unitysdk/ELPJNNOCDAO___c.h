#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IAILHEEBLFF;
namespace System { template <typename T> class Action_1; }

#define ELPJNNOCDAO___C_DEOJOOGDNMO_OFFSET UNITYSDK_OFFSET(0x14276FC0)
#define ELPJNNOCDAO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14276F70)
#define ELPJNNOCDAO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14276FB0)

inline static constexpr unsigned int ELPJNNOCDAO___c_TypeDefinitionIndex = 78782;

class ELPJNNOCDAO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ELPJNNOCDAO___c_TypeDefinitionIndex)->GetStaticField(0x31820);
	}
	static ::System::Action_1<::IAILHEEBLFF*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::IAILHEEBLFF*>**)Il2CppClass::FromTypeDefinitionIndex(ELPJNNOCDAO___c_TypeDefinitionIndex)->GetStaticField(0x31828);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELPJNNOCDAO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPJNNOCDAO___C__CTOR_OFFSET))(this);
	}

	::System::Void DEOJOOGDNMO(::IAILHEEBLFF* PLGIFCMOBOL)
	{
		return ((::System::Void(*)(::PVOID, ::IAILHEEBLFF*))((::PBYTE)hIl2Cpp + ELPJNNOCDAO___C_DEOJOOGDNMO_OFFSET))(this, PLGIFCMOBOL);
	}
};
