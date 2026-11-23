#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E631FC551E4747B3/B50922BDAAF4FBAC.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define B3D90A0407D3B44A__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B3D90A0407D3B44A_TypeDefinitionIndex = 20314;

class B3D90A0407D3B44A : public ::System::Object
{
public:
	::System::Type* AFE190463BB89CC7; // 0x10
	::System::Int32 E265691B18455666; // 0x18
	::System::Int32 E34B3EEB9B13C07F; // 0x1C
	::System::Int32 E768404C346AFD82; // 0x20
	::E631FC551E4747B3::B50922BDAAF4FBAC ACA6B19C99B0C3DA; // 0x24
	::System::Int32 B80B39743E5DCCD7; // 0x28
	::System::Int32 F49F21C8FBE41842; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B3D90A0407D3B44A__CTOR_OFFSET))(this);
	}
};
