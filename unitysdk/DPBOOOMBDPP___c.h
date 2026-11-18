#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FEBPGLCAPDN;
namespace System { template <typename T> class Action_1; }

#define DPBOOOMBDPP___C_GNEBHFKEFHA_OFFSET UNITYSDK_OFFSET(0xF99FE30)
#define DPBOOOMBDPP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF99FDE0)
#define DPBOOOMBDPP___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF99FE20)

inline static constexpr unsigned int DPBOOOMBDPP___c_TypeDefinitionIndex = 57477;

class DPBOOOMBDPP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DPBOOOMBDPP___c_TypeDefinitionIndex)->GetStaticField(0x43210);
	}
	static ::System::Action_1<::FEBPGLCAPDN*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::FEBPGLCAPDN*>**)Il2CppClass::FromTypeDefinitionIndex(DPBOOOMBDPP___c_TypeDefinitionIndex)->GetStaticField(0x43218);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPBOOOMBDPP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPBOOOMBDPP___C__CTOR_OFFSET))(this);
	}

	::System::Void GNEBHFKEFHA(::FEBPGLCAPDN* HBNBIBADGNH)
	{
		return ((::System::Void(*)(::PVOID, ::FEBPGLCAPDN*))((::PBYTE)hIl2Cpp + DPBOOOMBDPP___C_GNEBHFKEFHA_OFFSET))(this, HBNBIBADGNH);
	}
};
