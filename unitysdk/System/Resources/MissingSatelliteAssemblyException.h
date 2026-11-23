#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/SystemException.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;
namespace System { class String; }

#define SYSTEM_RESOURCES_MISSINGSATELLITEASSEMBLYEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3D06BB0)
#define SYSTEM_RESOURCES_MISSINGSATELLITEASSEMBLYEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3B5EFC0)
#define SYSTEM_RESOURCES_MISSINGSATELLITEASSEMBLYEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3D06BF0)

namespace System::Resources
{
	inline static constexpr unsigned int MissingSatelliteAssemblyException_TypeDefinitionIndex = 10796;

	class MissingSatelliteAssemblyException : public ::System::SystemException
	{
	public:
		::System::String* _cultureName; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MISSINGSATELLITEASSEMBLYEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* B083BE7841B347C4, ::System::String* ACA630B0177A1462)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MISSINGSATELLITEASSEMBLYEXCEPTION__CTOR_1_OFFSET))(this, B083BE7841B347C4, ACA630B0177A1462);
		}

		::System::Void _ctor_2(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MISSINGSATELLITEASSEMBLYEXCEPTION__CTOR_2_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}
	};
}
