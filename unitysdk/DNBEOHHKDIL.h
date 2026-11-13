#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define DNBEOHHKDIL_CTOR_OFFSET UNITYSDK_OFFSET(0x12CB05B0)
#define DNBEOHHKDIL_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x12CB0570)
#define DNBEOHHKDIL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x12CB03C0)
#define DNBEOHHKDIL_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x12CB03D0)

inline static constexpr unsigned int DNBEOHHKDIL_TypeDefinitionIndex = 57374;

	class DNBEOHHKDIL : public ::DBGDNLLDPFI
	{
	public:
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBEOHHKDIL_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBEOHHKDIL_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBEOHHKDIL_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBEOHHKDIL_ELEPDOMDAGA_OFFSET))(this);
		}

	};
