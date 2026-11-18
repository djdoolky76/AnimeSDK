#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Texture; }

#define NABPENOLBPN__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1726A7E0)
#define NABPENOLBPN__CTOR_OFFSET UNITYSDK_OFFSET(0x1726A630)

inline static constexpr unsigned int NABPENOLBPN_TypeDefinitionIndex = 44176;

class NABPENOLBPN : public ::System::Object
{
public:
	::Foundation::AssetRequestHandle OADMBEMILNJ; // 0x10
	::UnityEngine::Texture* GLBPBKDPCBD; // 0x30

	::System::Void _ctor(::Foundation::AssetRequestHandle DLJPLHKELCO)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + NABPENOLBPN__CTOR_OFFSET))(this, DLJPLHKELCO);
	}

	::System::Void _ctor_1(::UnityEngine::Texture* IMLLDOHDCNC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + NABPENOLBPN__CTOR_1_OFFSET))(this, IMLLDOHDCNC);
	}
};
