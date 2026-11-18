#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }

#define MFLNBPMNMFG__CCTOR_OFFSET UNITYSDK_OFFSET(0x11F49590)

inline static constexpr unsigned int MFLNBPMNMFG_TypeDefinitionIndex = 90412;

struct alignas(8) MFLNBPMNMFG
{
	static ::MFLNBPMNMFG* StaticGet_DDGNFJDLOKA()
	{
		return (::MFLNBPMNMFG*)Il2CppClass::FromTypeDefinitionIndex(MFLNBPMNMFG_TypeDefinitionIndex)->GetStaticField(0x3D010);
	}
	::System::Action* JINCFIGEAKM; // 0x10
	::System::Action* HBPLINHBFFK; // 0x18
	::System::Action* DCJMFMAHBLD; // 0x20
	::System::Action* OIBKFFAGPNH; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFLNBPMNMFG__CCTOR_OFFSET))();
	}
};
