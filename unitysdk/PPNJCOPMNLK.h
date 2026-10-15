#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define PPNJCOPMNLK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7C99B0)
#define PPNJCOPMNLK_GHFNNDPKDMK_OFFSET UNITYSDK_OFFSET(0x1C7C99C0)
#define PPNJCOPMNLK_KAGICIAJEEA_OFFSET UNITYSDK_OFFSET(0x1C7C9A50)

inline static constexpr unsigned int PPNJCOPMNLK_TypeDefinitionIndex = 37115;

	class PPNJCOPMNLK : public ::System::Object
	{
	public:
		::System::Action* PEIHJAEIGHK; // 0x10
		::System::Single DBBJFODNPCA; // 0x18
		::System::Single PGMIOKKLHIE; // 0x1C
		::System::Void _ctor(::System::Action* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + PPNJCOPMNLK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void GHFNNDPKDMK(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + PPNJCOPMNLK_GHFNNDPKDMK_OFFSET))(this, a1, a2);
		}

		::System::Boolean KAGICIAJEEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNJCOPMNLK_KAGICIAJEEA_OFFSET))(this);
		}

	};
