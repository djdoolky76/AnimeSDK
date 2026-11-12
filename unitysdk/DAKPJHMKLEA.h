#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/PreValidationFailureReason.h"
#include "unitysdk/System/Object.h"
class EAGPPDDBBIM;
class HLJNBBHKKMI;

#define DAKPJHMKLEA_CHECK_OFFSET UNITYSDK_OFFSET(0xE928750)
#define DAKPJHMKLEA_CTOR_OFFSET UNITYSDK_OFFSET(0xE928740)

inline static constexpr unsigned int DAKPJHMKLEA_TypeDefinitionIndex = 80058;

	class DAKPJHMKLEA : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		::System::Void _ctor(::HLJNBBHKKMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + DAKPJHMKLEA_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason Check(::EAGPPDDBBIM* a1)
		{
			return ((::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason(*)(::PVOID, ::EAGPPDDBBIM*))((::PBYTE)hIl2Cpp + DAKPJHMKLEA_CHECK_OFFSET))(this, a1);
		}

	};
