#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class MdbComponent; }

#define EDHBEKCHCGC_BPNCPBDNIIM_OFFSET UNITYSDK_OFFSET(0x15896580)
#define EDHBEKCHCGC_POCBCOJEIOG_OFFSET UNITYSDK_OFFSET(0x15896600)

inline static constexpr unsigned int EDHBEKCHCGC_TypeDefinitionIndex = 78784;

class EDHBEKCHCGC : public ::System::Object
{
public:
	// static const ::System::Single KBIPEBFNFKH; // 0x0
	// static const ::System::Single DICIONPCJEK; // 0x0

	static ::System::Boolean BPNCPBDNIIM(::UnityEngine::MdbComponent* HBNBIBADGNH, ::System::Int32 JOFINIIEAIA)
	{
		return ((::System::Boolean(*)(::UnityEngine::MdbComponent*, ::System::Int32))((::PBYTE)hIl2Cpp + EDHBEKCHCGC_BPNCPBDNIIM_OFFSET))(HBNBIBADGNH, JOFINIIEAIA);
	}

	static ::System::Void POCBCOJEIOG(::UnityEngine::MdbComponent* HBNBIBADGNH, ::System::Int32 JOFINIIEAIA, ::System::Boolean DECIDLELLCP, ::System::Single OODGHMPIODB)
	{
		return ((::System::Void(*)(::UnityEngine::MdbComponent*, ::System::Int32, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + EDHBEKCHCGC_POCBCOJEIOG_OFFSET))(HBNBIBADGNH, JOFINIIEAIA, DECIDLELLCP, OODGHMPIODB);
	}
};
