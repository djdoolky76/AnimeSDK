#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Collision; }

#define EIIMDMMEDDN_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x158B1910)

inline static constexpr unsigned int EIIMDMMEDDN_TypeDefinitionIndex = 78046;

struct alignas(8) EIIMDMMEDDN
{
	::System::Int32 LKKGPEMNOFL; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* KBIECIBMCHM; // 0x18
	::UnityEngine::Vector3 OPMPKFEHOBM; // 0x20
	::UnityEngine::Vector3 AGHNEGFHKMC; // 0x2C
	::System::Single FJMBILDFIOA; // 0x38
	::System::Byte _padding1[0x4];
	::MoleMole::EntityHandle GODKLFLMBAI; // 0x40

	/*
	static ::EIIMDMMEDDN COKNIICCODC(::UnityEngine::Collision* GMKILPBDCFN, ::MoleMole::EntityHandle GODKLFLMBAI)
	{
		return ((::EIIMDMMEDDN(*)(::UnityEngine::Collision*, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + EIIMDMMEDDN_COKNIICCODC_OFFSET))(GMKILPBDCFN, GODKLFLMBAI);
	}
	*/
};
