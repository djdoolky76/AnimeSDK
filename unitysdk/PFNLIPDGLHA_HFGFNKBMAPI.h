#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define PFNLIPDGLHA_HFGFNKBMAPI_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7CB950)

inline static constexpr unsigned int PFNLIPDGLHA_HFGFNKBMAPI_TypeDefinitionIndex = 85191;

struct alignas(8) PFNLIPDGLHA_HFGFNKBMAPI
{
	::System::Object* MHIPOAMJHGO; // 0x10

	::System::Void Execute(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PFNLIPDGLHA_HFGFNKBMAPI_EXECUTE_OFFSET))(this, ABHBKFJKINO);
	}
};
