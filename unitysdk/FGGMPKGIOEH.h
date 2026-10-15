#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEBEOIBOBPA.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define FGGMPKGIOEH_CTOR_OFFSET UNITYSDK_OFFSET(0x1575E280)
#define FGGMPKGIOEH_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x1575E140)
#define FGGMPKGIOEH_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x1575E180)
#define FGGMPKGIOEH_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1575DEF0)
#define FGGMPKGIOEH_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x1575DF00)

inline static constexpr unsigned int FGGMPKGIOEH_TypeDefinitionIndex = 56161;

	class FGGMPKGIOEH : public ::DBGDNLLDPFI
	{
	public:
		::CEBEOIBOBPA GPKCGOLOJKC; // 0x10
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x28
		::System::Byte LAOACNPDOLD; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGGMPKGIOEH_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + FGGMPKGIOEH_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGGMPKGIOEH_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGGMPKGIOEH_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGGMPKGIOEH_ELEPDOMDAGA_OFFSET))(this);
		}

	};
