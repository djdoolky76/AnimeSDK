#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/System/Guid.h"
class ECIAICDLAHO;

#define MOIIIDMHOFK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC84560)
#define MOIIIDMHOFK_GET_ADDINGCONCRETE_OFFSET UNITYSDK_OFFSET(0x1EC87B80)
#define MOIIIDMHOFK_GET_CONFLICTGUID_OFFSET UNITYSDK_OFFSET(0x1EC87B70)
#define MOIIIDMHOFK_GET_EXISTINGCONCRETE_OFFSET UNITYSDK_OFFSET(0x1EC87B90)

	class MOIIIDMHOFK : public ::System::Exception
	{
	public:
		::ECIAICDLAHO* _ExistingConcrete_k__BackingField; // 0x88
		::ECIAICDLAHO* _AddingConcrete_k__BackingField; // 0x90
		::System::Guid _ConflictGuid_k__BackingField; // 0x98
		::System::Void _ctor(::System::Guid a1, ::ECIAICDLAHO* a2, ::ECIAICDLAHO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid, ::ECIAICDLAHO*, ::ECIAICDLAHO*))((::PBYTE)hIl2Cpp + MOIIIDMHOFK_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Guid get_ConflictGuid()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIIIDMHOFK_GET_CONFLICTGUID_OFFSET))(this);
		}

		::ECIAICDLAHO* get_AddingConcrete()
		{
			return ((::ECIAICDLAHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIIIDMHOFK_GET_ADDINGCONCRETE_OFFSET))(this);
		}

		::ECIAICDLAHO* get_ExistingConcrete()
		{
			return ((::ECIAICDLAHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIIIDMHOFK_GET_EXISTINGCONCRETE_OFFSET))(this);
		}

	};
