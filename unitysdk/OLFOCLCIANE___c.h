#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MJPFPNKPDIP;
namespace System { template <typename T> class Action_1; }

#define OLFOCLCIANE___C_PLACCFJJGGK_OFFSET UNITYSDK_OFFSET(0xF19B430)
#define OLFOCLCIANE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF19B3E0)
#define OLFOCLCIANE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF19B420)

inline static constexpr unsigned int OLFOCLCIANE___c_TypeDefinitionIndex = 41315;

class OLFOCLCIANE___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OLFOCLCIANE___c_TypeDefinitionIndex)->GetStaticField(0x3CE30);
	}
	static ::System::Action_1<::MJPFPNKPDIP*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::MJPFPNKPDIP*>**)Il2CppClass::FromTypeDefinitionIndex(OLFOCLCIANE___c_TypeDefinitionIndex)->GetStaticField(0x3CE38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLFOCLCIANE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFOCLCIANE___C__CTOR_OFFSET))(this);
	}

	::System::Void PLACCFJJGGK(::MJPFPNKPDIP* BDEKNNDEIEM)
	{
		return ((::System::Void(*)(::PVOID, ::MJPFPNKPDIP*))((::PBYTE)hIl2Cpp + OLFOCLCIANE___C_PLACCFJJGGK_OFFSET))(this, BDEKNNDEIEM);
	}
};
