#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define ELCLKNKAIJA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10F3E710)
#define ELCLKNKAIJA__CTOR_OFFSET UNITYSDK_OFFSET(0x10F3E750)

inline static constexpr unsigned int ELCLKNKAIJA_TypeDefinitionIndex = 61963;

class ELCLKNKAIJA : public ::System::Object
{
public:
	::System::String* JNAJDCADOOA; // 0x10
	::System::Int32 NNLFHOLLBPP; // 0x18
	::UnityEngine::Vector3 ILOJFPNKJII; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCLKNKAIJA__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCLKNKAIJA_DISPOSE_OFFSET))(this);
	}
};
