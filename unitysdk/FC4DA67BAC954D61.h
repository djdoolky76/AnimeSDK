#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ABC::CustomRenderPipeline { class DecalVolume; }

#define FC4DA67BAC954D61_EE8C76B731BE55CE_OFFSET UNITYSDK_OFFSET(0x27BC570)

inline static constexpr unsigned int FC4DA67BAC954D61_TypeDefinitionIndex = 16661;

struct alignas(8) FC4DA67BAC954D61
{
	::ABC::CustomRenderPipeline::DecalVolume* E9C648BD7811E876; // 0x10
	::System::Single FA804D0B901FF125; // 0x18

	/*
	::System::Int32 EE8C76B731BE55CE(::FC4DA67BAC954D61 EAD222FBE830FF5E)
	{
		return ((::System::Int32(*)(::PVOID, ::FC4DA67BAC954D61))((::PBYTE)hIl2Cpp + FC4DA67BAC954D61_EE8C76B731BE55CE_OFFSET))(this, EAD222FBE830FF5E);
	}
	*/
};
