#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PWPackageAction.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define PROCEDURALWORLDS_SETUP_PWPACKAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ProceduralWorlds::Setup
{
	inline static constexpr unsigned int PWPackageConfig_TypeDefinitionIndex = 15800;

	class PWPackageConfig : public ::System::Object
	{
	public:
		::System::String* m_packageID; // 0x10
		::PWPackageAction m_lastAction; // 0x18
		::System::Int32 m_majorVersion; // 0x1C
		::System::Int32 m_minorVersion; // 0x20
		::System::Int32 m_patchVersion; // 0x24
		::System::Double m_installTimeStamp; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROCEDURALWORLDS_SETUP_PWPACKAGECONFIG__CTOR_OFFSET))(this);
		}
	};
}
