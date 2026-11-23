#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABEBA93AD61764EF.h"

namespace UnityEngine { class Texture2D; }

#define FA12670CC530E764_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x28CD8E0)
#define FA12670CC530E764__CTOR_OFFSET UNITYSDK_OFFSET(0x28CD9A0)

inline static constexpr unsigned int FA12670CC530E764_TypeDefinitionIndex = 16313;

class FA12670CC530E764 : public ::ABEBA93AD61764EF
{
public:
	::UnityEngine::Texture2D* A23FA23CB449E590; // 0x18
	::System::Single FF21E41721615A4D; // 0x20

	::System::Boolean FC3208D7B8C7EE04(::FA12670CC530E764* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::FA12670CC530E764*))((::PBYTE)hIl2Cpp + FA12670CC530E764_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FA12670CC530E764__CTOR_OFFSET))(this);
	}
};
