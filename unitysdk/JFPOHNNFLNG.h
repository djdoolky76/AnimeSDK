#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define JFPOHNNFLNG_LJMFBHIKHLN_OFFSET UNITYSDK_OFFSET(0x1A474BE0)
#define JFPOHNNFLNG_OIPMAIAGEBO_OFFSET UNITYSDK_OFFSET(0x1A474CA0)
#define JFPOHNNFLNG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A474BD0)

inline static constexpr unsigned int JFPOHNNFLNG_TypeDefinitionIndex = 90186;

class JFPOHNNFLNG : public ::System::Object
{
public:
	::UnityEngine::Transform* ACDOKEGBJAO; // 0x10

	::System::Void _ctor(::UnityEngine::Transform* GKBJOPJKCLB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + JFPOHNNFLNG__CTOR_OFFSET))(this, GKBJOPJKCLB);
	}

	::System::Void LJMFBHIKHLN(::UnityEngine::Vector3 JPKIKNCMAID)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JFPOHNNFLNG_LJMFBHIKHLN_OFFSET))(this, JPKIKNCMAID);
	}

	::System::Void OIPMAIAGEBO(::UnityEngine::Vector3 OHOGDOMNHNK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JFPOHNNFLNG_OIPMAIAGEBO_OFFSET))(this, OHOGDOMNHNK);
	}
};
