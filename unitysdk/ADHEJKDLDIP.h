#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/PreValidationFailureReason.h"
#include "unitysdk/System/Object.h"
class CNOCFBPBNFD;
class HLJNBBHKKMI;
class LPHINGPIEAJ;

#define ADHEJKDLDIP_CTOR_OFFSET UNITYSDK_OFFSET(0x182A99A0)
#define ADHEJKDLDIP_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0x182A99F0)

inline static constexpr unsigned int ADHEJKDLDIP_TypeDefinitionIndex = 79948;

	class ADHEJKDLDIP : public ::System::Object
	{
	public:
		::CNOCFBPBNFD* LOIABNPGPLC; // 0x10
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::LPHINGPIEAJ* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + ADHEJKDLDIP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void DMKJAJLNEBK(::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason))((::PBYTE)hIl2Cpp + ADHEJKDLDIP_DMKJAJLNEBK_OFFSET))(this, a1);
		}

	};
