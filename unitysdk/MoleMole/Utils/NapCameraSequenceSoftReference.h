#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_UTILS_NAPCAMERASEQUENCESOFTREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x170DD4E0)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int NapCameraSequenceSoftReference_TypeDefinitionIndex = 83130;

	class NapCameraSequenceSoftReference
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_NAPCAMERASEQUENCESOFTREFERENCE__CTOR_OFFSET))(this);
		}
	};
}
