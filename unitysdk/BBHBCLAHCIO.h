#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JCHBFEIOIHA.h"
class BBHBCLAHCIO;
class FOPGGMEFEKC;
class JCHBFEIOIHA;
class PKBOFOOJCGL;
namespace RPG::GameCore { class HipplenIncidentStoryStepConfig; }

#define BBHBCLAHCIO_AKPIEMKIKEP_OFFSET UNITYSDK_OFFSET(0x15E8A750)
#define BBHBCLAHCIO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15E8A510)
#define BBHBCLAHCIO_CNKLGPEIBGI_OFFSET UNITYSDK_OFFSET(0x15E8A6B0)
#define BBHBCLAHCIO_CTOR_OFFSET UNITYSDK_OFFSET(0x15E8A620)
#define BBHBCLAHCIO_KLDGDIIJOOH_OFFSET UNITYSDK_OFFSET(0x15E8A7B0)

inline static constexpr unsigned int BBHBCLAHCIO_TypeDefinitionIndex = 75558;

	class BBHBCLAHCIO : public ::JCHBFEIOIHA
	{
	public:
		::RPG::GameCore::HipplenIncidentStoryStepConfig* IGHAHBNLIJA; // 0x30
		::System::Void _ctor(::RPG::GameCore::HipplenIncidentStoryStepConfig* a1, ::PKBOFOOJCGL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HipplenIncidentStoryStepConfig*, ::PKBOFOOJCGL*))((::PBYTE)hIl2Cpp + BBHBCLAHCIO_CTOR_OFFSET))(this, a1, a2);
		}

		static ::BBHBCLAHCIO* BPLPBPMEODA(::RPG::GameCore::HipplenIncidentStoryStepConfig* a1, ::PKBOFOOJCGL* a2)
		{
			return ((::BBHBCLAHCIO*(*)(::RPG::GameCore::HipplenIncidentStoryStepConfig*, ::PKBOFOOJCGL*))((::PBYTE)hIl2Cpp + BBHBCLAHCIO_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void CNKLGPEIBGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHBCLAHCIO_CNKLGPEIBGI_OFFSET))(this);
		}

		::JCHBFEIOIHA* AKPIEMKIKEP()
		{
			return ((::JCHBFEIOIHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHBCLAHCIO_AKPIEMKIKEP_OFFSET))(this);
		}

		::System::Void KLDGDIIJOOH(::FOPGGMEFEKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOPGGMEFEKC*))((::PBYTE)hIl2Cpp + BBHBCLAHCIO_KLDGDIIJOOH_OFFSET))(this, a1);
		}

	};
