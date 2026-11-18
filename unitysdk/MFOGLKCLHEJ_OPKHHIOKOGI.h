#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define MFOGLKCLHEJ_OPKHHIOKOGI_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x11F49610)
#define MFOGLKCLHEJ_OPKHHIOKOGI__CTOR_OFFSET UNITYSDK_OFFSET(0x11F49760)

inline static constexpr unsigned int MFOGLKCLHEJ_OPKHHIOKOGI_TypeDefinitionIndex = 40042;

class MFOGLKCLHEJ_OPKHHIOKOGI : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* FFPIPKNMDOK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFOGLKCLHEJ_OPKHHIOKOGI__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFOGLKCLHEJ_OPKHHIOKOGI_LBJEOHBBBPN_OFFSET))(this);
	}
};
