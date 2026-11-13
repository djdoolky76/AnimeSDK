#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/PreValidationFailureReason.h"
#include "unitysdk/System/Object.h"
class EAGPPDDBBIM;

#define OLIJAGFAOBM_CHECK_OFFSET UNITYSDK_OFFSET(0x178AC6C0)
#define OLIJAGFAOBM_CTOR_OFFSET UNITYSDK_OFFSET(0x178AC710)

inline static constexpr unsigned int OLIJAGFAOBM_TypeDefinitionIndex = 80058;

	class OLIJAGFAOBM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLIJAGFAOBM_CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason Check(::EAGPPDDBBIM* a1)
		{
			return ((::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason(*)(::PVOID, ::EAGPPDDBBIM*))((::PBYTE)hIl2Cpp + OLIJAGFAOBM_CHECK_OFFSET))(this, a1);
		}

	};
