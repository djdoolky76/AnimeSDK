#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define OGAIPOKKFGH_CTOR_OFFSET UNITYSDK_OFFSET(0xC708350)
#define OGAIPOKKFGH_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xC708130)
#define OGAIPOKKFGH_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xC708170)
#define OGAIPOKKFGH_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xC707E20)
#define OGAIPOKKFGH_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xC707E30)

inline static constexpr unsigned int OGAIPOKKFGH_TypeDefinitionIndex = 57371;

	class OGAIPOKKFGH : public ::DBGDNLLDPFI
	{
	public:
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x10
		::System::Int32 ACHILGIPGKL; // 0x14
		::RPG::GameCore::FixPoint KHBBNDBJAFK; // 0x18
		::RPG::GameCore::FixPoint DHPDILNLIPC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGAIPOKKFGH_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + OGAIPOKKFGH_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGAIPOKKFGH_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGAIPOKKFGH_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGAIPOKKFGH_ELEPDOMDAGA_OFFSET))(this);
		}

	};
