#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKHHFIJCHEP;

#define LJKNCLIOGAG_CTOR_OFFSET UNITYSDK_OFFSET(0xB716130)
#define LJKNCLIOGAG_GET_GAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xB716120)

inline static constexpr unsigned int LJKNCLIOGAG_TypeDefinitionIndex = 76055;

	class LJKNCLIOGAG : public ::System::Object
	{
	public:
		::BKHHFIJCHEP* _GameInstance_k__BackingField; // 0x10
		::System::Void _ctor(::BKHHFIJCHEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*))((::PBYTE)hIl2Cpp + LJKNCLIOGAG_CTOR_OFFSET))(this, a1);
		}

		::BKHHFIJCHEP* get_GameInstance()
		{
			return ((::BKHHFIJCHEP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJKNCLIOGAG_GET_GAMEINSTANCE_OFFSET))(this);
		}

	};
