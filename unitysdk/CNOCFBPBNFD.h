#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/PreValidationFailureReason.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class LPHINGPIEAJ;

#define CNOCFBPBNFD_CTOR_OFFSET UNITYSDK_OFFSET(0x19152E70)
#define CNOCFBPBNFD_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0x19152E80)
#define CNOCFBPBNFD_HGNNNJJHDMI_OFFSET UNITYSDK_OFFSET(0x19152F50)

inline static constexpr unsigned int CNOCFBPBNFD_TypeDefinitionIndex = 79947;

	class CNOCFBPBNFD : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		::LPHINGPIEAJ* HDDOOONCFPA; // 0x18
		::System::Void _ctor(::LPHINGPIEAJ* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + CNOCFBPBNFD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void DMKJAJLNEBK(::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason))((::PBYTE)hIl2Cpp + CNOCFBPBNFD_DMKJAJLNEBK_OFFSET))(this, a1);
		}

		::System::Void HGNNNJJHDMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOCFBPBNFD_HGNNNJJHDMI_OFFSET))(this);
		}

	};
