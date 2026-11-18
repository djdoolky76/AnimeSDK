#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/AsyncGPUReadbackRequest.h"

class OEFEEFMOGPH_AHBNBFHKLDI;

#define OEFEEFMOGPH_PCLLHCJHCBD_BGOMKFOEAKC_OFFSET UNITYSDK_OFFSET(0x1B77AF10)
#define OEFEEFMOGPH_PCLLHCJHCBD_JKDGEEBBHHG_OFFSET UNITYSDK_OFFSET(0x1B77AD30)
#define OEFEEFMOGPH_PCLLHCJHCBD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B77AD20)

inline static constexpr unsigned int OEFEEFMOGPH_PCLLHCJHCBD_TypeDefinitionIndex = 49749;

class OEFEEFMOGPH_PCLLHCJHCBD : public ::System::Object
{
public:
	::OEFEEFMOGPH_AHBNBFHKLDI* FGBNBFHOKAA; // 0x10
	::System::Boolean PAJNCNHJDKM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFEEFMOGPH_PCLLHCJHCBD__CTOR_OFFSET))(this);
	}

	::System::Void JKDGEEBBHHG(::UnityEngine::Rendering::AsyncGPUReadbackRequest FCEIKAIDHPM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AsyncGPUReadbackRequest))((::PBYTE)hIl2Cpp + OEFEEFMOGPH_PCLLHCJHCBD_JKDGEEBBHHG_OFFSET))(this, FCEIKAIDHPM);
	}

	::System::Boolean BGOMKFOEAKC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFEEFMOGPH_PCLLHCJHCBD_BGOMKFOEAKC_OFFSET))(this);
	}
};
