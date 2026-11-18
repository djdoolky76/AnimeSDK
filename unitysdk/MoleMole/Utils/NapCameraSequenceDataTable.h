#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

#define MOLEMOLE_UTILS_NAPCAMERASEQUENCEDATATABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x13EB2290)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int NapCameraSequenceDataTable_TypeDefinitionIndex = 55343;

	class NapCameraSequenceDataTable : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_NAPCAMERASEQUENCEDATATABLE__CTOR_OFFSET))(this);
		}
	};
}
