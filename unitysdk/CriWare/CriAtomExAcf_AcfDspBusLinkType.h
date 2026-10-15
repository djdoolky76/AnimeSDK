#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcf_AcfDspBusLinkType_TypeDefinitionIndex = 40028;

	enum class CriAtomExAcf_AcfDspBusLinkType : ::System::UInt32
	{
		preVolume = 0,
		postVolume = 1,
		postPan = 2,
	};
}
